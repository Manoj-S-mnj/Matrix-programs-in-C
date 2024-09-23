#include<stdio.h>

void boundaryTraversal(int matrix[][5] , int row  , int col){
    // To print first row elements
    for(int i = 0 ; i < col ; i++){
        printf("%d ",matrix[0][i]);
    }
    // To print Last column elements
    for (int i = 1; i < row; i++) {
        printf("%d ", matrix[i][col-1]);
    }

    // To print Last row elements in reverse order
    if (row > 1) {
        for (int i = col - 2; i >= 0; i--) {
            printf("%d ", matrix[row-1][i]);
        }
    }

    // To print an first column elements in reverse order
    if (col > 1) {
        for (int i = row - 2; i > 0; i--) {
            printf("%d ", matrix[i][0]);
        }
    }
}

int main(){
    int row = 4 , col = 5;
    int matrix[4][5] = {{4,3,2,1,5},
                        {5,6,8,7,9},
                        {4,6,8,7,3},
                        {1,3,5,7,9}} ;

    boundaryTraversal(matrix , row , col);
    return 0;
}