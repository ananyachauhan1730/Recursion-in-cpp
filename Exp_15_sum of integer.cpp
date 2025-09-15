#include <iostream>
using namespace std;


int sum(int n) {
    if (n <= 1)
        return n;             
    else
        return n + sum(n - 1); 
}

int main() {
    int number;
    cout << "Enter a positive integer: ";
    cin >> number;

    if (number < 0)
        cout << "Sum is not defined for negative numbers." << endl;
    else
        cout << "Sum of integers from 1 to " << number << " is " << sum(number) << endl;

    return 0;
}

//output
//Enter a positive integer: 23
//Sum of integers from 1 to 23 is 276

