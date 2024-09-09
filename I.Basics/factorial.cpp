#include <iostream>

using namespace std;

int main(){
    int n;
    unsigned long long factorial = 1; 
    /*unsigned long long type for wide numbers (still has their limits), for bigger numbers it is recomended
    to use special libraries for this type of operations*/
    cout << "Insert a number -> " << endl;
    cin >> n;

    for(int i=1; i<=n; i++){
        factorial *= i;
    }

    cout << "Factorial of "<< n << " is -> " << factorial;
     return 0;
}