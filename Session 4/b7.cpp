//B7: Nhập mảng n số nguyên, tìm xem chuỗi số dương mà có tổng lớn nhất là bao nhiêu
#include<iostream>
using namespace std;

int main(){
    int p;
    cout<< " nhap so luong phan tu trong mang: "<<endl;
    cin >>p;
    int *n;
    n=(int*)malloc(p*sizeof(int));
    int tong[2]={0,0};
    int j=0;
    for(int i=0;i<p;i++){
        cin>>n[i];
        if(n[i]>0){
            tong[j]+=n[i];        
        }else{
            if(tong[0]>tong[1]){
                tong[1]=0;          // rs tong nho 
                j=1;                // va chuyen vtri tong dang cong sang tong nho
            }else if(tong[0]<tong[1]){
                tong[0]=0;
                j=0;
            }
        }
    }
    if(tong[0]>tong[1]){
        cout<<" chuoi duong co tong lon nhat la: " <<tong[0];
    }else if(tong[0]<tong[1]){
        cout<<" chuoi duong co tong lon nhat la: " << tong[1];
    }else{
        cout<<"trong mang khong co so duong";
    }

    return 0;
}