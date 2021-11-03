// https://en.cppreference.com/w/cpp/language/eval_order
// https://www.youtube.com/watch?v=qYxTP7wrCho&list=PLlrATfBNZ98dudnM48yfGUldqGD0S4FFb&index=88

/*Order of evaluation of any part of any expression, including order of evaluation of function arguments is unspecified (with some exceptions listed below). The compiler can evaluate operands and other subexpressions in any order, and may choose another order when the same expression is evaluated again.*/


#include<iostream>
using namespace std;

void Function(int a, int b){
       cout << a << " " << b << endl;
}


int main(){
       int value = 0;
       Function(++value, ++value);
}
