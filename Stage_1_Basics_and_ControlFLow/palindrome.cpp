/* Reverse the digits of a number n and  then say whether n equal its reverse*/

#include<iostream>
using namespace std;

int main(){
    int n;
    int revn = 0;

    cout << "Enter a number";
    cin >> n;

    int copyn = n;

    while(n!=0){
        int  rem = n %  10;
        revn = revn * 10 + rem;
        n /= 10;
    }
    cout << "The reversed number is " << revn << "\n" ;

    if (copyn == revn){
        cout << copyn <<" is a palindrome number";
    }
    else {
        cout << "Not a palindrome number";
    }
    return 0;
}