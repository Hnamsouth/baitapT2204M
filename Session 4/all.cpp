#include<iostream>
using namespace std;
//B1:Tính trung bình cộng các số lẻ trong mảng n số
void TBCsl (int *n,int p){
    int tong=0,dem=0;
    for(int i=0;i<p;i++){
        
        if(n[i]%2==1){
            tong+=n[i];
            dem++;
        }
    }
    if(dem==0){
        cout<< " khong co so le o  trong mang";
    }else{
        float tbc= tong /(float)dem;
    cout<<"tbc cac so le o trong mang la: "<< tbc;
    }
}
// B2: Tính trung bình cộng các số lẻ ở vị trí chẵn trong mảng n số
void SLoC (int *n,int p){
    int tong=0,dem=0;
    for(int i=0;i<p;i++){
        if(i%2==0 && n[i]%2==1){
            tong+=n[i];
            dem++;
        }
    }
    if(dem==0){
        cout<< " khong co so le o vi tri chan trong mang";
    }else{
        float tbc= tong /(float)dem;
    cout<<"tbc cac so le o vi tri chan trong mang la: "<< tbc;
    }
}
// B3:Nhập vào 1 mảng n số nguyên, sau đó nhập 1 số x. Tìm xem có x trong mảng không.
void Xarr(int *n,int p){
    int x,k=0;
    cout<<"nhap so x"<<endl;
    cin>>x;
    for(int i=0;i<p;i++){
        if(n[i]==x){
            k++;
        }
    }
    if(k==0){
        cout<<"x khong trong mang"<<endl;
    }else{
        cout<<"x  co trong mang"<<endl;
    }
}
// B4:Nhập mảng n số nguyên, tìm số lẻ cuối cùng của mảng
void SLcc(int *n,int p){
    int bd=0,slcc;;
    for(int j=p-1;j>=0;j--){
        if(n[j]&1==1){
            slcc=n[j];
            break;
        }else{
            bd++;
        }
    }
    cout<< bd<<endl;
    if(bd==p){
        cout<<"trong mang khong co so le"<<endl;
    }else {
        cout<<"so le cuoi cung cua mang la" <<endl<< slcc;
    }
}
//B5:Nhập mảng n số nguyên, tìm số dương nhỏ nhất
void SDnn(int *n,int p){
    int i=0,snn,bd=0;
    while(i<p){
        if(n[i]<snn && n[i] >=0){
            snn=n[i];
            bd++;
        }
        i++;
    }
    if(bd==0){
        cout<<"mang khong co so duong"<<endl;
    }else{
        cout<< " so nho nhat la : "<<snn<<endl;
    }
}
//B6: Nhập mảng n số nguyên, tìm số lượng các số dương liên tiếp nhiều nhất
void sdLT(int *n,int p){
    int *arbd ; // tạo mảng chứa sl các số dương liên tiếp
    arbd=(int*)malloc((p/2)*sizeof(int));
    int i=0,j=0,vongi=0,bd=0,k=0,bd2=0;
    for(i;i<p;i++){
        if(n[i+1]==n[i]+1&& n[i]>0){ // nếu số sau bằng số trước + 1
            bd++;           // 
            vongi++;
        }else{
            i=vongi;
            if(bd>0){
                arbd[j]=bd+1;
                j++;
                k++;
                bd2++;
            }
            vongi++;
            bd=0;
        }
    }
    int max=arbd[0];
    for(int i=1;i<k;i++){
        if(arbd[i]>max){
            max=arbd[i];
        }
    }
    if(bd2==0){
        cout<<"mang khong co so lien tiep"<<endl;
    }else{
        cout<<" sl cac so duong lien tiep lon nhat la: "<<max<<endl;
    }
}
//B6++:
void SDlt(int *n,int p){
    int slslt[2]={1,1};
    int i=0,j=0;
    for(i;i<p;i++){
        if(n[i+1]==n[i]+1 && n[i] >0){ // nếu số sau bằng số trước + 1
            slslt[j]+=1;          // 
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
    if(slslt[0] > slslt[1]){
        cout<<"chuoi co so duong lien tiep nhieu nhat la: "<< slslt[0];
    }else{
        cout<<"chuoi co so duong lien tiep nhieu nhat la: "<< slslt[1];
    }
}
//B7: Nhập mảng n số nguyên, tìm xem chuỗi số dương mà có tổng lớn nhất là bao nhiêu
void CDt(int *n,int p){
    int tong[2]={0,0};
    int j=0;
    for(int i=0;i<p;i++){
        if(n[i]>0){
            tong[j]+=n[i];         
        }else{
            if(tong[0]>tong[1]){
                tong[1]=0;
                j=1;
            }else if(tong[0]<tong[1]){
                tong[0]=0;
                j=0;
            }
        }
    }
    if(tong[0]>tong[1]){
        cout<<" chuoi duong co tong lon nhat la: " <<tong[0];
    }else if(tong[0]<tong[1]){
        cout<<" chuoi duong co tong lon nhat la: " << tong[1];
    }
}


int main(){
    int p;
    cout<< " nhap so luong phan tu trong mang: "<<endl;
    cin >>p;
    int *n;
    n=(int*)malloc(p*sizeof(int));
    for(int i=0;i<p;i++){
        cin>>n[i];
    }
//B1:
    // TBCsl(n,p);
//B2:
    // SLoC(n,p);
//B3:
    // Xarr(n,p);
//B4:
    // SLcc(n,p);
//B5:
    // SDnn(n,p);
//B6:
    // sdLT(n,p);
//B6++:
    // SDlt(n,p);
//B7:
    // CDt(n,p);
    return 0;
}