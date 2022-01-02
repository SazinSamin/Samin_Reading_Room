void main() {

  var a = 300;
  var b = 21;

  // why ~/ faster than manually convert to integer.
  var x1 = (a / b).toInt();
  var x2 = a ~/ b;
  
  double floatResult = a / b;

  print(x1);
  print(x2);

  print(floatResult);
}
