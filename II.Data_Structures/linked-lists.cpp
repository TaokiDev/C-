#include <iostream>
#include <string>

using namespace std;

/*linked lists (declared as struct) contains nodes, this nodes splits in two parts [Take a look to reference (1) & (2)]*/
struct nodeStruct{
    int value; /*Data field. The type of data we want to store to the list*/
    struct nodeStruct *next; /*Cursor. Aims to another node of the list (if there is none returns null)*/
};

/*Rename nodeStruct to simplify the code*/
typedef struct nodeStruct *node;

/*In C++ is obligatory to declare the functions before the main()*/
void listElements(node list);
void insert(int insertValue, node &list);
bool findRecursively(int valueSearch, node list);
bool findIterative(int valueSearch, node list);
void delValue(int deleteValue, node &list);

int main(){
    
    int choice;
    node list = NULL; /*Initialize the node*/

    while(true){
        cout << "--Linked lists functions--" << endl;
        cout << "1.Insert. " << endl;
        cout << "2.List elements. " << endl;
        cout << "3.Search (Recursively)" << endl;
        cout << "4.Search (Iterative) " << endl;
        cout << "5.Delete. " << endl;
        cout << "6.Exit program. " << endl;
        cout << endl;
        cout << "Insert the desired interaction -> ";
        cin >> choice;

    switch (choice) {
        
        case 1:  {    
            /* Adding values with insert function to the
            initialized node above*/
            int n;
            char response = 'Y';

            while(toupper(response) != 'N'){

                cout << "Insert number -> ";
                cin >> n;

                insert(n,list);

                cout << "Inserted -> " << n << endl;
                cout << "Continue? [Y/N] ";
                cin >> response;
            }
                break;
            }

        case 2:{
            /*Lists the entire content of the list*/
            listElements(list);
            break;
            }
        
        case 3:{
            int n;
            cout << "Type the number to search -> ";
            cin >> n;

            /*Finds the number typed in the list*/
            if(findRecursively(n,list)){
                cout << "Data found "<< endl;
            } else{
                cout << "Data not found" << endl; 
            }
            break;
        }
        
        case 4:{
            int n;
            cout << "Type the number to search -> ";
            cin >> n;

            if(findIterative(n,list)){
                cout << "Data found "<< endl;
            }else{
                cout <<"Data not found " << endl;
            }
            break;
        }

        case 5:{
            int n;
            
            cout << "Enter the number to delete -> ";
            cin >> n;
            
            delValue(n, list);
        }
        case 6:{
            cout << "Exiting..."<< endl;
            return 0;
        }

        default:
            cout << "Invalid option. "<< endl;
            break;
        }
    }
        return 0;    
}   

/*Shows the elements of the list on screen*/
void listElements(node list){
    
    if(list != NULL){
        cout << "List values: ";
        node current = list;
        while(current != NULL){
            cout << current-> value << " ";
            current = current->next;
        }
        cout << endl;
    }else{
        cout << "List is empty, nothing to show. " << endl;
    }
    
}

/*Function to insert nodes to the list*/
void insert(int insertValue, node &list){
    /*If the list is null, creates a new node, otherwise the new node 
    will be inserted below*/
    if(list == NULL){
        node newNode = new (struct nodeStruct);
        newNode->value = insertValue;
        newNode->next = NULL;
        list = newNode;
    }else{
        insert(insertValue, list->next);
    }
};

void delValue(int deleteValue, node &list){
    /*Iteration*/
    node i = list;
    /*We want ot link the previous node to the next one
    that is how we delete elements on the list*/
    node prev = NULL; 

    while(i != NULL){

        if(i -> value == deleteValue){
            //1. is the first element on the list
            if(prev == NULL){
                list = list -> next;
            }else{
            prev -> next = i -> next;
        }
        }else{
            prev = i;
        }
        i = i -> next;
    }
}

bool findRecursively(int valueSearch, node list){
    /*Confirms that the list is not empty, otherwise
    it will skip to 'false'*/
    if(list != NULL){
        /*If it finds the value of the list, return true*/
        if(list->value == valueSearch){
            return true;
        }else{
            /*Until it finds more nodes, search the value but it can happends 2 cases:
            1. The value was found so it returns true
            2. Exit the loop and return false because no matches found on the entire list*/
            return findRecursively(valueSearch,list->next);
        }
    }
    return false;
}

bool findIterative(int valueSearch, node list){
    bool itExists = false;
    /*node to iterate*/
    node i = list;
    /*Checks if the list is not empty and if the value exists,
    the loop will exit if it founds the value or did not find it on the entire list*/
    while(i != NULL && itExists == false){
        if(i -> value == valueSearch){
            itExists == true;
        }
        i = i -> next;
    }
    /*returns true or false if it found the value or not*/
    return itExists;
}