//2. Nhập vào 2 chuỗi, tìm chuỗi nào đứng trước trong dãy alphabet
#include<iostream>
#include <cstring>
#include "Functionlab8.h"
using namespace std;

int main(){

    char a[100],b[100];

    nhap2chuoi(a,b);
    int n=Cdungtruoc(a,b);
    if(n==0){
        cout<<"chuoi a dung truoc ";
    }else if(n==1){
        cout<<"chuoi b dung truoc ";
    }else{
        cout<<"ko co chuoi nao dung truoc";
    }

    
    return 0;
}