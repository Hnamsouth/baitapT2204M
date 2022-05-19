// nhap n tim gia tri co vi tri n trong day so Fibonacci
// Fibonacci la= 0 ,1 ,1 ,2, 3, 5, 8, 13, 21...
// 











#include<stdio.h>
#include <string.h>
// S: 0 , 1, 1, 2, 3, 5, 8
int fibonacci(int n)
{   
    int i=0,j=1;

}

int sum(int n){ 
    // gía trị ban đầu cua sum(int n) = 0 vs bất kỳ số n
    // l1 1+0 , 2+1, 3+3=6, 6+4=10; 10+5=15 , 15+6=21
    if(n == 7){
        return 0;   
    } // điều kiện dừng (phần cơ sở)
    
    int x=0,x1=1,x3;
    x=x1;
    x1=x3;
    // printf("%d ",*sum);
    printf("%d ",x3);
    
    return  x3=x + x1;// l1 6 +5
    // for(i=0;i<7;i++) --- 1+sum(n+1) == i++
}

void Fipolasi(int n){
    int x1=0,x2=1,x3=0,cd;
    /*for(int i=0;i<20;i++){
        if(i==n){
            printf("%d ",x1);
        }
        x1=x2;
        x2=x3;
        x3=x1+x2;
        
    }*/
    for(int i=1;i<20;i++){
        if(i&1){
            if(i==n+1){
                printf("\ngia tri tai vi tri %d la : %d \n",n,x1);
            }
            printf("%d ",x1);
            x3=x1+x2;
            cd =x3;
            x3=x1;
            x1=cd;
        }else{
            if(i==n+1){
                printf("\ngia tri tai vi tri %d la : %d \n",n,x2);
            }
            printf("%d ",x2);
            x3=x1+x2;
            cd=x3;
            x3=x2;
            x2=cd;
        }
    }
}
/* 1:
    * * * * *
    * * * * *
    * * * * * 
*/
void displaysao1 (){
    for(int i=0;i<3;i++){
        for(int j=0;j<5;j++){
            printf("* ");
        }
        printf("\n");
    }
}
/* 2:
    * * * * *
    * * * *
    * * * * *
    * * * *
    * * * * *
*/
void displaysao2 (){
    int k=5,i;
    for(i=0;i<k;i++){
        if(i&1){
            k=4;
        }
        for(int j=0;j<k;j++){
            printf("* ");
        }
        k=5;
        printf("\n");
    }
}       
/* 3:
    *
    * *
    * * *
    * * * *
    * * * * *
*/
void displaysao3(){
    int k=5;
    for(int i=1;i<=k;i++){
        for(int j=0;j<i;j++){
            printf("* ");
        }
        printf("\n");
    }
}
/*  4:
        * 
        ** **
        *** *** ***
        **** **** **** ****
        ***** ***** ***** ***** *****   
*/
void displaysao4(){
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
}

int main(){
    
    int n;
    printf("nhap so nguyen n: ");
    printf("\n------------------\n");
    // printf("%d", fibonacci(10));
    printf("%d", sum(1));
    // sum(6);

    // scanf("%d",&n);
    // Fipolasi(n);

    /*displaysao1();
    printf("\n------------------\n");
    displaysao2();
    printf("\n------------------\n");
    displaysao3();
    printf("\n------------------\n");
    displaysao4();*/

    /*int k=5,skt;
    char c[5]={'*','*','*','*','*'};
    for(int i=1;i<=k;i++){
        for(int j=0;j<i;j++){
            // skt=(strlen(c))+i;

            printf("%c",c[j]);
            printf(" ");
        }
        printf("\n");
    }*/
    return 0;
}