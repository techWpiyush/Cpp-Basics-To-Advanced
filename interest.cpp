/* Default arguments. Write simpleInterest(principal, years, rate = 5.0) and 
call it with and without the rate.*/

#include<iostream>
#include<cmath>
using namespace std;
int rate = 5.0;

double simpleInterest(double principle, double years){
    double interest = (principle * years * rate)/100;
    return interest;
}

double compoundInterest(double p,double t){
    double x = pow(1.05,t) - 1;
    double interest = p * x;
    return interest;
}

int main(){
    double p,t;
    cout << "Enter the priciple amount";
    cin >> p;
    cout << "Enter years";
    cin >> t;
    
    cout << "The simple interest is " << simpleInterest(p,t);

    cout << "\nThe compound interest is " << compoundInterest(p,t);
    return 0;
}