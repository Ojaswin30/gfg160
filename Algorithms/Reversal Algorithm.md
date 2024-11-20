# **REVERSAL ALGORITHM**

> ## Overview

The Reversal Algorithm is a simple and efficient method to rotate an array by a specified number of elements. It uses the concept of reversing subarrays to achieve the desired rotation.

> ## Problem Statement

Rotate an array of size 𝑛 to the left by 𝑑 positions. For example:

Input: Array = [1, 2, 3, 4, 5, 6, 7], 𝑑=2

Output: [3, 4, 5, 6, 7, 1, 2]

> ## Algorithm Explanation

### The algorithm involves three key steps:

- Reverse the first d elements in the array.
- Reverse the remaining n−d elements in the array.
- Reverse the entire array to achieve the desired rotation.

### Steps in Detail
- Input: Array A, Size n, Rotation Distance d
- Step-by-Step Process:
  1. Reverse the first d elements: A[0] to A[d−1].
  2. Reverse the remaining elements: A[d] to A[n−1].
  3. Reverse the entire array: A[0] to A[n−1].

> ## Code Explanation

Code: 

def reverse(array, start, end):

    while start < end:
    
        array[start], array[end] = array[end], array[start]
        
        start += 1
        
        end -= 1


def rotate_array(array, d):

    n = len(array)
    
    d = d % n  # Handle cases where d > n
    
    # Step 1: Reverse the first d elements
    
    reverse(array, 0, d-1)
    
    # Step 2: Reverse the remaining n-d elements
    
    reverse(array, d, n-1)
    
    # Step 3: Reverse the entire array
    
    reverse(array, 0, n-1)



> ## Example

Input:

Copy code
    
    Array = [1, 2, 3, 4, 5, 6, 7]

    d = 2

Process:

    Reverse first 2 elements: [2, 1, 3, 4, 5, 6, 7]
    
    Reverse remaining 5 elements: [2, 1, 7, 6, 5, 4, 3]
    
    Reverse the entire array: [3, 4, 5, 6, 7, 1, 2]

Output:

    [3, 4, 5, 6, 7, 1, 2]


> ## Complexity Ananlysis

### Time Complexity: O(n)

Reversing subarrays involves traversing the array three times, so the overall time complexity is linear.

### Space Complexity: O(1)

The algorithm operates in-place, requiring no additional storage.


> ## Applications
  - Used in array rotation problems in competitive programming.
  - Useful in circular buffer implementations.
  - Aids in solving problems requiring cyclic shifts in data structures.

> ## Edge Cases
  - d=0: No rotation; the array remains unchanged.
  - d=n: Full rotation; the array remains unchanged.
  - d>n: The algorithm handles this by using d=d%n.
  - Empty Array: Returns the empty array without errors.
