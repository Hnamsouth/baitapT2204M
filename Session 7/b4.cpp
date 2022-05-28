#include<iostream>
#include<math.h>
#include<algorithm>
using namespace std;
int timboi(int n,int ar[],int max){
    int bcln;
    int i=max;
    for(i; ;i++){
        bool k=true;
        for(int j=0;j<n;j++){
            if(ar[j]==0){
                return 0;
            }else{
                if(i%ar[j]!=0){
                    k=false;
                    break;
                }
            }
        }
        if(k){
            bcln=i; 
            break;
        }
    }
    return bcln;
}
int ttd(int n,int ar[]){
    int max=abs(ar[0]);
    for(int i=1;i<n;i++){
        if(abs(ar[i])>max){
            max=abs(ar[i]);
        }
    }
    return max;
}
int bcnn(int n, int ar[]){
    if(ttd(n,ar)==0){
        return 0;
    }else{
        return timboi(n,ar,ttd(n,ar));
    }
}
void nhapmang(int n,int ar[]){
    for(int i=0;i<n;i++){
        cin>>ar[i];
    }
}
int main(){
    
    int n;
    int ar[1000];

    cout<<"nhap so luong phan tu cua mang: ";
    cin>>n;

    nhapmang(n,ar);

    if(bcnn(n,ar)==0){
        cout<<"mang ko co boi chung";
    }else{
        cout<<"uoc chung nho nhat cua mang la "<<bcnn(n,ar);
    }
    return 0;
}