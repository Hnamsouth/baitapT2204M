#include<iostream>
using namespace std;
void fun2(int n)
#define LIMIT 1000
{
  if (n <= 0)
     return;
  if (n > LIMIT)
    return;
  cout << n <<" ";
  fun2(2*n);
  cout << n <<" ";
}
int fbls (int n){

    if(n<=1){  // dãy fbls n : nếu n<=1 thì dãy fbls sẽ = n vs f(1) = 1   f(0)=0
        return n;
    }else{  // còn vs n>=2 thì  f(n)= f(n-1) + f(n-2) ->vd: f(2)=f(2-1)+ f(2-2)=f(1)+f(0) = 1
        return fbls(n-1)+fbls(n-1);
    }
    // f(5)= f(4)+f(3)
    // f(5) gọi đến 2 nhánh con f(4) và f(3):
    // f(4) sẽ gọi đến 2 nhánh con f(3) & f(2) các nhánh khác cũng tương tự
    // mỗi lần gọi sẽ check điều kiện n<=1 -> return n;   khi n=0 & n=1 f(1) = 1   f(0)=0
    // f(4)=f(3)+f(2) -- f(3)=f(2)+f(1) 
    // f(2)=f(1)+f(0)
}
void fun1(int n)
{
   int i = 0;  
   if (n > 1)
     fun1(n - 1);
   for (i = 0; i < n; i++)
     cout << n<<" ";
}
 int somu(int a,int b){
     if(b==0){
         return 1;
     }
    int x=somu(a,b/2); // x=a^(b/2)
    if(b%2==0){
        return x*x; }
    return a*x*x;
 }
void tower(int N, int a, int b, int c)
{
    if(N == 1)
    {
        cout << a << " -> " << c <<endl;
        return;
    }
    // 2 1 3 2  : 1 
    // cout<<N<<" "<<endl;

    tower(N - 1, a, c, b); // l1 n=2: 1,3,2 // ctr sẽ thực thi hết dòng này trước xong ms đến dòng sau`

    // Chuyển N - 1 đĩa từ cọc 1 sang cọc 2, cọc 3 là trung gian. 
    tower(1, a, b, c);//n=1: 1,2,3
     // Chuyển 1 đĩa còn lại từ cọc 1 sang cọc 3.

    tower(N - 1, b, a, c); //n=1:2,1,3  --- n=2 ko lm j cả và xuống lệnh đệ quy ở dưới, n=1 thực hiện code trong if->end
    // tower(1, a, b, c);//n=1: 1,2,3
    // Chuyển N - 1 đĩa từ cọc 2 sang cọc 3, cọc 1 là trung gian.


}

int main()
{
    int N;
    // cin >> N;

    int a = 2, b = 3, c = 3;
    /*
    // tower(N, a, b, c); // Giải bài toán với N đĩa.
    // cout<<endl<<a<<b<<c;
    // fun1(N);
    // fun2(N);
*/
    cout<<somu(a,b);
}
