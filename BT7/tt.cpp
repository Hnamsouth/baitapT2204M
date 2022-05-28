#include<iostream>
#include<math.h>
#include<algorithm>
using namespace std;
int main(){
    
    int n=5;
    int ar[5]={-7,0,2,3,3};

    int bcln;
<<<<<<< Updated upstream
    
=======
    //Nếu a hoặc b là 0, thì không tồn tại số nguyên dương chia hết cho a và b, '
    //khi đó quy ước rằng LCM(a, b) là 0.
>>>>>>> Stashed changes
    int i=*std::max_element(ar,ar+n);
    for(i; ;i++){
        int k=0;
        for(int j=n;j>=0;j--){
            if(ar[j]==0){
<<<<<<< Updated upstream
                continue;
=======
                bclc=0;
                k
>>>>>>> Stashed changes
            }else{
                if(i%ar[j]!=0){
                    k=1;
                    break;
                }
            }
        }
        if(k==0){
            bcln=i; 
            break;
        }
    }
    // cout<<bcln;
    cout<<"boi chung nho nhat cua mang la: "<<bcln;
    return 0;
}