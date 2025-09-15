#include <iostream>
using namespace std;


int factorial(int n) {
    if (n <= 1)
        return 1;           1
    else
        return n * factorial(n - 1); 
}

int main() {
    int number;
    cout << "Enter a positive integer: ";
    cin >> number;

    if (number < 0)
        cout << "Factorial is not defined for negative numbers." << endl;
    else
        cout << "Factorial of " << number << " is " << factorial(number) << endl;

    return 0;
}

//output
//Enter a positive integer: 7
//Factorial of 7 is 5040
