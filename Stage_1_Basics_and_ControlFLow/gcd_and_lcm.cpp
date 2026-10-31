/* Read two numbers and compute both using Euclid algorithm in a loop */

#include<iostream>
using namespace std;

int main(){
    int a,b; //Stores 2 num taken as input
    int output_gcd;
    int output_lcm;

    cout << "Enter two numbers: ";
    cin >> a >> b;

    int copya = a;
    int copyb = b;

    if(a>b){
        while(b!=0){
            int rem = a % b;
            output_gcd = b;
            a = b;
            b = rem;
        }
    }
    else {
        while(a!=0){
            int rem = b % a;
            output_gcd = a;
            b = a;
            a = rem;
        }
    }
    output_lcm = (copya * copyb) / output_gcd;

    cout << "The gcd of "<< copya <<" and " << copyb << " is " << output_gcd << "\n";
    cout << "The lcm of "<< copya <<" and " << copyb << " is " << output_lcm;

    return 0;
}