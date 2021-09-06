// https://www.geeksforgeeks.org/queue-using-stacks/

#include<iostream>
#include<stack>
using namespace std;

class Queue{
        private:
                stack<int> s;
        public:
                void push(int data){
                        s.push(data);
                }

                void Pop(){
                        if(s.size() == 0){
                                return ;
                        }

                        if(s.size() == 1){
                                s.pop();
                                return;
                        }


                        int reg = s.top();
                        s.pop();
                        Pop();
                        s.push(reg);
                }


                int Top(){
                        if(s.size() == 0){
                                return -1;
                        }

                        if(s.size() == 1){
                                return s.top();
                        }


                        int reg = s.top();
                        s.pop();
                        int x  = Top();
                        s.push(reg);
                        return x;
                }
};



int main(){
        Queue q = Queue();
        for(int i=1; i<10; i++){
                q.push(i);
        }



        cout<< "\nFront: " << q.Top();
        q.Pop();
        cout << "\nFront: " << q.Top();
        q.Pop();
        cout << "\nFront: " << q.Top();
        q.Pop();
        cout << "\nFront: " << q.Top();
        q.Pop();
}
