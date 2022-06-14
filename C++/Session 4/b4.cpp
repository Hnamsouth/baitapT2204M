// B4:Nhập mảng n số nguyên, tìm số lẻ cuối cùng của mảng
#include<iostream>
using namespace std;

int main(){
    int p;
    cout<< " nhap so luong phan tu trong mang: "<<endl;
    cin >>p;
//
    int *n;
    n=(int*)malloc(p*sizeof(int));
    int bd=0,slcc;
    for(int i=0;i<p;i++){
        cin>>n[i];
        if(n[i]%2==1||n[i]%2==-1){
            slcc=n[i];
            bd++;
        }
    }
//
    /*
    for(int j=p-1;j>=0;j--){
        if(n[j]&1==1){
            slcc=n[j];
            break;
        }else{
            bd++;
        }
    }
    */
    if(bd==p){
        cout<<"trong mang khong co so le"<<endl;
    }else {
        cout<<"so le cuoi cung cua mang la" <<endl<< slcc;
    }

    return 0;
}