/*
1. Viết hàm tính S = x^y
2, Hãy viết hàm tìm số nguyên tố nhỏ nhất lớn hơn mọi giá trị có trong mảng
3. Hãy viết hàm tìm ước chung lớn nhất của tất cả các phần tử trong mảng
4. Hãy viết hàm tìm bội chung nhỏ nhất của tất cả các phần tử trong mảng
*/
#include<iostream>
#include<math.h>
#include<algorithm>
using namespace std;

//1. Viết hàm tính S = x^y
int tinhsomu(int a,int b){
    if(b==0){
        return 1;
    }
    return a*tinhsomu(a,b-1);
}
// 2, Hãy viết hàm tìm số nguyên tố nhỏ nhất lớn hơn mọi giá trị có trong mảng
int sntMin(int n,int ar[]){
    int sntk;
    int max=*std::max_element(ar,ar+n);
    for(int i=max; ;i++){ // cong max den vo cung  11 
        int bd=0;
        bool k=true;
        for(int j=2;j<=sqrt(i);j++){ // tim thu 3 cua so max
            if(i%j==0){
                k=false;
            }
        }
        if(k==true){
            sntk=i;
            break;
        }
    }
    // cout<<"snt lon hon cac gia tri trong mang la"<<sntk;
    return sntk;
}
//3. Hãy viết hàm tìm ước chung lớn nhất của tất cả các phần tử trong mảng
int min(int n,int ar[]){
    int Min=ar[0];
    for(int i=1;i<n;i++){
        if(Min==0||ar[i]!=0&&ar[i]<Min){
            Min=ar[i];
        }
    }
    return Min;
    // neu hàm min =0 thì mảng ko có ước chung.
}
int ttd(int min){
    return abs(min);
}
int kiemtrauoc(int n,int ar[],int min){
    int ucln;
    bool k=true;
    for(int j=ttd(min);j>0;j++){
        for(int i=0;i<n;i++){
            if(ar[i]==0){
                continue;
            }else{ // neu cac ptu trong mang chia het cho tri tuyet doi cua min ve 1 thi uoc 
                if(ar[i]%j!=0){
                    k=false;
                }
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
    int minar=*std::min_element(ar,ar+n);
    if(minar==0){
        gtrmin=min(n,ar);
        return kiemtrauoc(n,ar,gtrmin);
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
int timboi(int n,int ar[],int max){
    int bcln;
    int i=max;
    for(i; ;i++){
        bool k=true;
        for(int j=0;j<n;j++){
            if(ar[j]==0){
                return 0;
            }else{
                if(i%ar[j]!=0){
                    k=false;
                    break;
                }
            }
        }
        if(k){
            bcln=i; 
            break;
        }
    }
    return bcln;
}

int ttd(int n,int ar[]){
    int max=abs(ar[0]);
    for(int i=1;i<n;i++){
        if(abs(ar[i])>max){
            max=abs(ar[i]);
        }
    }
    return max;
}

int bcnn(int n, int ar[]){
    if(ttd(n,ar)==0){
        return 0;
    }else{
        return timboi(n,ar,ttd(n,ar));
    }
}
//di tu so lon nhat den vo cung khi nào gap so ma chia het tat ca cac so trong mang thi break
int main(){
    // int a=5,b=3;
    // cout<<tinhsomu(a,b);
    int n=5;
    int ar[5]={2,2,5,-7,3};
    // int ar[10]={0,0,0,0,0,0,0,0,0,0};
    // sntMin(n,ar);
    // cout<<sntMin(n,ar); 
    // int minarray=min(ar,n);
    // int k=abs(n);
/*
    if(uclnArray(n,ar)==0){
        cout<<"mang ko co uoc chung";
    }else{
        cout<<"uoc chung lon nhat cua mang la "<<uclnArray(n,ar);
    }
*/
   cout<<bcnn(n,ar);
    // if(bcnn(n,ar)==0){
    //     cout<<"mang ko co boi chung";
    // }else{
    //     cout<<"uoc chung nho nhat cua mang la "<<bcnn(n,ar);
    // }
    
    return 0;
}