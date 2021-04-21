/* Board class definitions
 */

 #include "Box.h"
 #include "Board.h"
 #include <iostream>
 
 using namespace std;

 Board::Board(){
     for (int i = 0; i < 9; i++) {
         boardArray[i].SetValue(0);
     }
 }
 
 void Board::ClearBoard(){
     for (int i = 0; i < 9; i++) {
         boardArray[i].SetValue(0);
     }
}

 void Board::SetBox(int index, int val){
     boardArray[index].SetValue(val);
 }
 
 Box Board::GetBox(int index){
     return boardArray[index];
 }

 bool Board::IfWinner()
 {
     bool winner = false;

     //checks the rows for a winner
     if((boardArray[0].GetValue()==boardArray[1].GetValue()) && (boardArray[1].GetValue()==boardArray[2].GetValue()) && boardArray[0].GetValue() != 0)
     {
         winner = true;
     }
     else if((boardArray[3].GetValue() == boardArray[4].GetValue()) && (boardArray[4].GetValue() == boardArray[5].GetValue()) && boardArray[3].GetValue() != 0)
     {
         winner = true;
     }

     else if ((boardArray[6].GetValue() == boardArray[7].GetValue()) && (boardArray[7].GetValue() == boardArray[8].GetValue()) && boardArray[6].GetValue() != 0)
     {
         winner = true;
     }

         //checks the columns for a winner

     else if((boardArray[0].GetValue()==boardArray[3].GetValue()) && (boardArray[3].GetValue()==boardArray[6].GetValue()) && boardArray[0].GetValue() != 0)
     {
         winner = true;
     }

     else if ((boardArray[1].GetValue() == boardArray[4].GetValue()) && (boardArray[4].GetValue() == boardArray[7].GetValue()) && boardArray[1].GetValue() != 0)
     {
         winner = true;
     }

     else if ((boardArray[2].GetValue() == boardArray[5].GetValue()) && (boardArray[5].GetValue() == boardArray[8].GetValue()) && boardArray[2].GetValue() != 0)
     {
         winner = true;
     }

         //checks the diagonals for a winner

     else if ((boardArray[0].GetValue()==boardArray[4].GetValue()) && (boardArray[4].GetValue()==boardArray[8].GetValue()) && boardArray[0].GetValue() != 0)
     {
         winner = true;
     }

     else if ((boardArray[2].GetValue()==boardArray[4].GetValue()) && (boardArray[4].GetValue()==boardArray[6].GetValue()) && boardArray[2].GetValue() != 0)
     {
         winner = true;
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
     cout<<" " << boardArray[0].PrintBox() << " | " << boardArray[1].PrintBox() << " | " << boardArray[2].PrintBox() << "\n";
     cout<<"---+---+---\n";
     cout<<" "<<boardArray[3].PrintBox() << " | " << boardArray[4].PrintBox() << " | " << boardArray[5].PrintBox() << "\n";
     cout<<"---+---+---\n";
     cout<<" "<<boardArray[6].PrintBox() << " | " << boardArray[7].PrintBox() << " | " << boardArray[8].PrintBox() << "\n";
 }
