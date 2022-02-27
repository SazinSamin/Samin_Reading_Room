int i = 0, j = 0, k = 0, l = 0;
int MAX = 255;

String getIP() {

  if(l < MAX) {
    l++;
  } else if (k < MAX) {
    k++;
    l = 0;
  } else if (j < MAX) {
    j++;
    k = 0;
    l = 0;
  } else if (l < MAX) {
    i++;
    j = k = l = 0;
  }
  return '$i.$j.$k.$l';;
}

void main() {
  for(int i = 0; i < 420000; i++) {
    print(getIP());
  }
}
