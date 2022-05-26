#include<iostream>
#include<math.h>
using namespace std;
#include"demoFunction.h" // goi 1 file chua cac ham 

int main(){

    // int n=6;
    // cout<< " de quy cua 6 = "<<DeQuy(n);
    int a,b,c;
    /*cout<<"nhap vao 3 canh cua tam giac"<<endl;
    nhaplai:
    cin>>a>>b>>c;
    if(ktr(a,b,c)){
        cout<<"chu vi tam giac = "<<chuviTG(a,b,c)<<endl;
        cout<<"dien tich tam giac= "<<dientichTG(a,b,c);
    }else{
        cout<<"nhap lai.!"<<endl;
        goto nhaplai;
    }*/
 
    // nhaplai:
    // cin>>a;
    // if(a==1997){
    //     return 0;
    // }else{
    //     if(SNT(a)){
    //         cout<< " a la so nguyen to.!"<<endl;
    //     }else{
    //         cout<< " a ko phai so nguyen to.!"<<endl;
    //     }
    //     goto nhaplai;
    // }
    

 
//    do{
//        cout<<"nhap so n";
//        cin>>a;
//    }while(!SNT(a));
//     if(SNT(a)){
//         cout<<" a la so nguyen to";
//     }
    // cout<< DeQuy(-6);
    cout<< triso(567);
    // tim uoc chung lon nhat
   /* 
   //B2:
    cout<<"nhap a va b: ";
    cin>>a>>b;
    int max;
    if(a>b){
        for(int i=1;i<=b;i++){
            if(a%i==0&&b%i==0){
                max=i;
            }
        }
    }else{
        for(int i=1;i<=a;i++){
            if(a%i==0&&b%i==0){
                max=i;
            }
        }
    }
    cout<<"boi chung lon nhat la "<<max;
    */
   //B3:
    /*cout<<"nhap a va b: ";
    cin>>a>>b;
    int max;
    if(a%b==0){
        cout<<"boi chung nho nhat cua a va b la: "<<a<<endl;
    }else if(b%a==0){
        cout<<"boi chung nho nhat cua a va b la: "<<b<<endl;
    }else{
        for(int i=1;i<1000;i++){
            if(i%a==0&&i%b==0){
                max=i;
                break;
            }
        }
        cout<<"boi chung nho nhat cua a va b la: "<<max<<endl;
    }*/
    
    return 0;
}
