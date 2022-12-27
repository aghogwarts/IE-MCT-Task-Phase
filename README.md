# IE-MCT-Task-Phase

Program codes tested and run while learning C++ and solving it's Questionnaire

## Theory

- Q1. How to search a missing number in an array that contains integers from 1 to 100?

First we either create a hardcoded array or make one with user input.
Then we make a for loop which iterates through the numbers 1-100. Inside the loop we create another for loop to iterate through every number in the defined/procured array to check with the number from the outer for loop and print it if it doesn't match any of the values from the array.

[Sample Code](/Theory_Codes/Q1/testing.cpp)

- Q2. How to delete the repeated elements in an integer array?

We create a for loop to iterate through every value in the int array. We then check the iterated value through every element in the array and if it matches any duplicate value, we will store the position of the element.
Then we will shift all the elements to the right of the position found one place back by directly replacing `arr[i]` with `arr[i+1]`; simultaneously we will reduce the length of the array by 1 after every replacement.

[Sample Code](/Theory_Codes/Q2/testing.cpp)

- Q3. Difference between float, double, long and int?
    - `int` is a data type used to store whole integers such as -45 or 5738
    - `long` is a data type used to store longer values of integers when integers start losing their precision after a limit
    - `float` is a data type used to store numbers with decimal values for ex 45.822 but with a precision of upto around 6-7 decimal places
    - `double` is a data type used to store numbers with decimal values but with a precision of around 13 decimal places

## Program

- Q1. Implement the best sorting algorithm that you know & also explain why it is the best.

- Q2. Program to find the Maximum and minimum of two numbers without using any loop or condition.

Directly use the inbuilt `max` and `min` functions

[Code](/Program_Codes/Q2/testing.cpp)

```cpp
#include <iostream>

using namespace std;

int main()
{
    int a, b;
    cout << "\nType a number: ";
    cin >> a;
    cout << "Type another number: ";
    cin >> b;
    cout << "\nMaximum: " << max(a, b) << " || Minimum is: " << min(a, b) << "\n\n";
    return 0;
}
```

- Q3. Print a number 100 times without using loop and recursion.
