#include<iostream>
using namespace std;
int main(){
    int ar[1000];
    int n;
    cout<<"nhap so luong phan tu trong mang"<<endl;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>ar[i];
        
        if(i>=1){
            int j=i;
            int bk=ar[i]; 
            while((j>0)&& (bk<ar[j-1])){  
                ar[j]=ar[j-1];        
                j--;
            }
            ar[j]=bk;                      
        }
    }
    int low =0,high = n;
    int socantim,kc=0,vtri,bdem=0;
    cout<<"nhap so can tim: "<<endl;
    cin>>socantim;
    do
    {
        int mid = (low + high )/2;
        if(socantim<=ar[mid]){
            kc=ar[mid]-socantim;
            if(bdem==0||kc<bdem){
                bdem=kc;
                vtri=mid;
            }
            high = mid -1;
        }else if (socantim >= ar[mid]){
            kc=socantim-ar[mid];
            if(bdem==0||kc<bdem){
                bdem=kc;
                vtri=mid;
            }
            low = mid +1;
        }
    }while(low!=high+1);
    if(ar[vtri]==socantim){
        cout<<"khong co gia tri gan nhat";
    }else{
        cout<<"gia tri gan x nhat la:"<<ar[vtri];
    }

    return 0;
}