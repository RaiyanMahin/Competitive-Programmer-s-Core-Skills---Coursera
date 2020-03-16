#include <bits/stdc++.h>
using namespace std;
using ll = long long;
int main()
{
    string s; cin >> s;  ll n = s.size();
    map<char,vector<ll> > rm;
    for(char c = 'a' ; c <= 'z' ; c++)
        rm[c].resize(n + 1, 0);
    for(char c = 'a' ; c <= 'z'; c++)
    {
        for(ll i = 1; i <= n; i++)
        {
            if(s[i - 1] == c)
                rm[c][i] = rm[c][i - 1] + 1;
            else
                rm[c][i] = rm[c][i - 1];
        }
    }
    ll q; cin >> q;
    while(q--)
    {
        ll l, r; cin >> l >> r;
        char ans ; ll res = 0;
        for(char c = 'a'; c <= 'z' ; c++)
        {
            ll temp  = rm[c][r] - rm[c][l - 1];
            if(temp > res)
            {
                res = temp;
                ans = c;
            }
        }
        cout << ans << '\n';
    }

}

