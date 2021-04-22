/* Box class definitions
 */
 
 #include "Box.h"
 
 Box::Box(){
    value = 0;
 }

int Box::GetValue(){
    return value;
}

void Box::SetValue(int val){
    Box::value = val;
}
   
 bool Box::IfEmpty(){
     return value == 0;
 }
   
 char Box::PrintBox(){
     char ret = ' ';
     if(value == 1){
        ret = 'X' ;
     }
     else if(value == 2){
        ret = 'O';
     }
     
     return ret;
 }
