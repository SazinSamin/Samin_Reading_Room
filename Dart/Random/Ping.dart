/// https://pub.dev/packages/dart_ping/example

import 'package:dart_ping/dart_ping.dart';

void doPink() async {
  final ping = Ping('google.com', count: 5);
  ping.stream.listen((event) {
    print(event);
  });
}

void main() {
  doPink();
}
