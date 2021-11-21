gcc -E main.c -o main_preprocessed.c  
gcc -S main_preprocessed.c -o main_compiled.s  
gcc -E main_compiled.s -o main_assembled.o    

  
  
gcc -E function.c -o function_preprocessed.c  
gcc -S fucntion_preprocessed.c -o function_compiled.s  
gcc -E function_compiled.s -o function_assembled.o  
     
gcc main_assembled.o function_assembled.o exe    


[Link](https://www.cs.hmc.edu/~geoff/classes/hmc.cs070.200009/notes/multi-file.html)
