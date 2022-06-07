#include<iostream>
#include <cstring>
#include "Functionlab8.h"
using namespace std;
//3. Nhập vào mảng 10 chuỗi từ bàn phím và in ra danh sách này
int main(){

    int n=10;
    char j[100][100];
    nhap10(j);
    inmang10(j,n);
    
    return 0;
}
