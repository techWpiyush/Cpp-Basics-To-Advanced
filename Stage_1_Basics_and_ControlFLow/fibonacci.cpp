/* Print the first n terms iteratively, then print only the terms below
a limit L*/

#include<iostream>
using namespace std;

int main(){
    int a = 1;
    int b = 1;
    int c = 0;
    int n;

    cout << "Enter the no. of term u want to print in the fibonacci series : ";
    cin >> n;

    cout << a << "\t";
    cout << b << "\t";

    for(int i =3; i<=n ;i++){
        c = a + b;
        cout << c << "\t";
        a = b;
        b = c;
    }

    return 0;
}
// The limit of this program is that it can only find upto 46 terms.