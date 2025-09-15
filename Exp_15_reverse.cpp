#include <iostream>
using namespace std;

// Recursive function to print string in reverse
void print_rev(const char* str) {
    if (*str != '\0') {
        print_rev(str + 1);
        cout << *str;
    }
}

int main() {
    const char* str = "Hello, Ananya";
    print_rev(str);
    cout << endl;
    return 0;
}

//output
//aynanA ,olleH
