## Floyed cycle detection algorithm....
  - In case of measuring the loop length we can use this algorithm.
  - uVa 350 sudo random number generation problem solve with this algorithm. where in this problem we have find out when the generated         number will repeat again because in computer generated random number is bounded by modulus 
  - You can understand the problem if you see the problem -> https://onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&page=show_problem&problem=286


  - One thing I observe when solve this problem, as we know the speed of fast pointer is twice than the slow pointer, so if there is loop     then when the slow pointer reaches at the end of list then fast pointer also reaches to that position by it 2nd iteration. As there is     loop or the number repeated after a time, so when fast pointer 1st time reaches at the end of loop, then it's again get the number       in where it start it's journey, which will ignite fast pointer 2nd iteration.
  
    Another thing when the fast pointer reaches at the end then the slow pointer will be in the middle of the list because you know fast       pointer has twice speed than the slow pointer. After then fast pointer reaches end of the list, as list has loop or reapeted number it     will start it 2nd iteration, on the other hand slow pointer start it's journey to the second half. And as fast pointer has speed twice     of slow, it will be at the end of the list when the slow pointer also in the end of list. And both pointer value will match. 
    
    So, if we counter the number, how match this loop iterate, we get the length of the loop. Also the number slow pointer moves is the 
    length of the loop.
    
    
    


