
# Aim:  
To study and implement C++ Arrays and Strings.

# Tools:
VScode

# Theory:

-  # Array:  
  An array stores a fixed-size sequential collection of elements of the same type. All arrays consist of contiguous memory locations. The lowest address corresponds to the first element and the highest address to the last element. In C++, the first element in an array is always numbered with a zero, regardless of its length.

  - # Declaration:  
    To declare an array in C++, you must specify the type of elements and the number of elements required:  
    `type arrayName [ array_size ];`
    The `array_size` must be an integer constant greater than zero, and `type` can be any valid C++ data type.

  -  # Initialization:  
    You can initialize an array one element at a time or using a single statement:  
    `int foo = {12, 23, 34, 45, 56};`

- # String  
  A string is a sequence of characters. Unlike an array of characters, a string in C++ is an object that represents a sequence of characters and provides several inbuilt functions for manipulation. C++ strings are instances of the `string` class, which can be initialized using string literals.

# Conclusion:  
Arrays provide a mechanism for storing multiple values of the same type together in a single variable, making data organization efficient. Strings in C++ are more powerful than character arrays as they provide many built-in functions for easy and advanced manipulation of text.

# Algorithms:

# 1. Min-and-Max-Values-in-Arrays.

1. Start.
2. Input the size of the array `x`.
3. Declare an array `num` of size `x`.
4. Prompt the user to enter `x` integers and store them in `num`.
5. Initialize `max` and `min` as the first element: `num`.
6. For each element from index 1 to x-1:
    - If current element > `max`, update `max`.
    - If current element < `min`, update `min`.
7. Output the maximum and minimum values.
8. Stop.

# 2. Sum-and-Average-of-Array.

1. Start.
2. Input the size of the array `x`.
3. Declare an array `num` of size `x`.
4. Prompt user to enter `x` integers and store them in `num`.
5. Initialize `sum` as 0.
6. For each element from 0 to x-1:
    - Add the element to `sum`.
7. Calculate average as `average = sum / x`.
8. Output `sum` and `average`.
9. Stop.

# 3. Reverse-Array.

1. Start.
2. Input the size of the array `x`.
3. Declare an array `num` of size `x`.
4. Prompt the user to enter `x` integers and store them in `num`.
5. For `j` from `x-1` down to 0:
    - Output `num[j]`.
6. Stop.

# 4. Basic-Array-Search.

1. Start.
2. Declare and initialize an array `num` (example: with 10 elements, some initialized).
3. Input the `key` value to search.
4. For each index `j` from 0 to 4:
    - If `num[j] == key`, output "Key found at location j".
5. Stop.

# 5. Arrays-In-C.

1. Start.
2. Declare an array `num` of size 10.
3. Prompt the user to enter 5 integer values, store in `num` to `num[1]`.
4. For each index `j` from 0 to 4:
    - Output `num[j]`.
5. Stop.

