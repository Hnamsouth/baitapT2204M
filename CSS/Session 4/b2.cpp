// B2: Tính trung bình cộng các số lẻ ở vị trí chẵn trong mảng n số

#include<iostream>
using namespace std;

int main(){
    int p;
    cout<< " nhap so luong phan tu trong mang: "<<endl;
    cin >>p;
    int *n;
    n=(int*)malloc(p*sizeof(int));
    int tong=0,dem=0;
    for(int i=0;i<p;i++){
        cin>>n[i];
        if(i%2==0 && n[i]%2==1||n[i]%2==-1){
            tong+=n[i];
            dem++;
        }
    }
    if(dem==0){
        cout<< " khong co so le o vi tri chan trong mang";
    }else{
        float tbc= tong /(float)dem;
    cout<<"tbc cac so le o vi tri chan trong mang la: "<< tbc;
    }

    return 0;
}