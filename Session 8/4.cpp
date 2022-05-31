#include<iostream>
#include <cstring>
#include "Functionlab8.h"
using namespace std;
//4. Nhập vào 1 chuỗi và đảo ngược chuỗi vừa nhập: co the Hàm đảo ngược chuỗi strrev(a)

int main(){
    char a[100];
    cout<<"nhap mang: ";
    cin>>a;
    Bai4(a);
    for(int i=0;i<strlen(a);i++){
        cout<<a[i];
    }

    
    return 0;
}
