<<<<<<< HEAD
#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main(){
    int n, rn;

    cout << "Guess the secret number ... ";
    cin >> n;

    srand(time(0));
    rn = rand() % 101;
    
     while( n != rn ){
        cout << "Try again ... ";
        cin >> n;
     }

     cout << "Guessed!" << endl;

     return 0;

=======
#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main(){
    int n, rn;

    cout << "Guess the secret number ... ";
    cin >> n;

    srand(time(0));
    rn = rand() % 101;
    
     while( n != rn ){
        cout << "Try again ... ";
        cin >> n;
     }

     cout << "Guessed!" << endl;

     return 0;

>>>>>>> 9016c139a3be6581661ee063c21e90c4839048dd
}