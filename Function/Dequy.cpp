#include <iostream>
using namespace std;
int fun(int a, int b)
{
    if (b == 0)
        return 0;
    if (b % 2 == 0)
        return fun(a + a, b/2);
     
    return fun(a + a, b/2) + a; // 4+funn(8,1)
}
 
int main()
{
    // cout << fun(4, 3) ;
    int n=1;
    int vtridau[1]={5};
    cout<<vtridau[0];

    return 0;
}