#include<iostream>
using namespace std;
//1. Tỉnh tổng các chữ số của 1 số nguyên n
int triso (int a){
    if(a==0){
        return 0;
    }
    return a%10 + triso(a/10);
}
int main(){
    
    int n;
    cout<<"nhap so nguyen n: ";
    cin>>n;
    cout<<"tong cac chu so cua n = "<<triso(n);


    return 0;
}