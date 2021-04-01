/* Wallet class header file.
   In similar fashion to C, you can create a header file
   that declares what an object is. Then you can write
   the actual definitions elsewhere! 
   I've defined everything in Wallet.cpp*/
class Wallet
{
    private:                        //This is an access specifier
        int balance;                //Everything listed after it is private
        
    public:                         //Now, everything listed after "public:" is public!
    
        Wallet();                   //Wallet declaration
        
        int getBalance();           //Return the current value held in balance
    
        void setBalance(int val);   //Set the balance to be an integer value
    
        void withdraw(int val);     //Remove an integer value from the balance
};