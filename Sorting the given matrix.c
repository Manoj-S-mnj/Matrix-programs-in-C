#include<stdio.h>
#include<math.h>

int sortingFunction (int mat[][3] , int n){
    int newArray[n*n];

    // Converting matrix into Array
    int count = 0 ;
    for(int i = 0 ; i < n ; i++){
        for(int j = 0 ; j < n ; j++){
            newArray[count] = mat[i][j];
            count++;
        }
    }

    // Sorting an Array
    int temp;
    for(int i = 0 ; i < count ; i++){
        for(int j = i+1 ; j < count ; j++){
            if(newArray[i] > newArray[j]){
                temp = newArray[i];
                newArray[i] = newArray[j];
                newArray[j] = temp;
            }
        }
    }
    //Converting Array into matrix 
    int c = 0;
    int newMat[n][n];
    for(int i = 0 ; i < n ; i++){
        for(int j = 0 ; j < n ; j++){
            newMat[i][j] = newArray[c];
            c++;
        }
    }

    //Printing an Matrix
    for(int i = 0 ; i < n ; i++){
        for(int j = 0 ; j < n ; j++){
            printf("%d ",newMat[i][j]);
        }
        printf("\n");
    }
    return 0;
    
}

int main(){
    int n = 3;
    int matrix_array[3][3] = { { 5 , 6 , 2 } , { 7 , 1 , 3 } , { 4 , 9 , 8 } } ;
    sortingFunction(matrix_array , n);
    return 0;
}