# IE-MCT-Task-Phase

Program codes tested and run while learning C++ and solving it's Questionnaire

## Theory

- Q1. How to search a missing number in an array that contains integers from 1 to 100?

First we either create a hardcoded array or make one with user input.
Then we make a for loop which iterates through the numbers 1-100. Inside the loop we create another for loop to iterate through every number in the defined/procured array to check with the number from the outer for loop and print it if it doesn't match any of the values from the array.

[Sample Code](/Testing/Q1/testing.cpp)

- Q2. How to delete the repeated elements in an integer array?

We create a for loop to iterate through every value in the int array. We then check the iterated value through every element in the array and if it matches any duplicate value, we will store the position of the element.
Then we will shift all the elements to the right of the position found one place back by directly replacing `arr[i]` with `arr[i+1]`; simultaneously we will reduce the length of the array by 1 after every replacement.

[Sample Code](/Testing/Q2/testing.cpp)

