#include<iostream>
#include<algorithm>
#include<vector>
#include"demoFunction.h" // goi 1 file chua cac ham 
using namespace std;


int Maxarray(int n, int ar[]){ // truyen tham so dau vao cho mang
    return *std::max_element(ar,ar+n); 
    // khi thực hiện hàm max nó sẽ tạo ra 1 địa chỉ chứa giá trị max 
    // nên phai dùng con trỏ * nếu muốn sử dụng giá trị tại địa chỉ đó
}
void nhap (int n,int ar[]){
    cout<<"nhap cac ptu cua mang: "<<endl;
    for(int i=0;i<n;i++){
        cin>>ar[i];
    }
}
void display(int n,int ar[]){
    for(int i=0;i<n;i++){
        cout<< ar[i]<<" ";
    }
}
// bool hambu(int n)
void sort (int n,int ar[]){
    std::sort(ar,ar+n);
}
void sapxep(int n,int ar[]){
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(ar[i]>ar[j]){
                std::swap(ar[i],ar[j]);
            }
        }
    }
}
void sapxep(int n,int ar[],bool kq){
    if(kq){
        sort(n,ar);
        return;
    }
    sapxep(n,ar);
    
}

int main(){
    int ar[1000];
    int n,k=n;
    cout<<"nhap so long ptu trong mang";
    cin>>n;
    std::vector<int> vtor(ar,ar+n); 
    
    // khai báo 1 vector và gán giá trị cho từng vector 
    // để sử dụng vector cần khai báo thư viên #include<vector>
    
    // cout<<"so lon nhat trong mang la: "<<Maxarray(n,ar);
    nhap(n,ar); // 
    bool u;
    cout<<"nhap u: true = 0 , false = 1";
    cin>>u;
    sapxep(n,ar,u);
    display(n,ar);
    // sort(n,ar);
    // sapxep(n,ar);
    return 0;
}