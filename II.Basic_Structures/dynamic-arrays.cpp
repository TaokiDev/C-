#include <iostream>
#include <string>
#include <vector>

using namespace std;

vector<int> instArray(5); 

/*In C++, it is recomended to use vectors to work on dynamic arrays*/
void fillArray(vector<int>& vec);
void listArray(vector<int>& vec);
void sumArray(vector<int>& vec);
void insertArray(vector<int>& vec);
void avgArray(vector<int>& vec);

int main(){
    /*Create a integer vectors with initial size of 5*/

    while (true){
        int response;

        cout << "--- Dynamic Arrays ---" << endl;
        cout << endl;
        cout << "1. Insert number to the Array " << endl;
        cout << "2. Fill Array " << endl;
        cout << "3. Show Array values " << endl;
        cout << "4. Add all elements of the array " << endl;
        cout << "5. Calculate the Average of the array " << endl;
        cout << "6. Calculate maximum and minimum of the array " << endl;
        cout << "7. Exit program " << endl;
        cout << endl;
        cout << "What do you want to do? (Type a number option)-> ";
        cin >> response;

        switch(response){
            
            case 1:
                insertArray(instArray);
                break;
            case 2:
                fillArray(instArray);
                break;
            
            case 3:
                listArray(instArray);
                break;

            case 4: 
                sumArray(instArray);
                break;            

            case 5:
                avgArray(instArray);
                break;

            case 7:
                cout << "Exiting..."<< endl;
                return 0;

            default:
                cout << "ERROR: Number not detected " << endl;
                break;

        }
    }
        return 0;        
}

/*Insert elements on the array one by one from left to right*/
void insertArray(vector<int>& vec){
    int n;
    cout << "Insert number to the array -> ";
    cin >> n;
    for(int i = 0; i < vec.size(); i++){
        if(vec[i] == 0){ /*Assuming 0 is the default value and empty slot*/
            vec[i] = n;
            break; /*Insert only one value and then break the loop*/
        }
    }
}

/*Function that fills the array with the number specified*/
void fillArray(vector<int>& vec){
        int n;
        cout << "Insert number -> ";
        cin >> n;
        for(int i = 0; i < vec.size(); i++){
            vec[i] = n; 
        }
}

/*List the content of the array*/
void listArray(vector<int>& vec){
    cout << "Array values :" << endl;
    for (int i = 0; i < vec.size(); i++) {
        cout << vec[i] << " ";
    }
    cout << endl;
}

/*Adds all the elements of the array*/
void sumArray(vector<int>& vec){
    int sum = 0;
    for (int i = 0; i < vec.size(); i++){
        sum += vec[i];
    }
    cout << "Result -> " << sum << endl;
}

void avgArray(vector<int>& vec){
    int sum = 0;
    for(int i = 0; i < vec.size(); i++){
        sum += vec[i];
    }
    /*We cast sum into a double to find the exact result with decimals*/
    double average = static_cast<double>(sum) / vec.size();
    cout << "Average -> " << average << endl;
}