// https://www.geeksforgeeks.org/queue-using-stacks/

#include<iostream>
#include<stack>
using namespace std;

class Queue{
        private:
                stack<int> s1;
                stack<int> s2;
        public:
                void push(int data){
                        s1.push(data);
                }

                int front(){
                        if(!s1.empty()){
                                while(!s1.empty()){
                                        int x = s1.top();
                                        s2.push(x);
                                        s1.pop();
                                }
                        
                        int first =  s2.top();
                        while(!s2.empty()){
                                int y = s2.top();
                                s1.push(y);
                                s2.pop();
                        }
                                return first;
                        }

                        cout<<"\nStack is Empty !!!!";
                        return -1;
                }

                void pop(){
                        if(!s1.empty()){
                                while(!s1.empty()){
                                        int x = s1.top();
                                        s2.push(x);
                                        s1.pop();
                                }

                                int del = s2.top();
                                //cout<<"\nDelete element: "<<del;
                                s2.pop();
                                
                                while(!s2.empty()){
                                        int y =  s2.top();
                                        s1.push(y);
                                        s2.pop();
                                }

                        }
                }


                int isEmpty(){
                        if(s1.size() > 0){
                                return 0;
                        }else{
                                return 1;
                        }
                }
};



int main(){

        Queue q = Queue();

        for(int i=3; i<20; i+=3){
                q.push(i);
        }

        while(!q.isEmpty()){
                cout<<q.front()<<"\n";
                q.pop();
        }
}
