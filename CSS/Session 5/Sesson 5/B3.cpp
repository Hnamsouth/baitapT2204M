// 3. Cho mảng 1 chiều n số nguyên, hãy tìm đoạn [a, b] sao cho đoạn này chứa tất cả các giá trị trong mảng
    // vd: 5 9 3 -7 1 16 20 thif doan [a,b] la [-7,20]
    // c1: tìm giá trị nhỏ nhất và giá trị lớn nhất trong mảng
#include<iostream>
using namespace std;
int main(){
    int ar[]={5,-8,6,1,3,19,-20,2,15,-52};
    int n,x;
    // cout<<"nhap so luong phan tu trong mang";
    // cin>>n;
    int max=ar[0],min=ar[1];
    for(int i=0;i<10;i++){
        // cin>>ar[i];
        if(min>max){
            max=min;
            min=max;
        }else if(ar[i]>max){
            max=ar[i];
        }else if(ar[i]<min){
            min=ar[i];
        }
    }
    cout<< " doan [a,b] la: " << min<<" den "<<max;
    return 0;
}