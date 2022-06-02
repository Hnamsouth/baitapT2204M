/*Viết các chương trình sau với chuỗi:

1. Nhập vào 2 chuỗi, tìm chuỗi có độ dài lớn hơn.
2. Nhập vào 2 chuỗi, tìm chuỗi nào đứng trước trong dãy alphabet
3. Nhập vào mảng 10 chuỗi từ bàn phím và in ra danh sách này
4. Nhập vào 1 chuỗi và đảo ngược chuỗi vừa nhập
5. Nhập vào 1 mảng 10 chuỗi, tìm chuỗi có độ dài lớn nhất
6. Nhập vào 1 mảng 10 chuỗi, tìm chuỗi phải đứng đầu tiên theo dãy alphabet : gia trij trong alphabet nho hon se dung dau
*/
#include<iostream>
#include <cstring>
#include "Functionlab8.h"
using namespace std;





int main(){
 /*   
    char a[100],b[100];
    char *p=&a[100];
    char *k=&b[100];
*/
//1. Nhập vào 2 chuỗi, tìm chuỗi có độ dài lớn hơn.
/*
    nhaplai:
    nhap2chuoi(a,b);
    if(*p < 'a' || *p > 'z' && *k > 'Z' || *k < 'A'){
        if(*p < 'A' || *p > 'A' && *k > 'z' || *k < 'a'){
            cout<<"chuoi chua kytu dac biet. Nhap lai: "<<endl;
            goto nhaplai;
        }
    }
    dodaichuoi(a,b);
*/
//2. Nhập vào 2 chuỗi, tìm chuỗi nào đứng trước trong dãy alphabet
/*
    if(Cdungtruoc(a,b)){
        cout<<"chuoi a dung truoc ";
    }else{
        cout<<"chuoi b dung truoc ";
    }
*/
//3. Nhập vào mảng 10 chuỗi từ bàn phím và in ra danh sách này
/*
    int n;
    cout<<"nhap so luong ptu cua mang: ";
    cin>>n;
    char j[n][100];
    nhap10(j);
    inmang10(j,n);
*/

//4. Nhập vào 1 chuỗi và đảo ngược chuỗi vừa nhập: co the Hàm đảo ngược chuỗi strrev(a)
/*
    char a[100];
    cin>>a;
    Bai4(a);
    for(int i=0;i<strlen(a);i++){
        cout<<a[i];
    }
*/
//5: 5. Nhập vào 1 mảng 10 chuỗi, tìm chuỗi có độ dài lớn nhất

    char j[10][100];
    nhap10(j);
    if(CmaxOfArray(j)==0){
        cout<<"trong mang khong co chuoi ky tu ";
    }else{
        cout<<"chuoi thu "<<CmaxOfArray(j)<<" trong mang la Chuoi co do dai lon nhat";
    }

//6. Nhập vào 1 mảng 10 chuỗi, tìm chuỗi phải đứng đầu tiên theo dãy alphabet : gia trij trong alphabet nho hon se dung dau

    
    // trien khai gioong bai tim so nho nhat trong mang
    // tim ptu nho nhat trong 10 chuoi
    // neu chuoi 1= {a ,a ,a {& 2={b, b ,z }thi chuoi a van dung dau 
    // neu chuoi 1 ={a,b,c} & chuoi 2={a,b,c,d} thi chuoi 1 dung dau
    // gan a[0] la chuoi dung dau, so sanh a[0]vs cac chuoi con lai trong mang
    // chuoi nao < a[0] thi chuoi do dung dau
    /*
    char a[4][100];
    nhap10(a);
    int n=1;
    int bd=0;
    int vtridau[10]={0};
    for(int i=1;i<4;i++){
        bool k=true;
        for(int j=0;j<strlen(a[vtridau[bd]]);j++){
            if(a[i][j]<a[vtridau[bd]][j]){
                vtridau[bd]=i;
                k=false;
                break;
            }else if(a[i][j]==a[vtridau[bd]][j]){
                continue;
            }
        }
        if(k){
            if(strcmp(a[vtridau[bd]],a[i])==0){
                n++;
                bd++;
                vtridau[bd]=i;
            }
        }
    }
    if(n==4){
        cout<<"ko co chuoi nao dung dau ";
    }else if(n>1){
        cout<<"co "<<n<<" chuoi dung dau theo day alphabet  la: ";
        for(int i=0;i<n;i++){
            cout<<vtridau[i]<<" ";
        }
        
    }else{
        cout<<"chuoi thu "<<vtridau[n-1]<<" la chuoi dung dau theo day alphabet ";
    }
    */

    // while(n>0){cout<<vtridau[n]<<" ";n--;}sada  xzv  as
    /*
    char a[100];
    cin>>a;
    int n=strlen(a);
    for(int i=0;i<n/2;i++){
        int tem =a[i];
        a[i]=a[n-i-1];
        a[n-i-1]=a[i];
    }
    for(int j=0;j<n;j++){
        cout<<a[j];
    }
*/

    return 0;
}
