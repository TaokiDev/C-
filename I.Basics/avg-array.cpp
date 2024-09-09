#include <iostream>

using namespace std;

int main(){
    const int ARR_SIZE = 4;
    int avg[ARR_SIZE];
    int sum = 0;

    for (int i=0; i <= ARR_SIZE; i++){
        cout << "Enter number -> "<< endl;
        cin >> avg[i];
        sum += avg[i];        
    }

    //Cast the value to double for precise result
    double average = static_cast<double>(sum) / ARR_SIZE + 1;

    cout << "Numbers entered: ";
    for (int i=0; i <= ARR_SIZE; i++){
        cout << avg[i] << " ";
    }
    cout << endl;

    cout << "Average -> " << average << endl;

    return 0;
       
}