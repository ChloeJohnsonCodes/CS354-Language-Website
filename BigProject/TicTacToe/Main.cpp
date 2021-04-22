#include <iostream>

//Main is the driver of tictactoe game.
// It first prompts the users for their names and then notifies assigns them to either
// X's or O's. Afterward players are assigned, they will play until a winner is found or its a tie
// After finishing a game, the users can then restart a new game or quit.

using namespace std;

#include "Box.h"
#include "Board.h"

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
    int currentPlayer = 0;
    Board gameBoard;
    int playerChoice = 0;

    cout<< "Welcome to TicTacToe" << endl;
    cout<< "We will start with getting each players names. Player1: " << endl;

    getline(cin, player1);
    //validate input ensuring user input a name
    while (check_number(player1)){
        cout << "Try again Looks like you entered a number: " + player1 << endl;
        cout << "Lets try that again. Please enter your name: " << endl;
        getline(cin, player1);
    }

    if(cin.fail()){
        cerr<< "Looks like there was an error regarding your names. Please restart the program and try again";
        return 1;
    }

    cout << "Welcome " + player1 << endl;
    cout << "Now, its time to meet your opponent. Player2: " << endl;

    getline(cin, player2);
    //validate input ensuring user input a name
    while (check_number(player2)){
        cout << "Try again Looks like you entered a number: " << player2 << endl;
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
            cout<<"\nMenu:" << endl;
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
                    currentPlayer = 2;
                    gameBoard.ClearBoard();
                    //!gameBoard.IfWinner() && !gameBoard.IfFilled()
                    
                    while(!gameBoard.IfWinner() && !gameBoard.IfFilled()){
                        if(currentPlayer == 1){ 
                            currentPlayer = 2;
                        }
                        else{
                            currentPlayer = 1;
                        }
                        
                        cout<<"\n";
                    
                        gameBoard.PrintBoard();
                        
                        cout<<"0|1|2 \n3|4|5 \n6|7|8 \n\n";
                        if(currentPlayer == 1){
                            cout<< player1 << ", choose a square: ";
                        }
                        else{
                            cout<< player2 << ", choose a square: ";
                        }
                        
                        cin >> playerChoice;
                        
                         while(cin.fail()){
                            cout<< "Please enter a number: ";
                            cin.clear();
                            cin.ignore(256, '\n');
                            cin >> playerChoice; 
                        }
                        
                        while(playerChoice > 9 || playerChoice < 0){
                            cout<< "That spot is not real! Pick another: ";
                            cin >> playerChoice;
                        }
                        
                        while(!gameBoard.GetBox(playerChoice).IfEmpty()){
                            cout<< "That spot is taken! Pick another: ";
                            cin >> playerChoice;
                        }
                        
                        gameBoard.SetBox(playerChoice, currentPlayer);
                        
                        //Debugging
                        //cout<< "Current player val: " << currentPlayer << "\n";
                        //cout<< "Box chosen: " << playerChoice << "\n";
                        //cout<< "Current place val: " << gameBoard.GetBox(playerChoice).PrintBox() << "\n";
                        
                    }
                    if(!gameBoard.IfWinner()){
                        cout<< "\n" << "It's a tie! Nice going, you two.\n\n";
                    }
                    else{
                        if(currentPlayer == 1){
                            cout<< "\n" << player1 << " wins!\n\n";
                        }
                        else{
                            cout<< "\n" << player2 << " wins!\n\n";
                        }
                    }
                    
                    gameBoard.PrintBoard();
                    
                    callCheck = true;
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
