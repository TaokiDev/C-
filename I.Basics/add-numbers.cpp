<<<<<<< HEAD
#include <iostream>

using namespace std;

int main(){
    int n, adds= 0; //initialize a variable to gather the results
    cout << "Insert a number of adds you wanna do -> " << endl;
    cin >> n;

    for(int i=1; i<=n; i++){
        adds += i; //Gathering value 'i' to 'adds'
    }

    cout << "The add of the numbers from 1 to " << n << " is: " << adds << endl;
    return 0;
=======
#include <iostream>

using namespace std;

int main(){
    int n, adds= 0; //initialize a variable to gather the results
    cout << "Insert a number of adds you wanna do -> " << endl;
    cin >> n;

    for(int i=1; i<=n; i++){
        adds += i; //Gathering value 'i' to 'adds'
    }

    cout << "The add of the numbers from 1 to " << n << " is: " << adds << endl;
    return 0;
>>>>>>> 9016c139a3be6581661ee063c21e90c4839048dd
}