/* Box class definitions
 */
 
 #include "Box.h"
 
 Box::Box(){
    value = 0;
 }

int Box::GetValue(){
    return value;
}

int Box::SetValue(int val){
    Box::value = value;
}
   
 bool Box::IfEmpty(){
     return value == 0;
 }
   
 void Box::PrintBox(){
     std::cout << value << " ";
 }
