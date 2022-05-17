#include<stdio.h>
#include<math.h>

    //1. Nhập 1 số nguyên n, in ra các số lẻ nhỏ hơn n
void solenhohonN (int n){
    while (n>0){
        if(n&1){
            printf("%d\n",n);   
        } 
        n--;
    }
}
    //2. Nhập 1 số nguyên n, tìm số lớn nhất nhỏ hơn n và chia hết cho cả 2 và 3

void chiahetcho2_3 (int n){
    //C1:
    while (n>0){
        if(n%2==0 && n%3==0){
            printf("%d\n",n);   
        } 
        n--;
    }
    //C2:
    /*for(int i=0;i<=n;i++){
        if(i%2==0 && i%3==0){
            printf("%d\n",i);
        }
    }
    //C3:
    do{
        if(n%2==0 && n%3==0){
            printf("%d\n",n);
        }
        n--;
    }while(n>0);*/
}
    // 6. Tính S =  1 + 2 + 3 +... + n (Với n được nhập từ bàn phím)

int Tong1denN (int n){
    int tong=0;
    for(int i=1;i<=n;i++){
        tong+=i;
    }
    return tong;
}
    // 7. Tính S = 1 + 1/2 + 1/3 + ... + 1/n (Với n được nhập từ bàn phím)
void S1chiaN(int n){
    float tong=0;
    for(int i=1;i<=n;i++){
        tong = tong + ((float)1/i);
    }
    printf("%.2f",tong);
}
    //3. Nhập 1 số nguyên n, kiểm tra xem n có phải số nguyên tố hay không
    // số nuyên tố là số chia hết cho 1 và chia hết cho chính nó
    /* B1: Tìm xem số đó có chia hết cho những số khác nhỏ hơn nó không
        B2: tạo biến số thực để so sánh , nếu B1 tìm ra số chia hết thì ko phải là so nguyen tố
        đếm số lượng ước của số đó . nếu =2 thì là số nguyên tố
    */
void SoNguyenTo(int n){
    int uoc=0;
    for(int i=1;i<=n;i++){
        if(n%i==0){
            uoc++;
        }
    }
    if(uoc==2)
        printf("n la so nguyen to");
    else
        printf("n khong phai so nguyen to");
    
}
    // 4. Nhập 1 số nguyên n, tìm số đảo ngược của n. vd. n=123 ~ n=321
            // vd : 1234/10 dư 4 còn 123 / 10 dư 3 còn 12 /10 dư 2 còn 1
            // lấy số dư nhân 10^3 , 10^2, 10^1 , 10^0
void SoDaoNguoc (int n){
    int f=0,p=0;
    for(int i=n;i>0;i=i/10){
        p++;
    }
    for(p;p>0;p--){
        f+=((n%10) * pow(10,(p-1)));
        n/=10;
    }
    printf("%d\n",f);
}

    // 5.  Nhập 1 số nguyên n, kiểm tra xem n có phải số hoàn hảo hay không

     /* Số hoàn hảo là một số nguyên dương mà tổng các ước nguyên dương chính thức của nó bằng chính nó.
     vd; 6 =1+2+3*/
     // B1:Tìm các ước của số đó B2: cộng lại nếu bằng chính số đó thì là số hoàn hảo
void SoHoanHao (int n){
    int TongUoc=0;
    for(int i=1; i<n; i++){
        if(n%i==0){
            TongUoc+=i;
        }
    }
    if(TongUoc==n){
        printf("n la so hoan hao");
    }else{
        printf("n khong phai so hoan hao");
    }
}
int main(){
    int n;
    scanf("%d",&n);
    SoHoanHao(n);
    /*
    // B1;
    solenhohonN(n);
    // B2:
    chiahetcho2_3(n);
    // B3:
    SoNguyenTo(n);
    // B4:
    SoDaoNguoc(n);
    // B6:
    printf("tong cua day so S = %d",Tong1denN(n));
    // B7:
    S1chiaN(n);*/

    return 0;
}