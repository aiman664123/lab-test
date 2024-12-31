 #include <stdio.h>   // This includes standard input/output library for printf function
int main() {   // Main function - program starts here
    int myArray[5][5];   // Creates a 3x3 grid of numbers (like a table with 3 rows and 3 columns)
    
    // These lines print the title with decoration
    printf("Writing numbers to a 5x5 array\n");   // \n means go to new line
    printf("==============================\n\n");  // Prints a line of = for decoration
    
    // This is the outer loop for rows
    for(int row = 0; row < 5; row++) {           // row starts at 0, runs until 2 (3 rows total)
        // This is the inner loop for columns
        for(int col = 0; col < 5; col++) {       // col starts at 0, runs until 2 (3 columns total)
            myArray[row][col] = row + col;        // Put the sum of row and column numbers in that position
            printf("Writing %d to position [%d][%d]\n",  // Show what we're writing and where
                   row + col, row, col);         // These are the values that go into the %d spots above
        }
        printf("Finished row %d\n\n", row);      // Show when we finish each row
    }
    
    return 0;   // End program successfully 
}