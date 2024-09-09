<<<<<<< HEAD
#include <iostream>
#include <string> //Library to work on strings

using namespace std;

int main(){
    string phrase;
    int vowelCount = 0;
    string vowels = "aeiou";

    cout << "Type a text -> "<< endl;
    getline(cin, phrase);

    for(char c: phrase){
        c = tolower(c);
        
        if(vowels.find(c) != string::npos){
            vowelCount++;
        }
    }

    cout << "Vowels found -> " << vowelCount << endl;

    return 0;
=======
#include <iostream>
#include <string> //Library to work on strings

using namespace std;

int main(){
    string phrase;
    int vowelCount = 0;
    string vowels = "aeiou";

    cout << "Type a text -> "<< endl;
    getline(cin, phrase);

    for(char c: phrase){
        c = tolower(c);
        
        if(vowels.find(c) != string::npos){
            vowelCount++;
        }
    }

    cout << "Vowels found -> " << vowelCount << endl;

    return 0;
>>>>>>> 9016c139a3be6581661ee063c21e90c4839048dd
}