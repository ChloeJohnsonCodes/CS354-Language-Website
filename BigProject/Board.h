/* Header file for the Board class
 * Each board contains an array of nine boxes
 */
class Board {
    public:                         
    
        /* Board: Board declaration. Initializes an array of nine
         * boxes. Each box has an initial value of 0
         */
        Board();                             
        
        /* ClearBoard: Clear the gameboard. Set each box in the
         * array to have a value of 0
         *      return: 1 on success, -1 on error
         */
        int ClearBoard();
        
        /* IfWinner: Determine if there is a winner on the board. 
         * A winner is found if the same value, 1 or 2, spans a "row",
         * "column", or "diagonal". This does not return true for
         * the zero value
         *      return: true, false
         */
        bool IfWinner();          
    
        /* IfFilled: Determine if the gameboard is full
         *      return: true, false
         */
        bool IfFilled();  
    
        /* PrintBoard: Print an ascii representation of the board, calling
         * the PrintBox() method to print each box's value between the lines
         */
        void PrintBoard();     
};
