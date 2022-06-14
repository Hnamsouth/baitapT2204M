#include<iostream>
#include<math.h>
#include<algorithm>
using namespace std;

// 2, Hãy viết hàm tìm số nguyên tố nhỏ nhất lớn hơn mọi giá trị có trong mảng
int sntMin(int n,int ar[]){
    int sntk;
    int max=*std::max_element(ar,ar+n);
    if(max<2){
        return 2;
    }else{
        for(int i=max; ;i++){
            bool k=true;
            for(int j=2;j<=sqrt(i);j++){
                if(i%j==0){
                    k=false;
                    break;
                }
            }
            if(k){
                sntk=i;
                break;
            }
        }
        return sntk;
    }
}

void nhapmang(int n,int ar[]){
    for(int i=0;i<n;i++){
        cin>>ar[i];
    }
}
int main(){
    int ar[1000];
    int n;
    cout<<"nhap so luong ptu trong mang: "<<endl;
    cin>>n;
    nhapmang(n,ar);
    cout<<"so nguyen to nho nhat lon hon cac ptu cua mang la : "<<sntMin(n,ar);

    // cout<<"snt lon hon cac gia tri trong mang la"<<sntk;
    return 0;
}