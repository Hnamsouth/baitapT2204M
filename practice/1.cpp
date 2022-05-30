// tinh to hop cua k n
#include <iostream>
using namespace std;

int C(int k, int n) {       // 6 & 3 = (6*5*4)/(3*2*1)=20  
// 2-5: 2-4 -- 2-3:3-5    --  2-4:2-3   --  3-4:2-3
    if (k == 0 || k == n) return 1;
    if (k == 1) return n;
    // cout<<k<<" "<<n<<" ";
    cout<<endl<<C(k,n-1)<<" ";
    // return C(k - 1, n - 1) + C(k, n - 1);
    return C(k,n);
}

int main()
{
	int n , k;
	cin >> n >> k;
	// cout <<endl<< C(k,n);
    C(k,n);
	return 0;
}