#include<iostream>
using namespace std;

int UCLN(int a , int b){
    int max;
    if(a>b){
        for(int i=1;i<=b;i++){
            if(a%i==0&&b%i==0){
                max=i;
            }
        }
    }else{
        for(int i=1;i<=a;i++){
            if(a%i==0&&b%i==0){
                max=i;
            }
        }
    }
    return max;
}

int main(){
    
    int a,b;
    cout<<"nhap 2 so nguyen a va b: ";
    nhay:
    cin>>a>>b;
    if(a==0||b==0){
        cout<<"khong co uoc chung "<<endl<<"nhap lai so a va b: ";
        goto nhay;

    }else{
        cout<<"uoc chung lon nhat cua a va b  = "<<UCLN(a,b);
    }
    


    return 0;
}