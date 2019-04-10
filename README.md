# OS-Question1
Use of fork and wait methods

Write a C program using the fork() system call that generates this sequence in the child process.
The starting number will be provided from the user.
For example, if 8 is passed as a parameter on the command line, the child process will output 8, 4, 2, 1.
Because the parent and child processes have their own copies of the data, it will be necessary for the child to output the sequence.
Have the parent invoke the wait() call to wait for the child process to complete before exiting the program.
Perform necessary error checking to ensure that a positive integer is passed on the command line. 

when we take any positive integer n and apply the following algorithm:

n = (n/2)       if n is even;
n = 3 * n + 1   if n is odd;

and enter the number 8:- the program would print 8, 4, 2, 1.

