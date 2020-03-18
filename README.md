# linux-programming
my lab exercises
fork() is how you create new processes in Unix. When you call fork, you're creating a copy of your own process that has its own address space. This allows multiple tasks to run independently of one another as though they each had the full memory of the machine to themselves.

Here are some example usages of fork:

    Your shell uses fork to run the programs you invoke from the command line.
    Web servers like apache use fork to create multiple server processes, each of which handles requests in its own address space. If one dies or leaks memory, others are unaffected, so it functions as a mechanism for fault tolerance.
    Google Chrome uses fork to handle each page within a separate process. This will prevent client-side code on one page from bringing your whole browser down.
    fork is used to spawn processes in some parallel programs. Note this is different from using threads, which don't have their own address space and exist within a process.
    Scripting languages use fork indirectly to start child processes. For example, every time you use a command like subprocess.Popen in Python, you fork a child process and read its output. This enables programs to work together.
