<<<<<<< HEAD
#include <iostream>
#include <sstream>
#include <string>
#include <algorithm> //includes max function

using namespace std;

int main(){
    int n1, n2, n3;
    string numbers;
    char extra;
    bool validInput = true;

    cout << "Give me three numbers (Separate each number with space please) " << endl;
    getline(cin, numbers);

    istringstream iss(numbers);

    if(!(iss >> n1 >> n2 >> n3)){
        cout << "Error: No spaces detected between numbers" << endl;
        validInput = false;
    }else{
        if (iss >> extra){
            cout << "Error: Detected more than three numbers typed" << endl;
            validInput = false;
        }
    }

    if (validInput){
        int maxNumber = max(n1, max(n2, n3));
        cout << "The maximum number is: " << maxNumber << endl;
    }

    return 0;
=======
#include <iostream>
#include <sstream>
#include <string>
#include <algorithm> //includes max function

using namespace std;

int main(){
    int n1, n2, n3;
    string numbers;
    char extra;
    bool validInput = true;

    cout << "Give me three numbers (Separate each number with space please) " << endl;
    getline(cin, numbers);

    istringstream iss(numbers);

    if(!(iss >> n1 >> n2 >> n3)){
        cout << "Error: No spaces detected between numbers" << endl;
        validInput = false;
    }else{
        if (iss >> extra){
            cout << "Error: Detected more than three numbers typed" << endl;
            validInput = false;
        }
    }

    if (validInput){
        int maxNumber = max(n1, max(n2, n3));
        cout << "The maximum number is: " << maxNumber << endl;
    }

    return 0;
>>>>>>> 9016c139a3be6581661ee063c21e90c4839048dd
}