#include <iostream>
using namespace std;


//get max element
int getMax(int array[], int n)
{
        int max = -999999;
        for (int i = 0; i < n; i++)
        {
                if (array[i] > max)
                {
                        max = array[i];
                }
        }
        return max;
}


//get remainder 
int getRemainder(int n, int p)
{
        int result;
        for (int i = 1; i <= p; i++)
        {
                //get last digit according to the position.
                result = n % 10;
                //reduce digit
                n /= 10;
        }
        return result;
}





void Coutingsorting(int array[], int n, int pos)
{
        //An array which store individul elements count. means how many 0,1 or any character are there.
        int count[10];
        //An array which hold the sorted array.
        int output[n];

     
        
        //set all elements count as 0 at intial level.
        for (int i = 0; i <= 9; i++) count[i] = 0;

        
        
        //count the element occur in the given array & increase the amount in the array corresponding to that element.
        for (int i = 0; i < n; i++){
                //array[i];                                     - get the element from the array
                //getRemainder(array[i], pos);     - get the last digit of that number
                count[getRemainder(array[i], pos)]++;
        }

        
        
        /*count first element with the next element & keep the value in the next element location.
        do this until the array have finished.*/
        for (int i = 1; i <= 9; i++){
                //count[i] = count[i] + count[i-1]
                count[i] += count[i - 1];
        }



        /*This loop will go from last to first element,
        get the value contain from the position, go to value position in count array,
        decrease it by 1, get the value from there now, and go to output variable that position.
        And put the main array value there*/
        for (int i = n - 1; i >= 0; i--)
        {
                //array[i];                                                        -> get the element
                //getRemainder(array[i], pos);                       -> get the last digit of that number
                //--count[getRemainder(array[i], pos)];         -> decrease the count for get the right position of that element
                //                                                                              & put the element there
                output[--count[getRemainder(array[i], pos)]] = array[i];
        }

        

        //Copy sorted array to the main array.
        for (int i = 0; i < n; i++)
        {
                array[i] = output[i];
        }
}




void radixSort(int array[], int n)
{
        
        //get the max element, so that every element come inside the condition.
        int max = getMax(array, n);
        //intial decimal position
        int pos = 1;
        
        while (max > 0)
        {
                //increase decimal postion( for "ekok", "doshok", "sotok") until the digit finished.
                Coutingsorting(array, n, pos++);
                //reduce digit.
                max /= 10;
        }
}



int main()
{
        int array[] = {97, 57, 208, 699, 125, 734};

        int length = sizeof(array) / sizeof(array[0]);

        radixSort(array, length);

        cout << "\nSorted array: \n";
        for (int i = 0; i < length; i++)
        {
                cout << array[i] << " ";
        }
}
