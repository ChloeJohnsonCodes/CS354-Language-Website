class Board {
private:
    Box boardArray[9];
    int numberOfMoves;
    public:                         
    
        /* Board: Board declaration. Initializes an array of nine
         * boxes. Each box has an initial value of 0
         */
        Board();                             
        
        /* ClearBoard: Clear the gameboard. Set each box in the
         * array to have a value of 0
         */
        void ClearBoard();
        
        /* SetBox: Set the specified box in the array to a 
         * given value
         */
        void SetBox(int index, int val);
        
        /* GetBox: Get the box at the specified index
         */
        Box GetBox(int index);
        
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
