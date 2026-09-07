#include <iostream>
using namespace std;

int main() {
    const size_t size = 50'000'000;
    char* buffer = new char[size];

    for (size_t i = 0; i < size; i += 4096) {
        buffer[i] = 1; // Touch pages so allocation is observable.
    }

    cout << "Allocated about 50 MB with new[]." << endl;
    delete[] buffer;  // Programmer must explicitly release memory.
    buffer = nullptr; // Avoid leaving a dangling pointer in this example.
    cout << "Memory released with delete[]." << endl;
    return 0;
}
