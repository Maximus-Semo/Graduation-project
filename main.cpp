#include <iostream>
#include <cctype>
#include "Validation.h"

using namespace std;

 string Validation::name = "";
 string Validation::password = "";

int main() {
    string n, pw;
    cin >> n >> pw;
    Validation::setName(n);
    Validation::setPassword(pw);
    return 0;
}
