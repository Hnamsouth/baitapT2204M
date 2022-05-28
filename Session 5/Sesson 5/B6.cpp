//6. Nhập 1 mảng n số nguyên, đảm bảo nhập đến đâu được sắp xếp theo thứ tự bé đến lớn luôn.

#include<iostream>
using namespace std;
int main(){
    int ar[1000];
    int n;
    cout<<"nhap so luong phan tu trong mang"<<endl;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>ar[i];
        // neu so thap hon thi nhap lai
        if(i>=1){
            // vd: 2 1
            int j=i; 
            int bk=ar[i]; // bk = 1
            while((j>0)&& (bk<ar[j-1])){    // neu so sau nho hon so truoc
                ar[j]=ar[j-1];              // chuyen vtri so sau den vtri so truoc
                j--;
            }
            // gan ar[j] vua dc sap xep cho bk cho luot ss lan sau
            // ar[j] se la ptu ở i hien tai lon nhat : tức là bk = 2
            // nếu ko gán ar[j]=bk;   bk = 1
            ar[j]=bk;                      
        }
    }
    for(int i=0;i<n;i++){
        cout<<ar[i]<< " ";
    }
    return 0;
}