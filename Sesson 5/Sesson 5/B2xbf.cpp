//2. Nhập vào 1 mảng n số nguyên và 1 số nguyên x. Hãy tìm giá trị trong mảng gần giá trị x nhất
    // mang ko sx: 5 1 3 8 4 3 1 4 5 - 5 -1 -10 15   x= 6
    
    // neeu tim dc kc gan nhat = 1 thi break;. vs dk ( x duoc nhap tu truoc)
#include<iostream>
using namespace std;
    int main(){    
    
    int ar[1000];
    int n,x;
    cout<<"nhap so luong phan tu trong mang: ";
    cin>>n;
    cout<<"nhap so nguyen x: ";
    cin>>x;
    int min,vtri=0;
    for(int i=0;i<n;i++){
        cin>>ar[i];
        int kc;
        if(ar[i]<0){            // neu ar[i] < 0
            if(ar[i]>x){        // neu ar[i] lon hon x
                kc=ar[i]-x;     // khoang cach tu x den ar[i]=ar[i]-x
                if(kc<min){     //  neu kc nho hon gtri min thi gan kc cho min
                    min=kc;
                    vtri=i;     // luu vi tri cua gtri do
                }
            }else if(ar[i]<x){  // neu ar[i] nho hon x
                kc=x-(ar[i]);
                if(kc<min){
                    min=kc;
                    vtri=i;
                }
            }
            
        }else{
            if(ar[i]<x){
                kc=x-ar[i];
                if(kc<min){
                    min=kc;
                    vtri=i;
                }
            }else if(ar[i]>x){
                kc=ar[i]-x;
                if(kc<min){
                    min=kc;
                    vtri=i;
                }
            }
        }

    }
    // cout << "khoang cach gan nhat trong mang la "<<min<<endl;
    if(ar[vtri]==x){
        cout << "ko co gia tri nao gan nhat trong mang"<<endl;
    }else{
        cout<< " gia tri gan x nhat trong mang la : "<< ar[vtri]<<endl;
    }
    
   return 0;
   
}