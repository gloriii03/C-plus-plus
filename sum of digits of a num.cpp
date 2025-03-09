#include <iostream>
using namespace std;

int main() {
    int num, sum = 0;
    cout << "Enter a number: ";
    cin >> num;

    // Sum the digits of the number
    while (num != 0) {
        sum += num % 10;
        num /= 10;
    }

    cout << "Sum of digits is: " << sum << endl;
    return 0;
}
