#include<iostream>
using namespace std;

int main(){
    int ar[1000];
    int n,x;
    cout<<"nhap so luong phan tu trong mang"<<endl;
    cin>>n;
    int max=0,vtri=0;
    for(int i=0;i<n;i++){
        cin>>ar[i];
    }
    cout<<"nhap so nguyen x:";
    cin>>x;
    for(int i=0;i<n;i++){
        int kc=0;
        if(ar[i]<0){
            if(ar[i]>x){
                kc=ar[i]-x;
                if(kc>max){
                    max=kc;
                    vtri=i;
                }
            }else{
                kc=x-(ar[i]);
                if(kc>max){
                    max=kc;
                    vtri=i;
                }
            }
            
        }else{
            if(ar[i]<x){
                kc=x-ar[i];
                if(kc>max){
                    max=kc;
                    vtri=i;
                }
            }else{
                kc=ar[i]-x;
                if(kc>max){
                    max=kc;
                    vtri=i;
                }
            }
        }
    }
    cout << "khoang cach xa x nhat trong mang la "<<max<<endl;
    if(ar[vtri]==x){
        cout << "ko co gia tri nao xa nhat trong mang"<<endl;
    }else{
        cout<< " gia tri xa x nhat trong mang la : "<< ar[vtri]<<endl;
    }
    return 0;
}