#include<stdio.h>

int transpose(int mat[][2] , int row , int col){
    int newMatrix[col][row];
    for(int i = 0 ; i < row ; i++){
        for (int j = 0 ; j < col ; j++){
            newMatrix[j][i] = mat[i][j];
        }
    }

    for(int i = 0 ; i < col ; i++){
        for (int j = 0 ; j < row ; j++){
            printf("%d ",newMatrix[i][j]);
        }
        printf("\n");
    }
    return 0;
    
}

int main(){
    int matrix[3][2] = {{1,2},{3,4},{5,6}};
    int row = 3 , col = 2 ;
    transpose(matrix , row , col);
    return 0;
}