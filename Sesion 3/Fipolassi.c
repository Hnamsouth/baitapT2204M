// TÌM GIÁ TRỊ THỨ N TRONG DÃY FILOLASSI

#include<stdio.h>
int main(){
    int n;
    printf("nhap so nguyen n: ");
    scanf("%d",&n);
    int x1=0,x2=1,x3=0,cd;
//C1:
    (n>0)? printf("gia tri tai vi tri %d trong day Filolassi la : ",n): printf("n phai >= 0") ;
    for(int i=0;i<=n;i++){
        if(i==n){
            printf("%d ",x3);
            break;
        }
        x1=x2;
        x2=x3;
        x3=x1+x2;
    }
//C2:
    /*for(int i=1;i<=n+1;i++){
        if(i&1){
            if(i==n+1){
                printf("\ngia tri tai vi tri %d la : %d \n",n,x1);
            }
            // printf("%d ",x1);
            x3=x1+x2;
            cd =x3;
            x3=x1;
            x1=cd;
        }else{
            if(i==n+1){
                printf("\ngia tri tai vi tri %d la : %d \n",n,x2);
            }
            // printf("%d ",x2);
            x3=x1+x2;
            cd=x3;
            x3=x2;
            x2=cd;
        }
    }*/

    return 0;
}