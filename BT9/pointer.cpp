#include<iostream>
#include<vector>

using namespace std;

int main(){
/*
    int arr[5]={5,9,3,5,6};
    // int *p=&arr;
    *(arr+1)=10; // trỏ đến vị trị trong mảng -> 5 10 3 5 6
    
    for(int i=0;i<5;i++){
        // cout<<*p[i];
        cout<<*(arr+i)<<" ";
    }
*/
/*
    int *array= new int[5];
    
    for(int i=0;i<5;i++){
        cin>>array[i];
    }
    for(int i=1;i<5;i++){
        // cout<<*(array+i)<<" ";
    }
*/
    int *ctro;
    int max=ctro[0];
    ctro=(int*)malloc(5*sizeof(int)); // cấp phát bộ nhớ động
    for(int i=0;i<5;i++){
        cin>>ctro[i];
         if(max<ctro[i]){
            max=ctro[i];
        }
    }
    
    cout<<"so lon nhat cuar mang 1 la: "<<max;
    
    ctro=(int*)realloc(ctro,15*sizeof(int)); // thay doi kick thước của mang
    for(int i=5;i<15;i++){
        cin>>ctro[i];
        
    }
    for(int i=5;i<15;i++){
        if(max<ctro[i]){
            max=ctro[i];
        }
    }
    cout<<"so lon nhat cuar mang 2 la: "<<max;
    free(ctro); //giải phóng bộ nhớ đã cấp khi ko dùng đến
    
  


    

    return 0;
}