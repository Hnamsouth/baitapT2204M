#include<iostream>
#include<math.h>
#include<algorithm>
using namespace std;
//3. Hãy viết hàm tìm ước chung lớn nhất của tất cả các phần tử trong mảng
int min(int n,int ar[]){
    int Min=abs(ar[0]);
    for(int i=1;i<n;i++){
        if(Min==0||ar[i]!=0&&abs(ar[i])<Min){
            Min=ar[i];
        }
    }
    return Min;
}
int kiemtrauoc(int n,int ar[],int min){
    int ucln;
    for(int j=abs(min);j>0;j--){
        bool k=true;
        for(int i=0;i<n;i++){
            if(ar[i]==0){
                continue;
            }else{
                if(ar[i]%j!=0){
                    k=false;
                }
            }
        }
        if(k){
            ucln=j;
            break;
        }
    }
    return ucln;
}
int uclnArray(int n,int ar[]){
    int ucMax,gtrmin;
    int minar=*std::min_element(ar,ar+n);
    if(minar==0){
        gtrmin=min(n,ar);
        return kiemtrauoc(n,ar,gtrmin);
    }else{
        return kiemtrauoc(n,ar,minar);
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

    if(uclnArray(n,ar)==0){
        cout<<"mang ko co uoc chung";
    }else{
        cout<<"uoc chung lon nhat cua mang la "<<uclnArray(n,ar);
    }
    return 0;
}