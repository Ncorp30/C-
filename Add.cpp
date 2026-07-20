#include <iostream>
using namespace std;

long long addNumbers(long long a, long long b) {
    // Critical issue: Integer overflow can occur here
    return a + b;
}

int main() {
    int x, y;

    cout << "Enter two numbers: ";
    cin >> x >> y;

    long long result = addNumbers(x, y);

    cout << "Sum = " << result << endl;

    return 0;
}