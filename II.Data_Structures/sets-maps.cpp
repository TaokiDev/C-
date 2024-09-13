#include <iostream>
#include <set>
#include <map>
#include <string>

/*Including the necessary libraries to work on sets and maps*/
using namespace std;

/*NOTE: Maps allocates in diferent slots of memory randomly, 
this is one of the diferences compared to an array that stores values 
in a lineal order*/

/*In this example, this maps contains a string key that references
the int value, that means the value will be read faster */

void addStudent(map<string, int>& students);
void removeStudent(map<string, int>& students);
void displayStudents(map<string, int>& students);
void findStudent(map<string, int>& students);

int main(){
    map<string,int> students;

    int sel;

    while(true){
        cout << "--- Student Management ---" << endl;
        cout << "1. Add student" << endl;
        cout << "2. Remove student" << endl;
        cout << "3. Display all students" << endl;
        cout << "4. Find student" << endl;
        cout << "5. Exit program" << endl;
        cout << endl;
        cout << "Option -> ";
        cin >> sel;

        switch(sel){
            case 1:
                addStudent(students);
                break;
            case 2: 
                removeStudent(students);
                break;
            case 3:
                displayStudents(students);
                break;
            case 4:
                findStudent(students);
                break;
            case 5: 
                return 0;
        
            default:
                cout << "Invalid input detected, try again. "<< endl;
                break;
        }
    }

}

void addStudent(map<string, int>& students){
    string name;
    int grade;

    cout << "Student Name? -> ";
    cin >> name;
    cout << "Grade? -> ";
    cin >> grade;

    //Add student to Map
    students[name] = grade;
    cout << "Student added. " << endl;
}

void removeStudent(map<string, int> & students){
    string name;
    
    cout << "Enter student name to remove -> ";
    cin >> name;

    /*If erase() function finds the name, remove it and
    print a success message*/
    if(students.erase(name)){
        cout << "Student removed. " << endl;
    }else{
        cout << "Student not found, nothing to do ... " << endl;
    }
}

void displayStudents(map<string, int> & students){
    cout << "--- Students ordered by their grade ---" << endl;

    /*'auto' allows the compiler to find the type of value to work on*/
    for(const auto& pair : students){
        cout << endl;
        cout << "Name: " << pair.first << " Grade: " << pair.second << endl;
    }
}

void findStudent(map<string, int> & students){
    string name;
    cout << "Search the student by typing its name -> ";
    cin >> name;

    /*find() is a for loop simplified in a Map library function */
    auto i = students.find(name);
    /*If it does not reaches the end of the Map, it will shows the student info*/
    if(i != students.end()){
        cout << "Grade of " << name << ": " << i -> second << endl;  
    }else{
        cout << "Student not found. " << endl;
    }
}
