/* Write long long myPOw(intbase, int exp) without using pow(). make a second version using recursion*/

#include <iostream>
using namespace std;

long long myPow(int base, int exp) {
    long long result = 1;
    for (int i = 0; i < exp; ++i) {
        result *= base;
    }
    return result;
}

long long myPowRecursive(int base, int exp) {
    if (exp == 0) {
        return 1;
    }
    return base * myPowRecursive(base, exp - 1);
}

int main() {
    int base, exp;
    cout << "Enter base and exponent: ";
    cin >> base >> exp;

    cout << "Result(Iterative): " << myPow(base, exp) << endl;
    cout << "Result(Recursive): " << myPowRecursive(base, exp) <<endl;

    
    return 0;
}