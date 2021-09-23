class Complex{
  double real, imag;
  Complex(this.real, this.imag);

  Complex operator + (Complex other){
    return Complex(real + other.real, imag + other.imag);
  }

  void Display(){
    print('$real + i$imag');
  }
}

void main(){
  Complex c1 = Complex(2, 4);
  Complex c2 = Complex(1, 2);

  Complex c3 = c1 + c2;

  c3.Display();
}

