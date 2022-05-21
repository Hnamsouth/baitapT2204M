#include<iostream>
#include <math.h>
using namespace std;

class Math{
public:
    static int abs ( int x){
        return x < 0 ? -x :x;
    }
    static int add(int x, int y){
        return x+y;
    }
    static int sub(int x, int y){
        return x-y;
    }
    static int min(int x, int y){
        return (x<y) ? x:y;
    }
    static int max(int x, int y){
        return (x>y) ? x:y;
    }
    static int pow2 (int x, int y){
        // return pow(x,y); // khong dung dc pow de tra ve kq cho ham
        int pow =1;
        for(int i=0;i<y;i++){
            pow*=x;
        }
        return pow;
    }
    int dequy (int x){
        if(x==0){
            return 0;
        }
        cout<<x<<" ";
        return dequy(x-1) + dequy(x-2);
    }
        
};
int main(){
    class Math s;
    int x,y;
    cout<<"nhap x va y: "<<endl;
    cin>>x>>y;
    int i = pow(x,y);
    // s.dequy(x);
    cout<< s.dequy(x)<<endl;
    /*
    cout<<i<<endl;
    cout<< s.abs(x) << endl;  
    // co the goi den ham 
    cout<<"x + y = " << Math::add(x,y) << endl;
    cout<< "max(x , y) = " <<Math::max(x,y) << endl;
    cout<<"min(x , y) = " << Math::min(x,y) << endl;
    cout<<"x - y = " << s.sub(x,y) << endl;
    cout<<"x ^ y = " << Math::pow2(x,y) << endl;
    */

    
    return 0;
}