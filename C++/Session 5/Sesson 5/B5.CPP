//5. Nhập 1 mảng n số nguyên, đảm bảo các số nhập vào không bị trùng nhau.
#include<iostream>
using namespace std;
int main(){
    int ar[1000];
    int n,x;
    cout<<"nhap so luong phan tu trong mang"<<endl;
    cin>>n;
    cout<<"nhap vao so x:"<<endl;
    int bienDK=1;
    int i;
    for(i=0;i<n;i++){
        nhaplai:
        cin>>ar[i];
        if(i>=1){
            for(int j=0;j<i;j++){
                if(ar[i]==ar[j]){
                    cout<<"nhap lai ptu : ";
                    goto nhaplai;
                }
            }
        }
    }
    for(int i=0;i<n;i++){
        cout<<ar[i]<< " ";
    }
    return 0;
}