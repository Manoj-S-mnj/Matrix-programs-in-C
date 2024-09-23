#include<stdio.h>

int FindSymmetricOrNot(int matrix[][3] , int n){
    int x = 1 ;
    for(int i = 0 ; i < n ; i++){
        for(int j = 0 ; j < n ; j++){
            if(matrix[i][j] == matrix[j][i]){
                x = 1;
            }
            else{
                return 0;
                break;
            }
        }
    }
    return x;
} 

int main(){

    int n = 3;
    int a[3][3] = { {1,2,3} , {2,1,4} , {3,4,1} } ;
    printf("%d",FindSymmetricOrNot(a , n));
    return 0;

}