#include <iostream>
/*Including specified libraries for working on stacks and queues*/
#include <stack>
#include <queue>

using namespace std;

void stackOperations();
void queueOperations();

int main(){

    int response;

    while(true){

        cout << "--- Stacks & Queues main menu ---" << endl;
        cout << "1. Stack Operations" << endl;
        cout << "2. Queue Operations" << endl;
        cout << "3. Exit" << endl;
        cout << "Option (Type a number) -> ";
        cin >> response;

        switch (response) {
            
            case 1:
                stackOperations();
                break;
            
            case 2:
                queueOperations();
                break;
            
            case 3: 
                cout << "Closing program ... " << endl;
                return 0;
            
            default:    
                cout << "Invalid input, try again" << endl;
                break;

        }
    }
}

/*Manage stacks operations (push, pop and top), stacks works on LIFO method
so that means the last element is the fist to get out*/
void stackOperations(){

    stack<int> s;
    int response, value;

    while(true){
        
        cout << "--- Stack Operations ---" << endl;
        cout << "1. Push" << endl;
        cout << "2. Pop" << endl;
        cout << "3. Top" << endl;
        cout << "4. Back to Main Menu" << endl;
        cout << "Select option -> ";
        cin >> response;

        switch(response){
            
            case 1:
                cout << "Enter value to push -> ";
                cin >> value;
                s.push(value);
                cout << "Value pushed. " << endl;
                break;

            case 2:
                if(!s.empty()){
                    s.pop();
                    cout << "Cropped top value. " << endl;
                }else{
                    cout << "Stack is empty, nothing to do ..." << endl;
                }
                break;

            case 3:
                if(!s.empty()){
                    cout << "Top value -> " << s.top() << endl;
                }else{
                    cout << "Stack is empty, nothing to do ... ";
                }
                break;

            case 4:
                return;
            default: 
                cout << "Invalid input, try again. " << endl;
                break;
        }
    }

}

/*Manage diferent operations on queues, Enqueue (push()) for inserts elements at the final,
Dequeue (pop()) to delete elements at the front, Front (top()) to see the front element without erasing it*/
void queueOperations(){
    queue<int> q;
    int response, value;

    while(true){
        
        cout << endl;
        cout << "--- Queue Operations --- " << endl;
        cout << endl;
        cout << "1. Enqueue" << endl;
        cout << "2. Dequeue" << endl;
        cout << "3. Front" << endl;
        cout << "4. Back to main menu" << endl;
        cout << endl;
        cout << "Select option -> ";
        cin >> response;

        switch(response){
            case 1:
                cout << "Value to push -> ";
                cin >> value;
                q.push(value);
                cout << "Value pushed succesfully" << endl;
                break;

            case 2:
                if(!q.empty()){
                    q.pop();
                    cout << "Cropped front element" << endl;
                    break;
                }else{
                    cout << "Queue empty, nothing to do" << endl;
                }
                break;

            case 3:
                if(q.empty()){
                    cout << "Queue is empty, nothing to show ..." << endl;
                }else{
                    cout << "Front value -> " << q.front() << endl;
                }
                break;

            case 4: 
                return;

            default:
                cout << "Invalid input detected, try again. " << endl;
                break;
        }        
    }    

}