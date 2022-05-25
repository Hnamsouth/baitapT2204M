// 4. Cho mảng 1 chiều n số nguyên  , hãy tìm giá trị x sao cho đoạn [-x, x] chứa tất cả các giá trị trong mảng
    // vd: 5 9 3 -7 1 16 20 thif doan [-x,x] la [-20,20]
#include<iostream>
using namespace std;
int main(){
    int ar[1000];
    int n;
    cout<<"nhap so luong phan tu trong mang"<<endl;
    cin>>n;
    int max=ar[0];
    for(int i=0;i<n;i++){
        cin>>ar[i];
        if(ar[i]>0){
            if(ar[i]>max){
                max=ar[i];
            }
        }else{
            if(-ar[i]>max){
                max=-ar[i];
            }
        }
    }
    cout<<"doan [-x,x] chua gia tri trong mang la :"<< -max << " den "<<max;
   
    return 0;
}

