#include<stdio.h>

int FindMaximumOnes(int matrix[][5] , int r , int c){
    int array[r] ;
    int max = 0 , count , rownumber;
    for(int i = 0 ; i < r ; i++){
        count = 0;
        for(int j = 0 ;  j < c ; j++){
            if(matrix[i][j] == 1){
                count++;
            }
        }
        if( count > max){
            max = count;
            rownumber = i;
        }
    }
    return rownumber+1;
}

int main(){
    int row = 4 , col = 5;
    int matrix[4][5] = {{1,0,0,1,0} , 
                        {1,1,1,0,1} ,
                        {1,1,0,0,1} , 
                        {1,1,1,0,0} };
    int result = FindMaximumOnes(matrix , row , col);
    printf("Row - %d" , result);
    return 0;
}