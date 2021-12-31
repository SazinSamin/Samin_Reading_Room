// https://javascript.plainenglish.io/data-hiding-with-javascript-module-pattern-62b71520bddd

Map<String, dynamic> modulePattern(String name, int age, int id) {
  String _name = name;
  int _age =  age;
  int _id = id;
  double _cgpa = 3.34;

  Function result = () {
    return (_cgpa > 3.00) ? 'Good' : 'Not Good'; 
  };

  return {
    'name': _name,
    'age': _age,
    'id': _id,
    'result': result
  };
}


void main() {

  Map<String, dynamic> s1 = modulePattern('Sazin', 24, 11);
  print('${s1['name']}, ${s1['age']}, ${s1['id']}');

  print(s1['result']());
}
