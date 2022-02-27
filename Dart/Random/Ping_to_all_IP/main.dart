import 'generateIP.dart';
import 'package:dart_ping/dart_ping.dart';


void request() async {
  for (int i = 0; i < 4200; i++) {
    String ip = getIP();
    final ping = Ping(ip, count: 1);

    ping.stream.listen((event) {
      print('$ip: ${event.response}');
      if(event.response != null) {
        print('Successfull ping');
        return;
      }
    });
    await Future.delayed(Duration(milliseconds: 100));
  }
}

void main() {
  print('start');
  request();
  print('stop');
}
