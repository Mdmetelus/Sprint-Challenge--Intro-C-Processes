**1. List all of the main states a process may be in at any point in time on a standard Unix system. Briefly explain what each of these states means.**
New: The tarting point. This is the intial state when the process is created. 
Running state: when the process is being executed by the CPU.
Waiting state: when the process is stored out of memory and will only be retrieved when needed. 
Ready State: When the process is ready in memory but is waiting for CPU to execute it. Ready to be executed. 
Terminated State: After the process is completed



**2. What is a zombie process?**It is any process that is finished with exit call but still has an entry in the process table.



**3. How does a zombie process get created? How does one get destroyed?**
any child that has completed its task but is in terminated state. The parrent will alsocontinue to run and wait for that child process to exit.Also a zommbie child process needs to be destroyed by killing the parent.


**4. What are some of the benefits of working in a compiled language versus a non-compiled language? More specifically, what benefits are there to be had from taking the extra time to compile our code?**
Languages that are compiles like c tend to run quickly so that is a major benefit to c over highr level languages like javascript and python.Thats partially due to the fact that everything has been worked out and tasks do not need to be completed 'on the fly'.
