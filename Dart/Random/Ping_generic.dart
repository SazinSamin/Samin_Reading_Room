import 'dart:convert';
import 'dart:io';


void unixCmd() async{
  var result = await Process.start('ping', ['-c 5','192.168.0.1'] );
  print(result.toString());
  await result.stdout.transform(utf8.decoder).forEach((element) {
    print(element);
  });
}


void main() {
  unixCmd();
}
