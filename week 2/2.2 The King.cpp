#include "bits/stdc++.h"
using ll = long long int;
int n,m,q;
using namespace std;
int findkin(int z)
{
    int e = z % 3;
    if(e == 0 || e == 1) {
         q = (z / 3) * 2;

    }
    else {
        q = 1 + (z /  3) * 2;
        }
        return q ;


}
int king()
{
    int ans = 0;
    int  r = findkin(n);
    int c = findkin(m);
    if(r * c == 1) ans = 0;
    else if(r == 1) ans = findkin(n);
    else if(c == 1) ans = findkin(m);
    else ans = r * m + (n - r) * c;
    return ans;


}
int main()
{
   while ( cin >> n >> m) {
        cout << king() << '\n'; }

}

