//B6: Nhập mảng n số nguyên, tìm số lượng các số dương liên tiếp nhiều nhất
#include<iostream>
using namespace std;

int main(){
    int p;
    cout<< " nhap so luong phan tu trong mang: "<<endl;
    cin >>p;
    int *n;
    n=(int*)malloc(p*sizeof(int));
    for(int i=0;i<p;i++){
        cin>>n[i];
    }
    int *arbd ; // tao mang dem cac so lien tiep
    arbd=(int*)malloc((p/2)*sizeof(int));
    int i=0,j=0,bd=0,bd2=0;
    for(i;i<p;i++){
        // nếu số sau bằng số trước + 1
        if(n[i+1]==n[i]+1 && n[i]>0){ 
            bd++;           // dem so luong phan tu trong mang
        }else{
            if(bd>0){
                arbd[j]=bd+1;   // vd 3 so lien tiep chi ss 2 lan nen gia tri dem phai +1
                j++;            // chuyen den vi tri tiep theo cua mang bd
                bd2++;      
            }
            bd=0;               // restart lai bd 
        }
    }
    int max=arbd[0];            // tim gia tri max trong mang bd
    for(int i=1;i<j;i++){
        if(arbd[i]>max){
            max=arbd[i];
        }
    }
    if(bd2==0){
        cout<<"mang khong co so lien tiep"<<endl;
    }else{
        cout<<" sl cac so duong lien tiep lon nhat la: "<<max<<endl;
    }

    return 0;
}