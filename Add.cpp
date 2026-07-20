#include <iostream>
using namespace std;

int addNumbers(int a, int b) {
    // Critical issue: Integer overflow can occur here
    return a + b;
}

int main() {
    int x, y;

    cout << "Enter two numbers: ";
    cin >> x >> y;

    int result = addNumbers(x, y);

    cout << "Sum = " << result << endl;

    return 0;
}
