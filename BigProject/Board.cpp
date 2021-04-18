/* Board class definitions
 */

 #include "Board.h"
 #include "Box.h"

 Board::Board(){
    Box boardArray[9];
 }
 
 void Board::ClearBoard(){
     for (int i = 0; i < 9; i++) {
         boardArray[i].SetValue(0);
     }

 bool Board::IfWinner()
 {
     bool winner = false;

     //checks the rows
     if((board[0]==board[1]) && (board[1]==board[2]) && board[0] != 0)
     {
         winner = true;
     }
     else if ((board[3] == board[4]) && (board[4] == board[5]) && board[3] != 0)
     {
         winner = true;
     }

     else if ((board[6] == board[7]) && (board[7] == board[8]) && board[6] != 0)
     {
         winner = true;
     }


 }

 bool Board::IfFilled(){
     bool filled = true;
     for (int i = 0; i < 9; i++) {
         if (boardArray[i].IfEmpty()) {
             filled = false;
         }
     }
     return filled;
 }

 void Board::PrintBoard(){
     std::cout<<" "<<boardArray[0].PrintBox() << " | " << boardArray[1].PrintBox << " | " << boardArray[2].PrintBox << "\n";
     std::cout<<"---+---+---\n";
     std::cout<<" "<<boardArray[3].PrintBox() << " | " << boardArray[4].PrintBox << " | " << boardArray[5].PrintBox << "\n";
     std::cout<<"---+---+---\n";
     std::cout<<" "<<boardArray[6].PrintBox() << " | " << boardArray[7].PrintBox << " | " << boardArray[8].PrintBox << "\n";
 }
