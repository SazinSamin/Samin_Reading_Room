void main() {
  List<num> arr = [23, 6.8, 21.5, 7, 2, 3.6, 9.3, 2.4, 5, 4.4];
  
  for(int i = 0; i < arr.length; i++) {
    bool res = arr[i] * 10 % 10 == 0;
    res ? print(arr[i]) : '';
  }

}
