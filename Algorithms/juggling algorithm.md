# juggling algorithm

> ## overview

The Juggling Algorithm is an efficient approach to rotate an array by d positions. It works by dividing the array into sets based on the greatest common divisor (GCD) of the array size n and the rotation count d, then cyclically moving elements within each set.

> ## Problem Statement

Rotate an array of size n to the left by d positions.

Example

    Input: Array = [1, 2, 3, 4, 5, 6, 7], d=2

    Output: [3, 4, 5, 6, 7, 1, 2]

>## Algorithm Explanation

The algorithm treats the array as divided into GCD(n,d) sets and performs rotations within each set. Here's how it works step by step:

Calculate the GCD of n (size of array) and d (number of positions to rotate).For each of the GCD(n,d) sets:

Start at an element and move it to its correct position.

Continue the process until you cycle back to the starting position of that set.

> ## Steps in Detail

Compute GCD(n,d). This determines the number of sets.

For each set:

    Pick the starting element.
    
    Rotate elements within the set by replacing each with the element d positions ahead.
    
    Stop when you return to the starting position.

>## Code
    
    from math import gcd
    
    def juggling_rotate(array, d):
        n = len(array)
        d = d % n  # Handle cases where d > n
        g = gcd(n, d)  # Compute GCD of n and d
    
    # Loop through each set
    for i in range(g):
        temp = array[i]  # Store the first element of the set
        j = i
        while True:
            k = (j + d) % n  # Calculate the index to move to
            if k == i:  # If we return to the starting index, stop
                break
            array[j] = array[k]  # Move the element
            j = k
        array[j] = temp  # Place the stored element in its final position

>## Complexity Analysis

### Time Complexity: O(n)

Each element is moved exactly once, so the time complexity is linear.


### Space Complexity: O(1)

The algorithm operates in-place without additional storage.
