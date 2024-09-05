#include <iostream>
#include <cstdlib> //includes abs()
/*cmath if i need the absolute value of a float [ fabs() ]*/

using namespace std;

int main(){
    int x,y;
    char op;
    cout << "Insert number 1: ";
    cin >> x;
    cout << "Insert number 2: ";
    cin >> y;
    cout << "Give me an operator (+, -, *, /)";
    cin >> op;

    switch (op){
    case '+':
        cout << "Add Result = " << x + y;
        break;
    case '-':
        cout << "Subtract Result = " << abs(x - y);
        break;
    case '*':
        cout << "Multiply Result = " << x * y;
        break;
    case '/':
        cout << "Divide Result = " << x / y;
        break;
    default:
        cout << "Something went wrong, please try again";
        break;
    }   

    return 0;
}