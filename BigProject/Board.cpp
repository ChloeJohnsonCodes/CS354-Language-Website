/* Board class definitions
 */

 #include "Board.h"
 #include "Box.h"

 Board::Board(){
//    Box boardArray[9];
//    private int numberOfMoves
 }
 
 void Board::ClearBoard(){
     for (int i = 0; i < 9; i++) {
         boardArray[i].SetValue(0);
     }

 bool Board::IfWinner()
 {
     bool winner = false;

     //checks the rows
     if((boardArray[0]==boardArray[1]) && (boardArray[1]==boardArray[2]) && boardArray[0] != 0)
     {
         winner = true;
     }
     else if ((boardArray[3] == boardArray[4]) && (boardArray[4] == boardArray[5]) && boardArray[3] != 0)
     {
         winner = true;
     }

     else if ((boardArray[6] == boardArray[7]) && (boardArray[7] == boardArray[8]) && boardArray[6] != 0)
     {
         winner = true;
     } else if(numberOfMoves >= 9){
        winner = true;
     }
 }

    return winner;
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
