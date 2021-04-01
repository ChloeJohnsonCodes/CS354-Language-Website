/* Main program utilizing Wallet.cpp and Wallet.h.
   Now, we write a program that uses our new Wallet 
   class!
   */

#include <iostream>
#include "Wallet.h"	//Include the header file once again!

int main()
{
    int startingBal = 100;
    
    //Creating two wallet objects with two distinct balances
    Wallet myWallet;
    Wallet yourWallet;
    
    myWallet.setBalance(startingBal);
    yourWallet.setBalance(startingBal);
    
    std::cout<<"I have " << myWallet.getBalance() << " dollars in my wallet!\n";
    std::cout<<"You also have " << yourWallet.getBalance() << " dollars.\n";
    
    //Only myWallet's balance will be affected
    myWallet.withdraw(27);
    
    int loseVal = startingBal - myWallet.getBalance();
    
    std::cout<<"I lost " << loseVal  << " dollars...\n";
    std::cout<<"Now I have " << myWallet.getBalance() << " dollars and you have " << yourWallet.getBalance() << " dollars.\n";
    std::cout<<"Lucky you!\n";

    return 0;
}
