#include<stdio.h>
#include<string.h>
#include<math.h>

int main(){
    char seating_list[5][4][10]  =   {   {"manoj" , "Ashok" , "priya" , "selva"} ,
                                      {"mohan" , "Ragu" , "devi" , "mani"} , 
                                      {"kavitha" , "balu" , "Arun" , "Kumar"} ,
                                      {"hari" , "surya" , "sakthi" , "Ramesh"},
                                      {"shri" , "Dinesh" , "Raj" , "Abi"}           };
    int row = 5 , col = 4 ;
    for (int i = 0 ; i < row ; i++){
        if(i % 2 == 0){
            for(int j = 0 ; j < col ; j++){
                printf("%s ",seating_list[i][j]);
            }
        }
        else{
            for(int k = col - 1 ; k >= 0 ; k--){
                printf("%s " , seating_list[i][k]);
            }
        }
    }
    return 0;
}