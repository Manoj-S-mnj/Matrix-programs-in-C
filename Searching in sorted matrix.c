#include<stdio.h>
// FUnction to find the given element in both unsorted and sorted matrix
int FindingelementInUnsortedMatrix(int matrix[][4] , int r , int c , int e){
    int index[2];
    // Algorithm to find the element in the given matrix in linear order
    for(int i = 0 ; i < r ; i++){
        for (int j = 0 ;  j < c ; j++){
            if(matrix[i][j] == e){
                index[0] = i;
                index[1] = j;
                break;
            }
        }
    }
    // To print the index values of the element 
    for(int i = 0 ; i < 2 ; i++){
        printf("%d ",index[i]);
    }
    return 0;
}

int FindingelementInSortedMatrix(int matrix[][4] ,int r ,int c ,int e){
    int index[2];
    for(int i = 0 ; i < r ; i++){
        if(matrix[i][c-1] < e){
            for(int j = 0 ; j < c ; j++){
                if(matrix[i][j] == e){
                    index[0] = i;
                    index[1] = j;
                    break;
                }
            }
        }
    }
    for(int i = 0 ; i < 2 ; i++){
        printf("%d ",index[i]);
    }
    return 0;
}

int main(){
    int row = 3 , col = 4 , element;
    int unSortedmatrix[3][4] = { {10,30,20,78} , 
                                 {34,56,78,64} ,
                                 {21,34,89,99} };
    int SortedMatrix [3][4] = { {10,20,30,31} ,
                                {34,35,38,40} , 
                                {45,56,67,89} } ;
    scanf("%d",&element);

    FindingelementInUnsortedMatrix(unSortedmatrix , row , col , element);
    printf("\n");
    FindingelementInSortedMatrix(SortedMatrix , row , col , element);
    return 0;
}