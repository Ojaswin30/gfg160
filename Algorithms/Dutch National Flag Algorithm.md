# Dutch National Flag

In this algorithm 3 pointer's are initialized as -

    low          mid        high

These pointers are used to make three partitions in one array. the loop starts with 
* low containing 0th index
* mid is also initiated at the 0th index
* high containing the nth index.


every partition is defined to contain only one type of element. Let an array arr consists of three elements a,b and c. we need to sort this array.

the Algorithm will begin with low and mid pointing to 0 th index and high towards the last index.

mid will used as the main pointer associated for comparisons.

## Cases-

    if mid == 'a'
      it will swap the element with "low" pointer
      mid++
      low++
    
    if mid == 'b'
      mid++
    
    if mid == 'c'
      swap(mid,high)
      mid++
      high--


> Code - 

    // C++ program to sort an array of 0s, 1s and 2s 
    // using Dutch National Flag Algorithm

    #include <iostream>
    #include <vector>
    using namespace std;

    // Function to sort an array of 0s, 1s and 2s
    void sort012(vector<int> &arr) {
    int n = arr.size();
    int lo = 0;
    int hi = n - 1;
    int mid = 0;
    
    // Iterate till all the elements
    // are sorted
    while (mid <= hi) {
        if (arr[mid] == 0)
            swap(arr[lo++], arr[mid++]);
        else if (arr[mid] == 1)
            mid++;
        else
            swap(arr[mid], arr[hi--]);
    }
    }
    
    int main() {
    vector<int> arr = { 0, 1, 2, 0, 1, 2 };
    int n = arr.size();
    
    sort012(arr);
    
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
    
    return 0;
    }  






> Dry Run



Initial Setup

> The array is:

    arr = {0, 1, 2, 0, 1, 2};

> Variables are initialized as follows:

    n = 6 (size of the array)
    lo = 0 (index for 0s)
    hi = 5 (index for 2s)
    mid = 0 (index for the current element being processed)
    
> First Iteration (mid = 0):

    Condition: arr[mid] == 0
    arr[0] == 0 is true, so we enter the first if block.
    
    We swap arr[lo] with arr[mid] (swap(arr[lo++], arr[mid++])):
    
    lo = 0, mid = 0, so we swap arr[0] and arr[0] (no change).
    
    Then, lo++ (increment lo to 1) and mid++ (increment mid to 1).
    
    Array after the first iteration: {0, 1, 2, 0, 1, 2} (no change)

> Second Iteration (mid = 1):

    Condition: arr[mid] == 1
    
    arr[1] == 1 is true, so we enter the second else if block.
    
    We simply increment mid++ (increment mid to 2).
    Array after the second iteration: {0, 1, 2, 0, 1, 2} (no change)

> Third Iteration (mid = 2):

    Condition: arr[mid] == 2
    arr[2] == 2 is true, so we enter the else block.
    
    We swap arr[mid] with arr[hi] (swap(arr[mid], arr[hi--])):
    
    mid = 2, hi = 5, so we swap arr[2] and arr[5]: {0, 1, 2, 0, 1, 2} becomes {0, 1, 2, 0, 1, 2} (no change).
    
    Then, hi-- (decrement hi to 4).
    Array after the third iteration: {0, 1, 2, 0, 1, 2} (no change)

> Fourth Iteration (mid = 2):

    Condition: arr[mid] == 2
    arr[2] == 2 is true again.
    
    We swap arr[mid] with arr[hi] (swap(arr[mid], arr[hi--])):
    
    mid = 2, hi = 4, so we swap arr[2] and arr[4]: {0, 1, 2, 0, 1, 2} becomes {0, 1, 1, 0, 2, 2}.
    
    Then, hi-- (decrement hi to 3).
    Array after the fourth iteration: {0, 1, 1, 0, 2, 2}

> Fifth Iteration (mid = 2):

    Condition: arr[mid] == 1
    arr[2] == 1 is true.
    
    We simply increment mid++ (increment mid to 3).
    Array after the fifth iteration: {0, 1, 1, 0, 2, 2} (no change)

> Sixth Iteration (mid = 3):

    Condition: arr[mid] == 0
    arr[3] == 0 is true, so we enter the first if block.
    
    We swap arr[lo] with arr[mid] (swap(arr[lo++], arr[mid++])):
    lo = 1, mid = 3, so we swap arr[1] and arr[3]: {0, 1, 1, 0, 2, 2} becomes {0, 0, 1, 1, 2, 2}.
    
    Then, lo++ (increment lo to 2) and mid++ (increment mid to 4).
    Array after the sixth iteration: {0, 0, 1, 1, 2, 2}

> Seventh Iteration (mid = 4):

    Condition: arr[mid] == 2
    arr[4] == 2 is true.
    
    We swap arr[mid] with arr[hi] (swap(arr[mid], arr[hi--])):
    mid = 4, hi = 3, but since mid > hi, the loop terminates.

> Final Result:

    The array is sorted: {0, 0, 1, 1, 2, 2}.
