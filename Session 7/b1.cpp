#include<iostream>
using namespace std;
//1. Viết hàm tính S = x^y
int tinhsomu(int a,int b){
    if(b==0){
        return 1;
    }
    return a*tinhsomu(a,b-1);
}
int main(){

    int a,b;
    cout<<"nhap 2 so nguyen a va b: "<<endl;
    cin>>a>>b;
    cout<<a<<"^"<<b<<" = "<<tinhsomu(a,b);
    return 0;
}