//This code generate DateTime with random IP address.

import 'dart:math';

Stream getRandom()async*{
  var random = Random();
  for(var i=0; i<100; i++){
    await Future.delayed(Duration(milliseconds: 500));
    var f1 = '${random.nextInt(255)}.${random.nextInt(255)}.${random.nextInt(255)}.${random.nextInt(255)}.';

    yield  DateTime.now().toString() + '   ' +  f1;
  }


}

void main(){
  var stream = getRandom();
  //print('DateTime                     IP address\n');
  stream.forEach((element) {print(element);});
}
