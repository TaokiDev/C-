#include <iostream>
#include <string>
#include <vector>

using namespace std;

vector<int> instArray(5); 

/*In C++, it is recomended to use vectors to work on dynamic arrays*/
void fillArray(int n, vector<int>& vec);
void listArray(vector<int>& vec);

int main(){
    /*Create a integer vectors with initial size of 5*/

    while (true){
        int response;

        cout << "--- Dynamic Arrays ---" << endl;
        cout << endl;
        cout << "1. Fill Array " << endl;
        cout << "2. Show Array values " << endl;
        cout << "3. Add all elements of the array " << endl;
        cout << "4. Calculate the Average of the array " << endl;
        cout << "5. Calculate maximum and mínimum of the array " << endl;
        cout << "6. Exit program " << endl;
        cout << endl;
        cout << "What do you want to do? (Type a number option)-> ";
        cin >> response;

        switch(response){
            case 1:
                fillArray(instArray);
                break;
            case 2:
                listArray(instArray);
            break;
            

            default:
                cout << "Please type a number" << endl;
                break;
        }
        return 0;        
    }
}

/*Function that fills the vector*/
void fillArray(vector<int>& vec){
    int n;
    char answer = 'Y';
    while(toupper(answer) != 'N'){
        cout << "Insert number -> ";
        cin >> n;
        for(int i = 0; i < vec.size(); i++){
            vec[i] = n;
        }  
    }
}

void listArray(vector<int>& vec){
    cout << "Array values :" << endl;
    for (int i = 0; i < vec.size(); i++) {
        cout << vec[i] << " ";
    }
    cout << endl;
}
