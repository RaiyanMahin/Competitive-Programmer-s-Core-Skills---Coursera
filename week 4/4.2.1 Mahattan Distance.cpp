#include <bits/stdc++.h>
using namespace std;
using ll = long long;
int main()
{
    ll N; cin >> N;
    ll m = INT_MIN, n = INT_MAX, o = INT_MAX, p  = INT_MIN;
    ll a = 0 , b = 0, c = 0 ,d = 0;
    for(int i = 1; i <= N; i++)
    {
        ll x,y; cin >> x >> y;
        if(x + y > m)
        {
            m = x + y;
            a = i;
        }
        if(x - y > p)
        {
            p = x - y;
            b = i;
        }
        if(x + y < n)
        {
            n = x + y;
            c = i;

        }
        if(x - y < o)
        {
            o = x - y;
            d = i;
        }
        if(m - n > p - o)
        {
            cout << a << ' ' << c << '\n';
        }
        else cout << b << ' ' << d << '\n';
    }


}


