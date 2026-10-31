/* Problem Statement: Write bool isPrime(int n), then print every prime numbers between a and b */

#include<iostream>
using namespace std;

bool isPrime(int n){
    if (n <= 1) return false;
    if (n == 2) return true;
    if (n % 2 == 0) return false;

    for (int i = 3; i * i <= n; i += 2) {
        if (n % i == 0) return false;
    }
    return true;
}

int main(){
    int a, b;
    cout << "Enter the prime find out range: ";
    cin >> a >> b;

    // Ensure a is the smaller bound
    if (a > b) {
        swap(a, b);
    }

    cout << "Prime numbers between " << a << " and " << b << " are:\n";
    bool found = false;

    for (int i = a; i <= b; i++) {
        if (isPrime(i)) {
            cout << i << " ";
            found = true;
        }
    }

    if (!found) {
        cout << "No prime numbers found in this range.";
    }
    cout << endl;

    return 0;
}