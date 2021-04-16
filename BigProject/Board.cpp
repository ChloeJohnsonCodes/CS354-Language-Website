/* Board class definitions
 */
 
 #include "Board.h"
 #include "Box.h"
 
 Board::Board(){
    Box boardArray[9];
 }
 
 int Board::ClearBoard(){
     
 }
 
 bool Board::IfWinner(){
     
 }
 
 bool Board::IfFilled(){
     
 }
 
 void Board::PrintBoard(){
     std::cout<<" "<<boardArray[0].PrintBox() << " | " << boardArray[1].PrintBox << " | " << boardArray[2].PrintBox << "\n";
     std::cout<<"---+---+---\n";
     std::cout<<" "<<boardArray[3].PrintBox() << " | " << boardArray[4].PrintBox << " | " << boardArray[5].PrintBox << "\n";
     std::cout<<"---+---+---\n";
     std::cout<<" "<<boardArray[6].PrintBox() << " | " << boardArray[7].PrintBox << " | " << boardArray[8].PrintBox << "\n";
 }
