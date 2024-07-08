
# C++ Program with Friend Function Example

This C++ program demonstrates the usage of a friend function in a class.

## Overview

The program defines a class `A` with private data members `a` and `b`, and a public member function `setdata()` to initialize these members. It also declares a friend function `add()` outside the class `A`, which is able to access the private members of `A` to perform addition.

## Files

- **main.cpp**: Contains the main program.
  
## Code Explanation

### Class A

- **Private Members**: 
  - `int a`: Stores the first integer.
  - `int b`: Stores the second integer.
  
- **Public Member Function**:
  - `void setdata(int x, int u)`: Sets the values of `a` and `b` to `x` and `u`, respectively.

### Friend Function `add()`

- Defined outside the class `A`.
- Accesses the private members `a` and `b` of class `A` using a reference to `A` (`A& t`).
- Calculates and prints the sum of `a` and `b`.

### Main Function

- Creates an object `o1` of class `A`.
- Calls `setdata()` to initialize `o1` with values 10 and 10.
- Calls `add()` function, passing `o1` as an argument to compute and print the sum of `a` and `b`.

## Compilation and Execution

To compile and run the program, you can use an online C++ compiler or a local compiler such as g++:

```bash
g++ main.cpp -o main
./main
