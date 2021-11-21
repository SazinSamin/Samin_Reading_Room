      Source Code  
gcc -E main.c -o preprocess.c  

      Preprocess  
gcc -S preprocess.c -o compiled.s  
gcc -c compiled.s -o object.o  
gcc object.o -o exe     ( multiple source files can also given here, for linking);  
