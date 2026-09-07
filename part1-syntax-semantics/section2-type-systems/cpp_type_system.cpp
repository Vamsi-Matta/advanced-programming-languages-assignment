#include <iostream>
#include <string>
#include <typeinfo>
using namespace std;

int main() {
    int value = 10;
    string text = "ServiceNow";
    double fraction = 2.5;

    cout << "Integer value: " << value << endl;
    cout << "String value: " << text << endl;
    cout << "int + double = " << value + fraction << endl;

    // value = "ServiceNow"; // Compile-time error: incompatible types.
    return 0;
}
