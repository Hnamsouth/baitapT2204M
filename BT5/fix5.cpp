#include <iostream>
#include <math.h>
using namespace std;
//
int main()
{
    int ar[1000];
    int n,x;
    cout<<"nhap so luong phan tu trong mang";
    cin>>n;
    // cout<<"nhap so nguyen x:";
    // cin>>x;
    int i=0;
    /*while(i<n){
        cout<<"nhap so thu: "<<i;
        cin>>ar[i];
        bool flag = false;
        for(int j=0;j<i-1;j++){
            if(ar[i]==ar[j]){
                flag=true;
                break;
            }
        }
        if(flag == false){ // neu flag van sai thi i++
            i++;
        }
    }*/
    for(i;i<n;i++){
        cout<<"nhap so thu "<<i<<" :";
        cin>>ar[i];
        bool flag = false;
        for(int j=0;j<i;j++){
            if(ar[i]==ar[j]){
                flag=true;
                cout<< "nhap lai: "<<endl;
                break;
            }
        }
        if(flag == true){ // neu flag van sai thi i++
            i--;
        }
    }
    for(int i=0;i<n;i++){
        cout<<ar[i]<< " ";
    }
    return 0;
}