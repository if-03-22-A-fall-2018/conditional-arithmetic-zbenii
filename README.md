## IF.03.01 Procedural Programming
# Assignment Conditional Arithmetics

## Objective
This assignment is based on a simple implementation task used during hiring interviews. It tests basic skills in programming and arithmetics.

## Materials
- Atom or any other editor
- gcc
- terminal.

## Required Tasks
1. The program asks the user for two pieces of information (repeat asking until proper values have been supplied):
  - If an Add (1) or Multiply (2) operation should be performed
  - To select a number in the range of 1-100

2. Based on the information from the user you will iterate over the range starting with 1 and ending with the number the user specified. 

3. For each of the numbers you iterate over calculate if it is a multiple of 3 or 5. Ignore those numbers which don't fall into this category.
   
4. Based on the operation the user selected add or multiply the numbers you just filtered in the previous task. Be careful to detect an overflow (especially when multiplying) and in this case print an appropriate message and stop the calculation. You may use a long to allow for bigger results.

5. Print the result of the operation (except if an overflow occured).

6. Be careful to break down the task into separate functions (usually one function for each clearly separate task).

## Hints
- Take care to keep the work loop "Implement a little", "Test a little" to avoid the 100 lines of error mess.

## Evaluation
All coding assignments will get checked. Most common reasons that your assignment is marked down are:

- Program does not build or builds with warnings
- One or more items in the *Required Tasks* section are not satisfied
- Submitted code is visually sloppy and hard to read

## Things to Learn
- Repeat using primitive data types, like integer and long
- Repeat implementing functions
- Repeat using conditions
- Work with a loop
