#include <bits/stdc++.h>
using ll = long double;
//const ll MA = 1e-9;
using namespace std;
int main()
{
    int n; cin >> n;
    ll s = 0.0, x = 0.0;
    for(int i = 0; i < n; i++)
    {
        double w; cin >> w;
        double  v = (1.0 / w);
        s += w;
        x += v;


    }
    ll q = s + x;
    cout << fixed << setprecision(10) << q << '\n';


}


