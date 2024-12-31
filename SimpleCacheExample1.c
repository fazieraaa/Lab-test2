#include <stdio.h>

int main() {
    int data[4][4];    // Create 4x4 grid of numbers
    
    // Print title
    printf("Cache Access Pattern Demo\n");
    printf("========================\n\n");     
    
    // First pattern: Row by row
    printf("1. Accessing by rows (Good for cache):\n");
    for(int row = 0; row < 4; row++) {           // Outer loop for rows
        printf("Row %d: ", row);                  // Show which row we're on
        for(int col = 0; col < 4; col++) {       // Inner loop for columns
            data[row][col] = 1;                   // Put 1 in current position
            printf("[%d,%d] ", row, col);         // Show position we accessed
        }
        printf("\n");                            // New line after each row
    }
    
    // Second pattern: Column by column
    printf("\n2. Accessing by columns (Bad for cache):\n");
    for(int col = 0; col < 4; col++) {           // Outer loop for columns
        printf("Column %d: ", col);               // Show which column we're on
        for(int row = 0; row < 4; row++) {       // Inner loop for rows
            data[row][col] = 1;                   // Put 1 in current position
            printf("[%d,%d] ", row, col);         // Show position we accessed
        }
        printf("\n");                            // New line after each column
    }
    
    return 0;
}