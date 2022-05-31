#include <iostream>
using namespace std;
void SoHoanHao (int n){
    int TongUoc=0;
    for(int i=1; i<n/2; i++){
        if(n%i==0){
            TongUoc+=i;
        }
    }
    if(TongUoc==n){
        cout<<"n la so hoan hao";
    }else{
        cout<<"n khong phai so hoan hao";
    }
}

void SoDaoNguoc (int n){
    int sdn=0;
    for(;n!=0;n=n/10){
        // int sd = n%10;
        sdn=sdn*10 +(n%10);
    }
    printf("%d",sdn);
}

void SoNguyenTo(int n){
    int uoc=0;
    for(int i=2;i<n/2;i++){
        if(n%i==0){
            uoc++;
        }
    }
    if(uoc==0)
        printf("n la so nguyen to");
    else
        printf("n khong phai so nguyen to");
}

void InsertionSort(int a[], int n){	
    // 2 5 6 1 8 3
	int pos, x;
	for(int i = 1; i < n; i++){ //đoạn a[0] đã sắp
		x = a[i]; 
		pos = i;
		while(pos > 0 && x < a[pos-1]){ // nếu pos 
			a[pos] = a[pos-1];	// dời chỗ
			pos--;
		}
		a[pos] = x;
	}
}