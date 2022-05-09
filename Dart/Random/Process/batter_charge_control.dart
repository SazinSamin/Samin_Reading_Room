import 'dart:io';
import 'dart:convert';

void goDirector() async {
  var clear = await Process.start(
      'sudo', ['echo', '86', '>', 'charge_control_end_threshold'],
      workingDirectory: '/sys/class/power_supply/BAT0');
  clear.stdout.transform(utf8.decoder).forEach(print);


  var result = await Process.run('cat', ['charge_control_end_threshold'],
      workingDirectory: '/sys/class/power_supply/BAT0');
  print(result.stdout);
}

main() {
  goDirector();
}
