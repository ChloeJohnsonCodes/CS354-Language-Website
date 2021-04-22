/* Header file for the Box class
 * Each box holds a value: X, O, or empty
 */
 
class Box {
    private:   
        /* The value held in the box. 
         * Empty = 0, "X" = 1, "O" = 2
         */
        int value;                  
        
    public:                         
        
        /* Box: Box declaration. Sets initial value to 0
         */
        Box();                      
        
        /* GetValue: Return the value of the box
         *      return: value
         */
        int GetValue();             
        
        /* SetValue: Set the value of the box to be 0, 1, or 2
         *      val: 0, 1, or 2
         *      return: 1 on success, -1 on error
         */
        void SetValue(int val);     
    
        /* IfEmpty: Check to see if the box is empty (has a value of 0). 
         *       return: true, false
         */
        bool IfEmpty();          
        
        /* PrintBox: Print the character associated with the box's value. 
         * 0 = " ", 1 = "X", 2 = "O"
         */
        char PrintBox();            
};
