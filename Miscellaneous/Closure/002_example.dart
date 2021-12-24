Function counter() {
  int count = 0;
  int increment() {
    return ++count;
  }
  return increment;
}
void main(){
  Function count = counter();
  print(count());
  print(count());
  print(count());
  print(count());
}
