extension Algo on List {

  static const MIN_VAL = -9223372036854775808;

  num maxSubArraySum() {
    
    num maxEnd = 0, maxSum = MIN_VAL;
    List<dynamic> list = this;

    try{
      for(int i=0; i<list.length; i++) {
      maxEnd = maxEnd + list[i];
      if(maxEnd < list[i]) {
        maxEnd = list[i];
      }
      if(maxSum < maxEnd) {
        maxSum = maxEnd;
      }
    }
    }catch(e) {
      print(e);
      return -1;
    }
    return maxSum;
  }
}
