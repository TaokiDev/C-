<<<<<<< HEAD
#include <iostream>
#include <cmath> // cmath library for sqrt function

using namespace std;

//C++ compiler needs to see the function declared after the main
bool isPrime(int number);

int main(){
    int n;
    cout << "Insert a number -> " << endl;
    cin >> n;

    if(isPrime(n)){
        cout << n << " Is prime";
    }else{
        cout << n << " Is not prime";
    }    
}

bool isPrime(int number){
if (number <= 1) return false; // 0,1 and negative numbers are not prime
if (number == 2) return true; // 2 is a unique even prime number
if (number % 2 == 0) return false; //Even numbers above 2 are not prime

for(int i = 3 ; i <= sqrt(number); i+=2){
    if(number % i == 0) return false;
}

return true;
=======
#include <iostream>
#include <cmath> // cmath library for sqrt function

using namespace std;

//C++ compiler needs to see the function declared after the main
bool isPrime(int number);

int main(){
    int n;
    cout << "Insert a number -> " << endl;
    cin >> n;

    if(isPrime(n)){
        cout << n << " Is prime";
    }else{
        cout << n << " Is not prime";
    }    
}

bool isPrime(int number){
if (number <= 1) return false; // 0,1 and negative numbers are not prime
if (number == 2) return true; // 2 is a unique even prime number
if (number % 2 == 0) return false; //Even numbers above 2 are not prime

for(int i = 3 ; i <= sqrt(number); i+=2){
    if(number % i == 0) return false;
}

return true;
>>>>>>> 9016c139a3be6581661ee063c21e90c4839048dd
}