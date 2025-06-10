#include <iostream>
using namespace std;

int main() {
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);

    int num1, num2, sum;

    // Input two numbers
    cout << "\n Enter the first number: ";
    cin >> num1;
    cout << "\n Enter the second number: ";
    cin >> num2;

    // Calculate the sum
    sum = num1 + num2;

    // Output the result
    cout << "\n The sum of " << num1 << " and " << num2 << " is " << sum << "." << endl;

    return 0;
}
