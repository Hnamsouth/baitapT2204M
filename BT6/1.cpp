#include<iostream>
#include <algorithm>
using namespace std;
//1. Tỉnh tổng các chữ số của 1 số nguyên n
int triso (int a){
    if(a==0){
        return 0;
    }
    return a%10 + triso(a/10);
}
//2. Tìm ước chung lớn nhất của 2 số
int uckhuDQ(int a, int b) { // khu de quy
    int tmp;
    while(b != 0) {
        tmp = a % b;
        a = b;
        b = tmp;
    }
    return a;
}
int uc(int a, int b) {
    if (b == 0) return a;
    return uc(b, a % b);// a=18 b=34 (18, 34%18)or a=34 b=18 van la(18, 34%18)
}
int gcd1(int a, int b){
    // Lặp tới khi 1 trong 2 số bằng 0
    while (a*b != 0){ 
        if (a > b){
            a %= b; 
            cout<<a<<endl;
        }else{
            b %= a;
            cout<<b<<endl;
        }
    // a = a % b . vda= 28 b=18: a=a%b=10->b=18%10=8-> a=10%8=2 -> b=8%2=0

    }
    return a + b; // return a + b, bởi vì lúc này hoặc a hoặc b đã bằng 0.
}
int UCLN(int a , int b){
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
    return max;
}
//3. Tìm bội chung nhỏ nhất của 2 số.

int BCNN(int a,int b){
    int max;
    if(a%b==0){
        return a;
    }else if(b%a==0){
        return b;
    }else{
        for(int i=1;;i++){
            if(i%a==0&&i%b==0){
                max=i;
                break;
            }
        }
        return max;
    }
}

int bcnn(int a, int b){
    int lcm;
    int maxV = a*b;
    int step = std::max(a, b);// tim gia tri lon nhat cua a va b (su dung ham max )
    cout<<step <<endl;
    for(int i = step; i <= maxV; i+= step){
        if(i % a == 0 && i % b == 0){
            lcm = i;
            break;
        }
    }
    return lcm;
}
int boiCnn(int a, int b){
    // N?u a = 0 => ucln(a,b) = b
    // N?u b = 0 => ucln(a,b) = a
    if (a == 0 || b == 0){
        return a + b;
    }
    while (a != b){
        if (a > b){
            a -= b; // a = a - b
        }else{
            b -= a;
        }
    }
    return a; // return a or b, b?i vì lúc này a và b b?ng nhau
}
int main(){
//B1:
    /*int n;
    cout<<" nhap so n ";
    cin>>n;
    cout<<"tong cac chu so cua n = "<<triso(n)<<endl;*/
//B2:
    /*int x,y;
    nhaplai:
    cout<<" nhap so x va y: ";
    cin>>x>>y;
    if(x==1997){
        return 0;
    }else{
        if(x==0||y==0){
            cout<<"x va y ko co uoc chung"<<endl;
        }else{
            cout<<"uoc chung lon nhat la "<<UCLN(x,y)<<endl;
        }
        goto nhaplai;

    }
   */
    


//B3:
    /*int x,y;
    nhaplai:
    cout<<" nhap so x va y: ";
    cin>>x>>y;
    if(x==1997){
        return 0;
    }else{
        if(x==0||y==0){
            cout<<"x va y ko co boi chung"<<endl;
        }else{
            cout<<"boi chung lon nhat la "<<BCNN(x,y)<<endl;
        }
        goto nhaplai;
    }*/
    int a=21,b=7;
    // cout<<bcnn(a,b);
    // cout<<uc(a,b);
    cout<<boiCnn(a,b);
    // cout<<"uoc chung lon nhat cua a va b la: "<<std::__gcd(a,b); 
    // co the su dung ham std::__gcd(a,b) nhung con tuy thuoc vao trinh bien dich

    return 0;
}