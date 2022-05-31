#include<iostream>
#include<cstring>
using namespace std;

int main(){
    
    char a[100],b[100];
    cout<<"nhap vao 2 chuoi ky tu: "<<endl;
    cin>>a>>b;
    cout<<a<<endl<<b<<endl;
// Hàm nối chuỗi kỹ tự strcat(a,b)
    strcat(a,b);  // == a=a+b
    cout<<a<<endl;
    strcat(b,a);  // == b=b+(a+b)
    cout<<b<<endl;

// Hàm  strcmp(a,b)
    // nếu 2 chuỗi bằng nhau(giống nhau từng kí tự ) thì sẽ trả về 0 , ngược lại sẽ trả về !=0
    // hàm sẽ so sánh theo kiểu alpha b: a,b,c -- a,n,m , sẽ so sánh từng kí tự 1 
    strcmp(a,b);

// Hàm coppy  strcpy(a,b): sao chép chuỗi : a = b. vd b="nam" -> a="nam"
    // coppy s1 sẽ coppy s2.

    return 0;
}