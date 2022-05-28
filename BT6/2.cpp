#include<stdio.h>
#include<algorithm>
void NhapMang(int n , int arr[]){
	printf ("Nhap mang: \n");
	for(int i =0;i<n;i++){
		scanf ("%d",&arr[i]);
	}
}
void SapXepMang (int n, int arr[]){
	for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(arr[i]<arr[j]){
                std::swap(arr[i],arr[j]);
            }
        }
    }
	
}
void InMang(int n,int arr[]){
    for(int i =0;i<n;i++){
    	printf ("%d ",arr[i]);
	}
	printf("\n");
}
int main(){
	int z[100];
	int n;
	printf (" Nhap n:");
	NhapMang(n,z);
	printf("\n");
	// SapXepMang(n,z);
	// InMang(n,z);
}