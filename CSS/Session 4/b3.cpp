// B3:Nhập vào 1 mảng n số nguyên, sau đó nhập 1 số x. Tìm xem có x trong mảng không.
#include<iostream>
using namespace std;

int main(){
    int p;
    cout<< " nhap so luong phan tu trong mang: "<<endl;
    cin >>p;
//
    int *n;
    n=(int*)malloc(p*sizeof(int));
    for(int i=0;i<p;i++){
        cin>>n[i];
    }
//
    int x,k=0;
    cout<<"nhap so x"<<endl;
    cin>>x;
    for(int i=0;i<p;i++){
        if(n[i]==x){
            k++;
        }
    }
    if(k==0){
        cout<<"x khong trong mang"<<endl;
    }else{
        cout<<"x  co trong mang"<<endl;
    }

    return 0;
}