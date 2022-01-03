extension Algo on List {
  
  /// minimum value of [64] bit.
  static const minVal = -9223372036854775808;

  /// return the [sum] of a subarray [maximum value]
  /// Based on [Kadane's] algorithm
  /// https://github.com/SazinSamin/Samin_Reading_Room/tree/main/Algorithm/Dynamic%20Programming/Test/Kadane's_algorithm

  num maxSubArraySum() {
    num _sum = 0, _max = minVal;
    List<dynamic> list = this;
    int _size = list.length;

    try {
      for (int i = 0; i < _size; i++) {
        _sum += list[i];
        if (_sum > _max) {
          _max = _sum;
        }
        if (_sum < 0) {
          _sum = 0;
        }
      }
    } catch (e) {
      print(e);
      return -1;
    }
    return _max;
  }
}
