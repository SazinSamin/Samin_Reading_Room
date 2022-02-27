/// https://stackoverflow.com/questions/49471063/how-to-run-code-after-some-delay-

void delayed() async {
  await Future.delayed(Duration(seconds: 1));
}

void main() {
  delayed();
}
