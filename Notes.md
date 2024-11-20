# Vectors in C++


> create a vector

    vector<datatype> array_name;

> get the first element of vector

    array_name.front();

> get the last element of vector

    array_name.back();

> access element at a specific index (through this we can get the value at the specific index and we can chaneg the value too)

    array_name[index];

or

    array_name.at(index);

> add vector element to the end

    array_name.push_back(element);

> remove the last element

    array_name.pop_back();

> Erase element at any index

    array_name.erase(arr.begin() + index);

or

    array_name.erase(start_iterator, end_iterator);

> size of vector

    array_name.size();

> check if the vector is empty - returns boolean value 1- empty and 0- not empty

    array_name.empty();

> loop in a vector

    for (string i : array_name) {
      cout << i << "\n";
    }

or

    for(int i=0; i<array_name.size();i++){
      cout << array_name[i] << "\n";
    }

> maximum element in the vector

    std::max_element(v.begin(), v.end());

- this line return an iterator to the max element

        int max = *std::max_element(arr.begin(),arr.end());

Time Complexity - O(n)
Space Complexity - O(1)

> minimum and maximum element in the vector

    std::minmax_element(v.begin(), v.end());

- The function std::minmax_element() returns a std::pair of iterators

        auto minmax = std::minmax_element(v.begin(), v.end());
        int min_value = *(minmax.first);   // Minimum value
        int max_value = *(minmax.second); // Maximum value

Time Complexity - O(n)
Space Complexity - O(1)


> sort the elements in vector

Time Complexity - O(n * log n)
Space Complexity - O(log n)

    sort(v.begin(), v.end());


> reverse a vector array

Time complexity - O(n)
Space Complexity - O(1)

    reverse(arr.begin(), arr.end());


> Stable Partition

used to divide a vector into different parts based on condition which give output in true/false form

    stable_partition( start_iterator, end_iterator, [](int n) { return n!=0;});


