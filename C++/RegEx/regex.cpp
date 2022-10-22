// https://www.geeksforgeeks.org/regex-regular-expression-in-c/

// Match only the alphanumeric character.

#include <iostream>
#include <regex>
using namespace std;

int main() {

	string s = "AB";
        regex expression("^[a-zA-Z0-9_]*$");
        cout << regex_match(s, expression);

        return 0;
}
