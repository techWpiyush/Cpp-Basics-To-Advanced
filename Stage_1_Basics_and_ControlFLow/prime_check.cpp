/*Problem statement :: Read an integer n and print whether it is prime.
Loop only upto the square root of n.
*/

#include<iostream>
#include<cmath>
using namespace std;
int main (){
    int n; //stores the value entered by user
    cout << "Enter a number";
    cin >> n;

    if(n<2){
        cout << n << " neither prime or composite";
        return 0;
    }

    bool isPrime = true;

    for(int i =2; i<= sqrt(n); i++){
        if(n%i==0){
            isPrime = false;
            break;
        }
    }

    if(isPrime) {
        cout << n << " is prime";
    }
    else {
        cout << n << "is composite";
    }
    
    return 0;
}