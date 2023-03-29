//Floyed cycle detection
//https://www.youtube.com/watch?v=wjYnzkAhcNk

#include <iostream>
using namespace std;

int main(){
        int array[] = {1, 3, 4, 2, 2};
        int length = sizeof(array) / sizeof(array[0]);
        int slow = 0;
        int fast = 0;

        while (1){
                //slow pointer moves one stem at a time.
                slow = array[slow];
                //fast pointer moves two stem at a time.
                fast = array[array[fast]];

                //If there is duplicate then both pointer will intersect one another
                //This sort of problem have always a duplicate.
                if (slow == fast){
                        break;
                }
        }

        //Define another variable slow which start traversing from 0.
        //Both pointer goes one step at a time, when both will intersect, that will be the
        //starting of the cycle.
        int slow1 = 0;
        while (1){
                slow1 = array[slow1];
                slow = array[slow];

                if (slow == slow1){
                        break;
                }
        }
        
        cout << slow;
}
