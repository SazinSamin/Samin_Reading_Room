extension Algo on List {

  static const MIN_VAL = -9223372036854775808;

  // return the sum of a subarray maximum value
  // Based on Kadane's algorithm 
  // https://github.com/SazinSamin/Samin_Reading_Room/tree/main/Algorithm/Dynamic%20Programming/Test/Kadane's_algorithm
  
  num maxSubArraySum() {
    
    num sum = 0, max = MIN_VAL;
    List<dynamic> list = this;
    int size = list.length;

    try{
      for(int i=0; i<size; i++) {
        sum += list[i];
        if(sum > max) {
          max = sum;
        }
        if(sum < 0) {
          sum = 0;
        }
      }
    }catch(e) {
      print(e);
      return -1;
    }
    return max;
  }
}
