int i = 1, j = 1, k = 0, l = 0;
List<int> ip_add = [i, j, k, l];
int MAX = 255;

String getIP() {

  if(l < MAX) {
    l++;
    return '$i.$j.$k.$l';
  } else if (k < MAX) {
    k++;
    l = 0;
    return '$i.$j.$k.$l';
  } else if (j < MAX) {
    j++;
    k = 0;
    l = 0;
    return '$i.$j.$k.$l';
  } else if (l < MAX) {
    i++;
    j = k = l = 0;
    return '$i.$j.$k.$l';
  }
  return '';
}

void main() {
  for(int i = 0; i < 420000; i++) {
    print(getIP());
  }
}