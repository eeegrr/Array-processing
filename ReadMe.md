# Array Processing: Pointers and Functions

## Task
Develop a program in C or C++ that performs the following operations:
- Input the dimensions of a two-dimensional array (number of rows and columns) from the keyboard.
- Input the elements of the array from the keyboard (elements are entered row by row, starting with the elements of the first row, then the second row, etc.). Use the `new` operator or functions like `malloc`, `calloc`, `realloc` (in the case of C) to allocate memory for the array. It is prohibited to use data structures from the STL library (e.g., `vector` class); use pointers to create the array.
- Create a one-dimensional array whose size matches the number of columns in the two-dimensional array. Assign each element of the one-dimensional array the value of the smallest element in the corresponding column.
- Display the elements of the one-dimensional array on the screen following the message "result:". All elements and the message "result:" should be placed on one line, separated by space characters, for example:
result: 1 2 3 4 5

## Program Requirements
- At the beginning of the program, include a comment containing information about the author (student ID number, first name, last name, group number).
- The program must consist of multiple functions. Pass the created arrays to functions via parameters; the use of global variables is prohibited.
- Ensure input error handling (text or real numbers cannot be entered as array size or element, the array consists of integers). If an array element is entered incorrectly, prompt the user to re-enter only that element (already entered values are not lost, input continues).

## Program Structure
The `main` function, after inputting the dimensions of the two-dimensional array and allocating memory for the two-dimensional and one-dimensional arrays, should call helper functions that perform the following actions:
- Fill the array with numbers by inputting the elements from the keyboard.
- Perform the operations listed above.
- Output the result.

Pass arrays and their dimensions as parameters to functions. The number of helper functions is not limited (one function == one operation with the array).


