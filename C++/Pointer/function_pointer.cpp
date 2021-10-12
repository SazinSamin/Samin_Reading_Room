#include<iostream>
#include<vector>
using namespace std;

// function
void print(int val){
        cout << val << endl;
}

// function
void ForEach(vector<int> list, void(*func)(int)){
        for(int i=0; i<list.size(); i++){
                func(list[i]);
        }
}


int main(){
        vector<int> v = {1, 2, 4, 5, 6, 7, 8, 9, 10};

        // put a function to function pointer
        void(*function)(vector<int>, void(*func)(int)) = ForEach;

        // use function pointer for use that function
        function(v, print);

}
