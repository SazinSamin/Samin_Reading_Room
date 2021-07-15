abstract class PaymentValidator {
  PaymentValidator();
  void validatePayment();
}

class MasterCard extends PaymentValidator {
  @override
  void validatePayment() {
    print('MasterCard validation successfull');
  }
}

class Paypal extends PaymentValidator {
  @override
  void validatePayment() {
    print('Paypal validation successfull');
  }
}

class paymentProcessor {
  final PaymentValidator _validator;
  paymentProcessor(this._validator);

  void display() {
    _validator.validatePayment();
  }
}


abstract class Checker{
  PaymentValidator paymentCheck();
}

class Check1 extends Checker{
  @override
  PaymentValidator paymentCheck() {
    return MasterCard();
  }
}



void main() {
  var p1 = paymentProcessor(MasterCard());
  var p2 = paymentProcessor(MasterCard());
  p1.display();
  p2.display();
}

