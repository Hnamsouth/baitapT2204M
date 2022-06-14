#include<iostream>
#include <cstring>
#include "Functionlab8.h"
using namespace std;
//6. Nhập vào 1 mảng 10 chuỗi, tìm chuỗi phải đứng đầu tiên theo dãy alphabet : gia trij trong alphabet nho hon se dung dau

int main(){

 char a[100][100];
    nhap10(a);
    int n;
    int bd;
    int vtridau[10];
    ArrayFirst(a,vtridau,n,bd);
    
    return 0;
}
