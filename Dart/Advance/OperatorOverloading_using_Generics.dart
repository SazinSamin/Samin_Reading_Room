// see this link to know, how to do arithmatic operation in Generics variables
// https://github.com/SazinSamin/Samin_Reading_Room/blob/main/Dart/Advance/Arithmatic_operation_on_Generics.dart

class Complex<T extends num, K extends num>{
  T real;
  K imag;

  Complex(this.real, this.imag);

  Complex operator + (Complex other){
    return Complex(real + other.real, imag + other.imag);
  }

  void display(){
    print('$real + ${imag}i');
  }
}

void main(){
  Complex c1 = Complex(10, 5);
  Complex c2 = Complex(12, 3);

  Complex c3 = c1 + c2;
  c3.display();
}

