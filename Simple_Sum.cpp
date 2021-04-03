/* Simple Sum
 * This program demonstrates how to declare a variable and
 * add to it.
 */

#include <iostream>                 //Include the iostream library
    
int main()                          //Declare your main function
{
    int sum;                        //Declare your integer variable "sum". 
    sum = 1;                        //Sum was not initialized to zero, so we must define its value
    sum = sum + 1;                  //Then, we can add one to the value and update sum
    
    std::cout<<"Sum of 1 + 1 = " << sum;      //Write "Sum of 1 + 1 = " to the standard output,
                                              //followed by the value referenced by the sum variable.

    return 0;                       //End with a return code of 0
}