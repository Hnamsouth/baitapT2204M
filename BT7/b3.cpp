#include<iostream>
#include<math.h>
#include<algorithm>
using namespace std;
//3. Hãy viết hàm tìm ước chung lớn nhất của tất cả các phần tử trong mảng
// int min(int n,int ar[]){
//     int Min=abs(ar[0]);
//     for(int i=1;i<n;i++){
//         if(Min==0||ar[i]!=0&&abs(ar[i])<Min){
//             Min=ar[i];
//         }
//     }
//     return Min;
//     // neu hàm min =0 thì mảng ko có ước chung.
// }
int ttd(int n,int ar[]){
    int ttdmin=abs(ar[0]);  // 0 6 -5 2--- ttdmin=0
    for(int i=1;i<n;i++){
        if(ttdmin==0||ar[i]!=0&&abs(ar[i])<ttdmin){ // neu ar[0]==0 hoac ar[1-n] != 
            ttdmin=abs(ar[i]);
        }
    }
    // cout<<"tri tuyet doi nho nhat la: "<<ttdmin<<endl;
    return ttdmin;
}
int kiemtrauoc(int n,int ar[],int min){
    int ucln;
    for(int j=min;j>0;j--){
        bool k=true;
        for(int i=0;i<n;i++){
                if(ar[i]%j!=0){
                    k=false;
                }
        }
        if(k){
            ucln=j;
            break;
        }
    }
    return ucln;
    
}
int uclnArray(int n,int ar[]){
    int ucMax,gtrmin;
    int minar=ttd(n,ar);
    // cout<<minar<<endl;
    // cout<<ttd(minar);
    if(minar==1){
        return minar;
    }else{
        return kiemtrauoc(n,ar,minar);
    }
    // tim uoc lon nhat cua so nho nhat. tim uoc cua cac so khac neu 
    // vd uoc cua 6 = 6 3 2 1 , uoc 12= 12 6 4 3 2 1 uoc 11= 11 1 uoc chung la 1
    // so sánh các uoc chung cua tung ptu trong mang
    // tim uoc nho nhat và tim trị tuyeeht đối của min và trừ min đến 1
    //for(int i=min;i>=0;i--)
    // và tìm số i có thể chia hết cho tất cả các số trong mảng
    //  3  5  6  8  6  7 : 3: 3 2 1 0 : tìm trong  3 2 1 0 có số nào chia hết cho tất cả các số trong mảng thì số là ucl của mảng
    // neu min = 0 thi ucln của mảng là ước chung của các số khác 0
    // tìm min của mảng mà khác 0; 

}
//4. Hãy viết hàm tìm bội chung nhỏ nhất của tất cả các phần tử trong mảng

//di tu so lon nhat den vo cung khi nào gap so ma chia het tat ca cac so trong mang thi break
int main(){
    // int a=5,b=3;
    // cout<<tinhsomu(a,b);
    int n=10;
    // int ar[10]={0,-24,-6,12,8,4,-10,200,8,18};
    // int ar[10]={0,0,0,0,0,0,0,0,0,0};
    int ar[10]={-6,-7,-51,-5,0,-6,0};
    // sntMin(n,ar);
    // cout<<sntMin(n,ar); 
    // int minarray=min(ar,n);
    // int k=abs(n);
    // cout<<uclnArray(n,ar);
    
    
    if(uclnArray(n,ar)==0){
        cout<<"mang ko co uoc chung";
    }else{
        cout<<"uoc chung lon nhat cua mang la "<<uclnArray(n,ar);
    }
    

    return 0;
}