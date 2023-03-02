// You can't do arithmetic operation on Generics type
// we have extend it either with num class or use interface.

// stackoverflow:
/* Not possible; and that is inherent in what you are trying to do: The job of adding 2 numbers together is not something you can just do; you can't write code that can add 2 arbitrary 'T's together.
*/

// link:
// https://stackoverflow.com/questions/65956143/how-to-perform-arithmetic-operations-on-generic-type-in-java
// https://stackoverflow.com/questions/14046209/using-a-generic-class-to-perform-basic-arithmetic-operations/14047053



// we can't just write code line
// class Complex<T>{}
class Complex<T extends num> {
  T a;
  T b;
  Complex(this.a, this.b);

  void add() {
    print(a + b);
  }
}

void main() {}
