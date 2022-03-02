void main() {
  List<num> arr = [23, 6.8, 21.5, 7, 2, 3.6, 9.3, 2.4, 5, 4.4];
  
  
  /// here we want to suck the only [whole number](1, 2, 3) from 
  /// mixed number(whole & fractional)](23, 3.3, 4).
  
  /// To do this we first need to [multiply] the number with 10,
  /// then we do [modulus] with that number, so if it is a whole number 1, 2, 3,
  /// then it will 10, 20, 30, so, there will [no remainder left].
  /// If it not, then it will 68, 215 then, there have some [remainder left].
  /// Based on remainder have or not we can get the whole numbers only.
  
  for(int i = 0; i < arr.length; i++) {
    bool res = arr[i] * 10 % 10 == 0;
    res ? print(arr[i]) : '';
  }

}
