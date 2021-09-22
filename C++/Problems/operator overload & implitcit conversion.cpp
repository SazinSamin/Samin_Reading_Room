#include <iostream>
using namespace std;

class Fraction
{
	int num, den;
  public:
    Fraction(int n, int d) { num = n; den = d; }

    // conversion operator: return float value of fraction
    operator float() const {
      return float(num) / float(den);
    }
};

int main() {
	Fraction f(2, 5);
	float val = f; // can't able to understand without calling Fraction class Overloded function float() method how this
	cout << val;   // convert, look like implicit conversion, search for explaination.
	return 0;
}
