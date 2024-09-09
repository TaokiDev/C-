#include <iostream>

using namespace std;

int main(){
    int n;

    cout << "What multiply table you want to see? --> ";
    cin >> n;
    cout << "table of " << n << endl;
    cout << "--------------" << endl;
    
    for(int i=1; i <= 10; i++){
        cout << n << "*" << i << " = "<< (n * i) << endl;
    }

    return 0;
}