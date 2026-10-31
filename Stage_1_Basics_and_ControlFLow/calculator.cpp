/* Make a simple calculator using switch case with a loop*/

#include<iostream>
using namespace std;

int main(){
    int choice;

    do{
        cout << "1: Addition \n";
        cout << "2: Subtraction \n";
        cout << "3: Multiplication \n";
        cout << "4: Division \n";
        cout << "5: Exit \n";

        double a,b;
        cout << "Enter two numbers: ";
        cin >> a >> b;

        
        cout << "Enter your choice: ";
        cin >> choice;

        switch(choice){
            case 1:
                cout << "The sum of " << a << " and " << b << " is " << a+b << "\n";
                break;
            case 2:
                cout << "The difference of " << a << " and " << b << " is " << a-b << "\n";
                break;
            case 3:
                cout << "The product of " << a << " and " << b << " is " << a*b << "\n";
                break;
            case 4:
                if(b!=0){
                    cout << "The division of " << a << " and " << b << " is " << a/b << "\n";
                }
                else{
                    cout <<"Division by zero is not allowed \n";
                }
                break;
            case 5:
                cout <<"Exiting the calculator \n";
                return 0;
            default:
                cout <<"Invalid choice, please try again \n";
        }


    }while(choice!=5);

    return 0;
}