#include<iostream>
using namespace std;

void swap(int *x, int *y){
    int z = *x;
    *x = *y;
    *y = z;

}

int main(){

    int a , b;
    cout << "Enter two numbers";
    cin >> a >> b;

    cout<< "Before swapping a= " << a << "and b= " << b << "\n";
    swap(&a,&b);

    cout << "After swapping a= " << a << " and b= " << b << "\n";

    return 0;
}