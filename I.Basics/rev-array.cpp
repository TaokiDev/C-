<<<<<<< HEAD
#include <iostream>

using namespace std;

int reversedCount(int array[]);
const int ARR_SIZE = 4;

int main(){
    int revCount[ARR_SIZE];
    
    for(int i=0; i <= ARR_SIZE; i++){
        cout << "Insert number -> " << endl;
        cin >> revCount[i];
    }

    reversedCount(revCount);

    return 0;
}

int reversedCount(int array[]){
 for(int i=ARR_SIZE; i >= 0; i--){
    cout << array[i] << " ";
 }  
 return 0; 
}

=======
#include <iostream>

using namespace std;

int reversedCount(int array[]);
const int ARR_SIZE = 4;

int main(){
    int revCount[ARR_SIZE];
    
    for(int i=0; i <= ARR_SIZE; i++){
        cout << "Insert number -> " << endl;
        cin >> revCount[i];
    }

    reversedCount(revCount);

    return 0;
}

int reversedCount(int array[]){
 for(int i=ARR_SIZE; i >= 0; i--){
    cout << array[i] << " ";
 }  
 return 0; 
}

>>>>>>> 9016c139a3be6581661ee063c21e90c4839048dd
