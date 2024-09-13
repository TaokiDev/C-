#include <iostream>
#include <string>
#include <vector>
#include <climits> /*Libraries for INT_MIN and INT_MAX*/

using namespace std;

vector<int> instArray(5); 

/*In C++, it is recomended to use vectors to work on dynamic arrays*/
void fillArray(vector<int>& vec);
void listArray(vector<int>& vec);
void sumArray(vector<int>& vec);
void insertArray(vector<int>& vec);
void avgArray(vector<int>& vec);
void maxMinArray(vector<int>& vec);
void delValue(vector<int>& vec);
void updValue(vector<int>& vec);
void searchValue(vector<int>& vec);

int main(){
    /*Create a integer vectors with initial size of 5*/

    while (true){
        int response;

        cout << "--- Dynamic Arrays ---" << endl;
        cout << endl;
        cout << "1. Insert an element to the array" << endl;
        cout << "2. List array" << endl;
        cout << "3. Replace an element in the array " << endl;
        cout << "4. Delete an element in the array " << endl;
        cout << "5. Fill array " << endl;
        cout << "6. Add all elements of the array " << endl;
        cout << "7. Calculate the Average of the array " << endl;
        cout << "8. Calculate Maximum and Minimum of the array " << endl;
        cout << "9. Search element from the array" << endl;
        cout << "10. Exit program" << endl;
        cout << endl;
        cout << "What do you want to do? (Type a number option)-> ";
        cin >> response;

        switch(response){
            
            case 1:
                insertArray(instArray);
                break;
            case 2:
                listArray(instArray);
                break;
            
            case 3:
                updValue(instArray);
                break;

            case 4: 
                delValue(instArray);
                break;

            case 5:
                fillArray(instArray);
                break;

            case 6:
                sumArray(instArray);            
                break;

            case 7:
                avgArray(instArray);
                break;

            case 8:
                maxMinArray(instArray);
                break;

            case 9:
                searchValue(instArray);
                break;
            case 10:
                cout << "--------------" << endl;
                cout << "Exiting..."<< endl;
                cout << "--------------" << endl;
                return 0;

            default:
                cout << "--------------" << endl;
                cout << "ERROR: Number not detected " << endl;
                cout << "--------------" << endl;
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

/*List the content of the array*/
void listArray(vector<int>& vec){
    cout << "--------------" << endl;
    cout << "Array values :" << endl;
    for (int i = 0; i < vec.size(); i++) {
        cout << vec[i] << " ";
    }
    cout << "--------------" << endl;
    cout << endl;
}

/*Delete an element from the array*/
void delValue(vector<int>& vec){
    int pos;
    cout << "Enter the position of the element to delete (0 to " << vec.size() - 1 << ") -> ";
    cin >> pos;

    if(pos < 0 || pos >= vec.size()) {
        cout << "ERROR: Invalid position" << endl;
    }else{
        vec.erase(vec.begin() + pos);
        vec.push_back(0); /*Adding default value (0) at the end to maintain the size*/
        cout << "--------------" << endl;
        cout << "Value erased. "<<endl;
        cout << "--------------" << endl;
    }
}

/*Updates an element from the array*/
void updValue(vector<int>& vec){
    int index, newValue;
    cout << "Enter the index of the value to replace (0 to " << vec.size() - 1 << ") -> ";
    cin >> index;

    if(index < 0|| index >= vec.size()){
        cout << "--------------" << endl;
        cout << "ERROR: Invalid index" << endl;
        cout << "--------------" << endl;

        return;
    }

    cout << "Enter the new value -> ";
    cin >> newValue;

    vec[index] = newValue;
    cout << "--------------" << endl;
    cout << "Value replaced successfully." <<endl;
    cout << "--------------" << endl;

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

/*Adds all the elements of the array*/
void sumArray(vector<int>& vec){
    int sum = 0;
    for (int i = 0; i < vec.size(); i++){
        sum += vec[i];
    }
    cout << "--------------" << endl;
    cout << "Result -> " << sum << endl;
    cout << "--------------" << endl;
}

/*Calculates the average of the array*/
void avgArray(vector<int>& vec){
    int sum = 0;
    for(int i = 0; i < vec.size(); i++){
        sum += vec[i];
    }
    /*We cast sum into a double to find the exact result with decimals*/
    double average = static_cast<double>(sum) / vec.size();
    cout << "--------------" << endl;
    cout << "Average -> " << average << endl;
    cout << "--------------" << endl;
}

/*Finds the maximum and minimum of the array*/
void maxMinArray(vector<int>& vec){
    /*Ensure the array is not empty*/
    if(vec.empty()){
        cout << "--------------" << endl;
        cout << "The array is empty." <<endl;
        cout << "--------------" << endl;
        return;
    }

    int maxVal = INT_MIN;
    int minVal = INT_MAX;

    for(int i = 0; i < vec.size(); i++){
        
        if(vec[i] > maxVal){
            maxVal = vec[i];
        }
        if(vec[i] < minVal){
            minVal = vec[i];
        }
    }
    cout << "--------------" << endl;
    cout << "Max value -> " << maxVal << endl;
    cout << "Min value -> " << minVal << endl;
    cout << "--------------" << endl;


}

/*Search an especific element's value and print it to the screen*/
void searchValue(vector<int>& vec){
    int pos;
    cout << "Enter the position of the element to search (0 to " << vec.size() -1 << ") -> ";
    cin >> pos;

    if(pos < 0 || pos >= vec.size()){
        cout << "--------------" << endl;
        cout << "ERROR: Invalid position" << endl;
        cout << "--------------" << endl;
    }else{
        cout << "--------------" << endl;
        cout << "Value at position " << pos << " -> " << vec[pos] << endl;
        cout << "--------------" << endl;
    }
}