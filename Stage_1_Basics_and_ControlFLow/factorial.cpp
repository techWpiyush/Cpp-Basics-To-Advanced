/* Compute n! with a loop using unsigned long long. Find the n where
the result overflows and print a warning for it.*/

#include<iostream>
using namespace std;

int main(){
    unsigned long long factorial = 1;
    int n;
    cout << "Enter the number to find the factorial of :";
    cin >> n;
    int copyn = n;
    if(n<0){
        printf("Enter a valid number");
        return 0;
    }
    if(n >65){
        cout << "Mathematical error";
        return 0;
    }
    // This code overflows for the values of n greater than 65.
    // (Found thorugh the result testing.)
    do
    {
        if(copyn ==0 ){
            cout << "The factorial of 0 is 1";
            return 0;
        }
        factorial = factorial * copyn;
        copyn -= 1;
    } while (copyn!=0);
    
    cout << "The factorial of " << n << " is " << factorial;

    return 0;
}