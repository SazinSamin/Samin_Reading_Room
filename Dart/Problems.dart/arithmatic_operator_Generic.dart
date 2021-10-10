// arithmatic operator doesn't work for Generic
class Complex<T>{
  T real;
  T imag;

  Complex(this.real, this.imag);

  int add(){
    return real + imag;
  }
}

void main(){

}
