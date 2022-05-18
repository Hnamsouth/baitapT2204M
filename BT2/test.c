#include<stdio.h>
int main(){
    int n;
    int i,j;
    // int cacuoc;
    // int p;
    printf("nhap so nguyen n:");
    scanf("%d",&n);
    if(n<2){
        printf("khong co so nguyen to nho hon 2");
    }
    for(i=2;i<n;i++){
        int cacuoc=0;
        // int p=i;
        for(j=1;j<=i;j++){
            // printf("%d %d\n",i,j);
            if(i%j==0){
                cacuoc++;
            }
        }
        if(cacuoc==2){
            printf("%d ",i);
        }
    }
    return 0;
}