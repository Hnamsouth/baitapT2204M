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
    cout<<"nhap so nguyen x:";
    cin>>x;
    int max=0,vtri=0,max2=0;
    int vitri=0;
    for(int i=0;i<n;i++){
        cin>>ar[i];
        }
    int h=(abs(ar[0]-x));
    int k;
    int vtri1=0,vitri2=0;
    
    for(int i=0;i<n;i++){   
        if(abs(ar[i]-x)<h){
            h=abs(ar[i]-x);
            vtri1=i;
        }else if(abs(ar[i]-x)==h){
            k=abs(ar[i]-x);
            vitri2=i;
        }
    }
    /*    // hoac
        for(int i=0;i<n;i++){
            if(abs(ar[i]-x)==h){
                cout<<" so can tim la: "<<ar[i]<<endl;
            }
        }
    */
    if(ar[vtri1]==x){
        cout << "ko co gia tri nao gan nhat trong mang"<<endl;
    }else if(h==k){
        cout<< " gia tri gan x nhat trong mang la : "<< ar[vtri1]<<" va "<<ar[vitri2]<<endl;
    }else{
        cout<< " gia tri gan x nhat trong mang la : "<< ar[vtri1];
    }
    return 0;
}