//B6: Nhập mảng n số nguyên, tìm số lượng các số dương liên tiếp nhiều nhất
#include<iostream>
using namespace std;

int main(){
    int p;
    cout<< " nhap so luong phan tu trong mang: "<<endl;
    cin >>p;
    int *n;
    n=(int*)malloc(p*sizeof(int));
    int slslt[2]={1,1};
    int i=0,j=0;
    for(int i=0;i<p;i++){
        cin>>n[i];
        if(i>0){
            if(n[i]==n[i-1]+1 && n[i] >0){
                slslt[j]+=1;          
            }else{
                if(slslt[0] > slslt[1]){
                    slslt[1]=1;
                    j=1;
                }else if(slslt[0]<slslt[1]){
                    slslt[0]=1;
                    j=0;
                }
            }
        }
    }  
    if(slslt[0] > slslt[1]){
        cout<<"chuoi co so duong lien tiep nhieu nhat la: "<< slslt[0];
    }else if(slslt[0] < slslt[1]){
        cout<<"chuoi co so duong lien tiep nhieu nhat la: "<< slslt[1];
    }else{
        cout<<"chuoi ko co so duong lien tiep";
    }

    return 0;
}