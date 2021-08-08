#### Couting sort

1. First we have make two arrays, one for counting each elements in the array, another for storing the 
output.

2. Count each element from the given array and store in the count array.

3.  Next add first element with next element & put in the next element array index. This will give us the 
      position of that value from where to where.
      Like look at this below array, here in index 1 we have a value 2, that means the index 1 actullay represent element 1, and this           element 1 will be store in first 2 position (0 and 1), 
      the next index is 2, which have value 3, this has difference (3 - 2 = 1) which means it have only 1 value, which location is next (so after 0 and 1) it will be 2. 
      
4. 
