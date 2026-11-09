/*Problem statemnt: Write swap by value, by refrence and by pointer. Print the
variables before and after each call to see which version fails.
*/


#include<iostream>
using namespace std;

void swap(int x, int y){
    int z = x;
    x = y;
    y = z;
}


int main(){
    int a,b;
    cout << "Enter two numbers";
    cin >> a >> b;
    
    cout << "\n BY VALUE: ";
    cout << "Before swapping a=" << a << " and b="  << b;
    swap(a,b);
    cout << "After swapping a=" << a << " and b=" << b << "\n";

    return 0;
}