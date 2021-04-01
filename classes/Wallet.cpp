/* Wallet class definitions.
   It's time to define all of the Wallet functions.
   */

#include "Wallet.h"                 //Remember to include the header file!
        
/* When defining a function outside its class, 
   we need to specify which class it's from 
   followed by the scope resolution operator, "::"
   */
Wallet::Wallet(){
    balance = 0;                    //Initialize our class variables
}        

/* We access balance with these methods for 
   encapsulation!
   */
int Wallet::getBalance(){
    return balance;                 
}

void Wallet::setBalance(int val){
    balance = val;
}
    
void Wallet::withdraw(int val){
    balance -= val;
}
