#include <iostream>
#include <string.h>
#include<cstring>

using namespace std;



int main(){
    
    // char a[100],b[100];
    // cout<<"nhap vao 2 chuoi ky tu: "<<endl;
    // cin>>a;
    // cout<<a<<endl<<b<<endl;
// Hàm nối chuỗi kỹ tự strcat(a,b)
    // strcat(a,b);  // == a=a+b
    // cout<<a<<endl;
    // strcat(b,a);  // == b=b+(a+b)
    // cout<<b<<endl;

// Hàm  strcmp(a,b)
    // nếu 2 chuỗi bằng nhau(giống nhau từng kí tự ) thì sẽ trả về 0 , ngược lại sẽ trả về !=0
    // hàm sẽ so sánh theo kiểu alpha b: a,b,c -- a,n,m , sẽ so sánh từng kí tự 1 
    // strcmp(a,b);

// Hàm coppy  strcpy(a,b): sao chép chuỗi : a = b. vd b="nam" -> a="nam"
    // coppy s1 sẽ coppy s2.
    // strcpy(a,b);

// Hàm đếm số lượng ký tự trong chuỗi
    // strlen(a);
    // strlen(a);

// Nhập vào 1 chuôi. chuỗi các chữ thường thành chữ in hoa
    // for(int i=0;i<strlen(a);i++){
    //     if(a[i]>=97&&a[i]<=122){
    //         a[i]-=32;
    //     }
    // }
    // cout<<a;
    // cout<<endl<<sizeof(a);

// Nhập 1 mảng có khoảng trắng: 
    char a[100];  //nhâp -> cin.getline(a,100);
    cin.getline(a,100);
    cout<<strlen(a);

    string b;  //nhập -> getline(cin,b);
    // char b;
    // cin.getline(b,100);       // Nhập vào mảng char "mang thu nhat"
    // getline(cin,b);           // Nhập vào mảng string "mang thu hai"
    // // cout << a << endl;      // Chương trình xuất ra "mang thu nhat"
    // cout << b << endl;      // Chương trình xuất ra "mang thu hai"
// Hàm đảo ngược chuỗi strrev(a)
    strrev(a);
    cout<<a;
    return 0;
}