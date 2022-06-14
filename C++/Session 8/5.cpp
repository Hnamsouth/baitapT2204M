#include<iostream>
#include <cstring>
#include "Functionlab8.h"
using namespace std;
//5: 5. Nhập vào 1 mảng 10 chuỗi, tìm chuỗi có độ dài lớn nhất
int main(){
    
    char j[100][100];
    nhap10(j);
    int k,vtri[10],bd;
    arraymax(j,vtri,k,bd);

    return 0;
}
