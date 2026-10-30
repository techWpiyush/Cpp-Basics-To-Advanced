/* Print the sum and count the digits of n, then check if n is an Armstring number*/

#include<iostream>
#include<cmath>
using namespace std;

int main(){
    int n;
    int count = 0;
    int sum = 0;
    int armstrong = 0;

    cout << "Enter a number";
    cin >> n;

    int copyn = n;

    while(copyn!=0){
        int rem = copyn % 10;
        sum += rem;
        armstrong = armstrong + pow(rem,3);
        count++;
        copyn /= 10;
    }

    cout << "The sum of digits of number is " << sum <<"\n";
    cout << "The numebr of digits is " << count << "\n";

    if(armstrong == n){
        cout << "The number is an armstrong number. \n";
    }
    else {
        cout << "Not an armstrong number";
    }

    return 0;
}