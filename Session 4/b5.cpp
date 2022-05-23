//B5:Nhập mảng n số nguyên, tìm số dương nhỏ nhất
#include<iostream>
using namespace std;

int main(){
    int p;
    cout<< " nhap so luong phan tu trong mang: "<<endl;
    cin >>p;
    int *n;
    n=(int*)malloc(p*sizeof(int));
    int i=0,snn=n[0],bd=0;
    for(int i=0;i<p;i++){
        cin>>n[i];
        if(snn<0 && n[i]>0){
            snn=n[i];
            bd++;
        }
        if(n[i]<snn && n[i] >0){
            snn=n[i];
            bd++;
        }
        if(snn>0){
            bd++;
        }
    }
    if(bd==0){
        cout<<"mang khong co so duong"<<endl;
    }else{
        cout<< " so nho duong nhat la : "<<snn<<endl;
    }

    return 0;
}