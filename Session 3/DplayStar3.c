/* 3:
    *
    * *
    * * *
    * * * *
    * * * * *
*/
#include<stdio.h>
int main(){
    int k=5;
    for(int i=1;i<=k;i++){
        for(int j=0;j<i;j++){
            printf("* ");
        }
        printf("\n");
    }
    return 0;
}