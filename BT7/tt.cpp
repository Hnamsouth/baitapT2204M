#include<iostream>
#include<math.h>
#include<algorithm>
#include<stdio.h>
using namespace std;
int main(){
    int n=5;
    int ar[5]={-7,0,2,3,3};

    int bcln;
    
    int i=*std::max_element(ar,ar+n);
    for(i; ;i++){
        int k=0;
        for(int j=n;j>=0;j--){
            if(ar[j]==0){
                continue;
            }else{
                if(i%ar[j]!=0){
                    k=1;
                    break;
                }
            }
        }
        if(k==0){
            bcln=i; 
            break;
        }
    }
    // cout<<bcln;
    cout<<"boi chung nho nhat cua mang la: "<<bcln;
    return 0;
}