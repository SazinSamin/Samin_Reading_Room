abstract class PaymentValidator{
  void validatePayment();
}

class MasterCard extends PaymentValidator{
  @override
  void validatePayment() {
    print('Master successfull');
  }
}

class VisaCard extends PaymentValidator{
  @override
  void validatePayment() {
    print('Visa Success');
  }
}


class PaymentProcessor{
  void Authentication(PaymentValidator validator){
    validator.validatePayment();
  }
}


void main(){
  var p1 = PaymentProcessor();
  p1.Authentication(MasterCard());
  p1.Authentication(VisaCard());
}


