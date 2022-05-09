// https://api.dart.dev/stable/2.16.1/dart-io/Process-class.html

import 'dart:convert';
import 'dart:io';


void interactiveProcess() async{
  var result = await Process.start('ping', ['-c 5','google.com']);
  print(result.toString());
  await result.stdout.transform(utf8.decoder).forEach((element) {
    print(element);
  });

  print(result.stderr.forEach((element) {print(element);}));
  print(await result.exitCode);
}

void non_interactiveProcess() async {
  var result = await Process.run('ls', ['-l']);
  print(await result.stdout);
  print(result.exitCode);
}


void unixCmd() async{
  print('Interactive Process ==========>');
  interactiveProcess();
  print('Non-interactive Process ===========>');
  non_interactiveProcess();
}


void main() {
  unixCmd();
}
