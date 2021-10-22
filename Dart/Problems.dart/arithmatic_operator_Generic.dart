// arithmatic operator doesn't work for Generic
// solution: https://github.com/SazinSamin/Samin_Reading_Room/blob/main/Dart/Info/arithmatic_operator_Generic.dart



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
