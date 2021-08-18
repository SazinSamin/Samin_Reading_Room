//Study denis ritche book pointer & array charper.

#include<stdio.h>

//argc count argument count 
//argv is argument vector, this more like a two diementional vector, as it is a pointer so the argument can be different in length.
//first argc(which is 0) is represent the name of the file,
//If total argc is 4 then there have item 0, 1, 2, 3.
//We can get access them like a normal array.

int main(int argc, char* argv[]){
  
        //print the number of arguments
        printf("\nargc: %d\n", argc);
  
        //(char* string) is pointer to a character array
        char* string = argv[argc - 1];
        printf("%s", string);
}
