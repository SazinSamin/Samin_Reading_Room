// know about process
// https://api.dart.dev/stable/2.16.1/dart-io/Process-class.html
// https://stackoverflow.com/questions/67338711/dart-process-run-get-stdout-as-stream-instead-of-string-just-like-process

import 'dart:convert';
import 'dart:io';


void unixCmd() async{
  // var result = await Process.start('traceroute', ['google.com'] );
  var result = await Process.start('ping', ['-c 5','google.com']);
  print(result.toString());
  await result.stdout.transform(utf8.decoder).forEach((element) {
    print(element);
  });

  print(await result.exitCode);

}


void main() {
  unixCmd();
}
