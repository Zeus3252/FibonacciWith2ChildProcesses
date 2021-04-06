FibonacciWith2ChildProcesses
What the program does in short: Spawning 2 children processes from a parent process, with one performing the Iterative Fibonacci Algorithm and the other the Recursive Fibonacci Algorithm. Clocks are implemented in both child processes to measure the run time of the calculations. The user inputs the numbers to be calculated.

More details: This C program spawns 2 child processes from the parent process. One child process will carry out the recursive Fibonacci sequence for a number input, the other child process will carry out the iterative Fibonacci sequence for a number input. There are separate clocks for each child process in said processes that measure the times it takes the child process to calculate and output the series of numbers. The program has two sets of outputs, the Fibonacci sequence and the run time for the recursive algorithm (secs) and the Fibonacci sequence and run time for the iterative algorithm (secs). The run time is the seconds used by the CPU for the given Fibonacci sequence. The program does not only output the final Fibonacci number, but each number in the series leading up to the final number. Also, the user can enter different numbers for the Recursive and Iterative versions if they wish. There will be a prompt for each and the user can type in the desired number. The output goes to the console. This program is good for comparing the efficiency of Recursive and Iterative Fibonacci sequences.
