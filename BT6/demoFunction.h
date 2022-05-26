#include<math.h>
int chuviTG(int a,int b,int c){
    return a+b+c;
}
double dientichTG(int a,int b,int c){
    float k=chuviTG(a,b,c)/(float)2;
    double dtTG=sqrt(k*(k-a)*(k-b)*(k-c));
    return dtTG;
}
bool ktr (int a,int b,int c){
    if(a+b>c&&b+c>a&&a+c>b){
        return true;
    }else{
        return false;
    }
}
bool SNT (int a){
    if(a<2){
        return false;
    }
    if(a==2||a==3){
        return true;
    }
    for(int i=2;i<a/2;i++){ // uoc 1 va chinh nos 1 
        if(a%i==0){ // kq = 1 uoc
            return false;
        }
    }
    return true;
}
int DeQuy (int a){ // 6 +5 +4 +3+ 2+1 +0 : 
    if(a==0){ // 
        return 0;
    }
    return a + DeQuy(a-1);// 6 + dequy(5) 
}
int triso(int a){
    if(a==0){
        return 0;
    }
    return a%10 + triso(a/10);
}