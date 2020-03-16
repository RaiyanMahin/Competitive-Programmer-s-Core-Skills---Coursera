#include <bits/stdc++.h>
using ll = long long;
using namespace std;
int main()
{
    bool w = false;
    string s; cin >> s; ll a =  s.size();
    for(auto x : s)
    {
        if(x != '9') {
            w = true;
            break;
        }
    }
    if(w) cout << a << '\n';
    else cout << a + 1 << '\n';
}
