#include <iostream>

using namespace std;

int main(){
    int x;
    cout << "How many numbers do you wanna count?" << endl;
    cin >> x;
    
    for( int i=1; i <=x; i++){
        cout << i << endl;
    }
}