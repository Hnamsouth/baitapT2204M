#include<iostream>
// #include<stdio.h>

using namespace std;
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
int main(){
	int arr[100];
	int n;
	printf("Nhap n : \n");
	scanf("%d",&n);
	printf("Nhap mang :\n");
    /*for (int i =0;i<n;i++){
		scanf("%d",&arr[i]);
	}
    InsertionSort(arr,n);
    for (int i =0;i<n;i++){
        cout<< arr[i]<<" ";
    }*/
	for (int i =0;i<n;i++){
		scanf("%d",&arr[i]);
	}
	int i,j,temp;
	for(i=0;i<n-1;i++){    // sau 1 vong lap se tim dc 1 so -> so o vong lap cuoi cung hien nhien dung cho -> n -1
		for (j = 0; j <n-i-1;j++){ // sau 1 vong lap se bot dc 1 lan so sanh -> sau i vong se bot dc i lan 
		
			if (arr[j]<arr[j+1]){
				temp = arr[j];
				arr[j] = arr[j+1];
				arr[j+1] = temp;
				}
		}
	}
	printf("Mang dc sap xep :");
	for ( i =0 ; i<n;i++){
		printf("%d ",arr[i]);
	}
	return 0;
}