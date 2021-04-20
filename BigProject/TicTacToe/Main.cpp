#include <iostream>

//Main is the driver of tictactoe game.
// It first prompts the users for their names and then notifies assigns them to either
// X's or O's. Afterward players are assigned, they will play until a winner is found or its a tie
// After finishing a game, the users can then restart a new game or quit.

using namespace std;

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
    string player1;
    string player2;
    char userInput;
    bool keepRunning = true;
    bool callCheck = true;

    cout<< "Welcome to TicTacToe" << endl;
    cout<< "We will start with getting each players names" << endl;

    getline(cin, player1);
    //validate input ensuring user input a name
    while (check_number(player1)){
        cout << "Try again Looks like you entered a number " + player1 << endl;
        cout << "Lets try that again. Please enter your name: " << endl;
        getline(cin, player1);
    }

    if(cin.fail()){
        cerr<< "Looks like there was an error regarding your names. Please restart the program and try again";
        return 1;
    }

    cout << "Welcome " + player1 << endl;
    cout << "Now, its time to meet your opponent" << endl;

    getline(cin, player2);
    //validate input ensuring user input a name
    while (check_number(player2)){
        cout << "Try again Looks like you entered a number " << player2 << endl;
        cout << "Lets try that again. Please enter your name: ";
        getline(cin, player2);
    }

    if(cin.fail()){
        cerr << "Looks like there was an error regarding your names. Please restart the program and try again";
        return 1;
    }

    cout << "Welcome " + player2 << endl;
    cout << "Let's get started now . . .";
    cout << "Choose an option: " << endl;


    while(keepRunning) {
        if(callCheck) {
            cout<<"Menu:" << endl;
            cout<< "p - Play Game" << endl;
            cout<< "q - Quit " << endl;

            callCheck = false;
        }
        //gets user's menu choice
        int rc;
        rc = scanf(" %c", &userInput);
        //if more than one input character is given stdin is cleared so loop doesnt run multiple times
        fflush(stdin);
        //validate to check if error has been thrown
        if(rc < 0) {
            cerr<< "An error has occurred please restart the program and try again" << endl;
            return 1;
        }

        userInput = tolower(userInput);

        switch(userInput) {
            case 'q':
                cout<<"Goodbye!";
                return 0;
            case 'p':
                //TODO game play functionality
                break;
            default:
                cout<<"Invalid Menu Selection" << endl;
                cout<<"Please try again: " <<endl;
                callCheck = true;
                break;
        }
        
    }

    return 0;
}