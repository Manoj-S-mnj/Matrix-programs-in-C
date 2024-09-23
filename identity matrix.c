#include<stdio.h>
#include<math.h>

int identityMatrix(int n){
    for(int i = 0 ; i < n ; i++){
        for(int j = 0 ; j < n ; j++){
            if(i == j){
                printf("1 ");
            }
            else{
                printf("0 ");
            }
        }
        printf("\n");
    }
    return 0;
}

int main(){
    int n = 3;
    identityMatrix(n);
    return 0;
}