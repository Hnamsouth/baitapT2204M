#include<iostream>
using namespace std;

int BCNN(int a,int b){
    int max;
    if(a%b==0){
        return a;
    }else if(b%a==0){
        return b;
    }else{
        if(a>b){
            for(int i=a;;i++){
                if(i%a==0&&i%b==0){
                    max=i;
                    break;
                }
            }
            return max;
        }else{
            for(int i=b;;i++){
                if(i%a==0&&i%b==0){
                    max=i;
                    break;
                }
            }
            return max;
        }
    }
}

int main(){
    
    int a,b;
    cout<<"nhap 2 so nguyen a va b: ";
    cin>>a>>b;
    cout<<"boi chung nho nhat cua a va b la "<<BCNN(a,b);


    return 0;
}