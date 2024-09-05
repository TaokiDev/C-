#include <iostream>

using namespace std;

int main(){
    cout << "Enter a number: ";
    int n;
    cin >> n;
    if(n%2==0){
       cout << "EVEN!"; 
    }else{
        cout << "ODD!";
    }
    return 0; /*Good practice to add at the end of the code for compatibility reasons*/
}