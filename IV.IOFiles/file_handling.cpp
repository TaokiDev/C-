/**
 * @author [TaokiDev]
 * @github [github.com/TaokiDev]
 * @create date 2024-09-19 16:47:47
 * @modify date 2024-09-19 16:47:47
 * @desc [C++ files for educational purposes]
 */

#include <iostream> // I/O Library
#include <fstream> // File managing library
#include <string> // String managing library

using namespace std; // Reserved namespaces

char copyright = 169; // ASCII Value
string author = "TaokiDev";

int main(){
    // Create and overwrite the file 
   ofstream fileOutput("data_template.txt"); 

    // Check if file has opened successfully
   if(!fileOutput){
    cerr << "Couldn't open file to overwrite" << endl;
    return 1;
   }

   // Write data on file
   fileOutput << "This is the text that goes on the first line of this text file" << endl;
   fileOutput << author << copyright;

   // Close file
   fileOutput.close();

   return 0;
}