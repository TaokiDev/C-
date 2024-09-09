<<<<<<< HEAD
#include <iostream>
#include <string>

using namespace std;

int main(){
    int n;

    cout << "Enter a number -> ";
    cin >> n;

    string strNumber = to_string(n);
    string revStr;

    for(int i=strNumber.length() - 1; i >= 0; i--){
        revStr += strNumber[i];
    }

    if(strNumber != revStr){
        cout << "Not palindrome"<< endl;
    }else{
        cout << "Palindrome" << endl;
    }

=======
#include <iostream>
#include <string>

using namespace std;

int main(){
    int n;

    cout << "Enter a number -> ";
    cin >> n;

    string strNumber = to_string(n);
    string revStr;

    for(int i=strNumber.length() - 1; i >= 0; i--){
        revStr += strNumber[i];
    }

    if(strNumber != revStr){
        cout << "Not palindrome"<< endl;
    }else{
        cout << "Palindrome" << endl;
    }

>>>>>>> 9016c139a3be6581661ee063c21e90c4839048dd
}