/*The goal of this quiz is to practice writing and reading files.
**Read the contents of input.txt and then write to it. 
**
**We are using input.txt as our file. This is not an ideal
**situation, because when we write to it, we cannot
**see the changes. We can manually write in input.txt and
**we can also use the program to write to the file. 
**Then we can read what we wrote using our program.
**
**Your assignment for this quiz**
**Change the contents of the file called input.txt
**Change the ifstream and ofstream to fstream

- Include the <fstream> library 
 - Create a stream (input, output, both)
      - ofstream myfile; (for writing to a file)
      - ifstream myfile; (for reading a file)
      - fstream myfile; (for reading and writing a file)
 - Open the file  myfile.open(“filename”);
 - Write or read the file
 - Close the file myfile.close();

*/
#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main () {
    string line;
    //create an output stream to write to the file
    //append the new lines to the end of the file
    
    //fstream myfileIO ("input.txt", fstream::app);
    fstream myfileIO;
    myfileIO.open("input.txt", fstream::app);
    // ofstream myfileI ("input.txt", ios::app);
    if (myfileIO.is_open())
    {
        myfileIO << "\nI am adding a line.\n";
        myfileIO << "I am adding another line.\n";
        myfileIO.close();
    }
    else cout << "Unable to open file for writing";
  
    //create an input stream to write to the file
    myfileIO.open("input.txt");
    // ifstream myfileO ("input.txt");
    if (myfileIO.is_open())
    {
        while ( getline (myfileIO,line) )
        {
            cout << line << '\n';
        }
        myfileIO.close();
    }
    
    else cout << "Unable to open file for reading";
    
    return 0;
}


