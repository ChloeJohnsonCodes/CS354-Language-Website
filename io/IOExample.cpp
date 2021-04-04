#include <iostream>
#include <vector>
#include <fstream>

using namespace std;

// Much like its predecessor C, C++ did not build the input/output facilities into the language and relies on external library functions.
// C++ uses the external packages iostream or fstream. As seen in then name of theses external libraries,
// C++ uses an abstraction called "streams" which represent a device on which to perform input and output operations. This abstraction
// makes the live of the programmer much easier as a stream object acts as an intermediary between the program and actual IO devices
// and handles the device so the programmer does not have to.
//
//      The C++ standard library defines 4 main stream objects including:
//          cin : standard input stream
//          cout: standard output stream
//          cerr: standard error (output) stream
//          clog" standard logging(output) stream
//
// IO Features of C++:
//        1. Type safe
//        2. Formatted and formatted options
//
//
//Syntax for IO operations:
//      Insertion operator: <<
//          To build a statement multiple insertion operators may b e chained in a single statement:
//              cout << "Hello " << "my name is " << name;
//          To separate statements with newline the statement can end with endl which will add a newline character to the end
//      Extraction operator: >>
//            cin >> age
//      This operation is vulnerable to the user supplying the correct type. If the wrong type is not supplied the
//      the program continues without initialing the variable "name". This may produce unexpected behavior when the
//      value of name is used in later code blocks.

// Other bits of information


/*check_number: checks user input if it contains a digit
 *  str: user input
 *  return: true if a digit is detected; else false
 */
bool check_number(string str) {
    bool retVal = false;
    for(int i = 0; i < str.length(); i++){
        // Much like C, C++ string class stores the characters of a string as a sequence of bytes that can be accessed one byte at a time.
        if(isdigit(str[i]) == false){
            continue;
        } else{
            retVal = true;
        }
    }
    return retVal;
}

int main() {
    //Variable creation
    //In C++, Strings are objects that represent a sequences of characters. The string class adds additional built-in functions
//        to manipulate strings versus a character array like that seen in C. There is a difference in memory allocation
//        the size of a character array has to allocated statically and more memory cannot be allocated at run time.
//        This differs in the case of strings, memory is allocated dynamical and more memory can be allocated at run time.
//        The trade off is that strings no memory is wasted but implementation of character array is faster.
    string name;
    string major;
    int age;
    int numHobbies = 0;
    // Vectors act like dynamic arrays with the ability to resize itself automatically when an element is inserted or deleted
    //  their storage. Elements are added in memory blocks of continuous locations. If more memory is required upon inserting an element
    //  a new memory block is allocated to the vector and all elements are copied from the old location to the new location.
    //  this comes at a cost of efficiency. One can reserve a memory block of a specified size to prevent reallocation of memory.
    vector<string> hobbies;

    //Stream class to write on files
    ofstream myFile;

    //Printing to standard output stream with statements separated by a newline
    cout<< "Welcome to the class. This application allows us to get to know you faster by asking a series of questions." << endl;
    cout<< "Afterwards, your responses will be saved in a file that you can then share with the professor." << endl;
    cout<< "Thanks for your participation. I cannot wait to get to know you!" << endl;
    cout<< "Lets get started by entering your name: "<< endl;

    //Reading from standard in while storing data into variable
    getline(cin, name);
    //validate input ensuring user input a name
    while (check_number(name)){
        cout << "Try again Looks like you entered a number " << name << endl;
        cout << "Lets try that again. Please enter your name: ";
        getline(cin, name);
    }
    if(cin.fail()){
        cin.clear();
    }

    cout << "Hello " << name << " it is nice to meet you."<< endl;
    cout << "What is your age: " << endl;

    //gets an a number from standard in
    cin >> age;
    // this demonstrates that if a user inputs an string when age is of type int it will not be initialized
    // therefore it is import to check that it is initialized. In this case a loop is used to prompt the user.
    while(!cin){
        cout << "Try again. I think you entered a name: " << endl;
        cout << "Try entering a number this time." << endl;
        cin.clear();
        cin.ignore();
        cin >> age;
    }

    // if cin is in error reset error big
    if(cin.fail()){
        cin.clear();
    }
    cout << "Your age is " << age << endl;

    cin.ignore(256, '\n');
    cout << "What is your major: " << endl;
    getline(cin, major);
    //validate input ensuring user input a string
    while (check_number(major)){
        cout << "Try again Looks like you entered a number " << major << endl;
        cout << "Lets try that again. Please enter your major: " << endl;
        getline(cin, major);
    }

    // string comparisons in C++ compares the value of the string object to the sequence of characters specified by its args
    if(major.compare("Computer Science") == 0){
        cout << "That is a great major! " << endl;
    }
    cout << "What are three hobbies you enjoy?" << endl;
    while(numHobbies != 3){
        string temp;
        cin >> temp;
        hobbies.push_back(temp);
        numHobbies++;
    }
    cin.clear();
    cout << "Thanks for the information. It is nice to get to know you" << endl;
    cout << "Please wait while your file is prepared to share with your professor. . . ." << endl;

    myFile.open("studentprofile.txt");
    if(myFile.is_open()){
        myFile << "My name is " << name << " and I am " << age << " years old. " << endl;
        myFile << "I am currently studying " << major << " at BSU" << endl;
        for(auto& hobby: hobbies) {
            myFile << hobby << " ";
        }
        myFile.close();
    }

    // check if file writing was successful if not write error message to standard error return 1
    if(myFile.fail()){
        cerr << "I was unable to prepare your file";
        return 1;
    }

    cout<< "Your file has been prepared and ready to be shared! Thanks. ";

    return 0;
}
