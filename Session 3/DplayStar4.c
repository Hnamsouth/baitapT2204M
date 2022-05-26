/*  4:
        * 
        ** **
        *** *** ***
        **** **** **** ****
        ***** ***** ***** ***** *****   
*/
#include<stdio.h>
int main(){
     int k=5;
    for(int i=1;i<=k;i++){
        for(int j=0;j<i;j++){
            for(int n=0;n<i;n++){
                printf("*");
            }
            printf(" ");
        }
        printf("\n");
    }
    return 0;
}