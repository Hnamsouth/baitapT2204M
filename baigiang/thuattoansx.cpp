#include<iostream>
using namespace std;
//InterchangeSort:
void Swap(int &a, int &b){
    int temp = a;
    a = b;
    b = temp;
}
void InterchangeSort(int a[], int n){	
    for (int i = 0; i < n - 1; i++)
        for (int j = i + 1; j < n; j++)
	        if(a[i] > a[j])  //nếu có nghịch thế thì đổi chỗ
		        Swap(a[i], a[j]);
}
//InsertionSort:
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
//BubbleSort:
void BubbleSort(int a[], int n){	
	for (int i = 0; i < n - 1; i++)
		for (int j = n - 1; j > i; j--)
		   if(a[j] < a[j-1])
		       Swap(a[j], a[j-1]);
}
//SelectionSort
void SelectionSort(int a[], int n)
{
	int min; // chỉ số phần tử nhỏ nhất trong dãy hiện hành
	for (int  i = 0; i < n - 1; i++){
		min = i; 
		for(int j = i + 1; j < n; j++)
	   	   if (a[j] < a[min])
		       min = j; // ghi nhận vị trí phần tử nhỏ nhất
		if (min != i)
	   	   Swap(a[min], a[i]);
	}
}
int main(){
    /*int arr[1000];
    int n;
    cout<<"nhap so luong phan tu trong mang";
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }*/
// Interchange Sort: 
    /*for(int j=0;j<n;j++){
        for(int i=0;i<n;i++){
            if(arr[j]>arr[i]){ // nếu a[0] > a[1,2,3,4,5... n] -> a[0] sẽ chuyển đến vị trí đầu
                int cd=arr[j];
                arr[j]=arr[i];
                arr[i]=cd;
            }
        }
    }*/
// Bubble Sort:
    /*
    for(int j=0;j<n-1;j++){ // nếu tìm đc n-1 số đúng chỗ thì số cuối cùng đúng vtri
        for(int i=0;i<n-j-1;i++){ // nếu đã ss dược j số thì trừ đi j để giảm qua trình thực hiện 
            if (arr[i]>arr[i+1]){
                int cd=arr[i];
                arr[i]=arr[i+1];
                arr[i+1]=cd;
            }
        }
    }
    for(int i=0;i<n;i++){
        cout<< arr[i]<<" ";
    }
    */
// Insertion Sort:
    /*int vtri,x,temp,i;
    for( i=1;i<n;i++){
        x=i-1;
        temp=arr[i];
        while(x>0 && temp<arr[x]){
            arr[x+1]=arr[x];
            i--;
        }
        arr[x+1]=temp;
    }*/
    // c1:
/*
    int pos, x;  // pos lưu vị trí biến i
	for(int i = 1; i < n; i++){ //đoạn a[0] đã sắp
		x = arr[i]; // x = giá trị tại vtri i
		pos = i;
		while(pos > 0 && x < arr[pos-1]){ 
            // nếu pos lớn hơn 0 và arr[i] nhỏ hơn số phí trước arr[i-1]
			arr[pos] = arr[pos-1];	// dời chỗ. arr[i] đến arr[i-1]
			pos--;                  // trừ i-1 để so sánh số tiếp theo
		}
		arr[pos] = x; 
	}
    for(int i=0;i<n;i++){
        cout<< arr[i]<<" ";
    }
*/
// c2:
    
    int data[5] = { 23, 90, 9, 25, 16 };
    int tmp,i,j;
    //perform insertion sorting
    for (j=1; j<5; j++) {
        i =j-1;
        tmp = data[j];
        while ( (i>=0) && (tmp < data[i]) ) {
            data[i+1] = data[i];
            i--;
        }
        data[i+1] = tmp;
    }
     for(int i=0;i<5;i++){
        cout<< data[i]<<" ";
    }

/* 
//  đối với mảng đã được sắp xếp: tìm xem x có trong mảng hay ko
int arr[] = {0,11,13,14,15,17,18};
// tìm ptu vị trí ở giữa và ss với x , nếu x nhỏ hơn thì tìm vế bên trái và ngược lại
vd
int gtriCtim;
do{
    int low =0; // vi trí đâu
    int high = 6;// vi trí cuối
    cout<<" nhap gia tri can tim:"<<endl;
    cin>>gtriCtim;
    int bdem =0;
    while(low<=high)
    {
        // tìm vtri giữa của mảng
        int mid = low + (high - low)/2; 
        //  nếu gtct == ptu tai vi tri o giua thì sct có trong mảng
        if(gtriCtim == arr[mid])        
        {
            bdem = 1;
            printf("tim thay tai vi tri thu  %d\n", mid);
            break;
        } else if(gtriCtim<arr[mid]){ 
            // nếu gtct nhỏ hơn ptu ở giữa mảng-> tìm gia trị đó ở mảng bên trái vs ptu giữa
            high = mid -1;  // vtri ptu lớn nhất = số ở giữa -1 thì đoạn tìm la 0 -> mid -1
        }else if (gtriCtim > arr[mid]){ // ngược lại
            low = mid +1;
        }
    }
    if(bdem ==0){
        printf("so can tim ko co tong mang\n");
    }
}while(gtriCtim!=999);


*/

    return 0;
}