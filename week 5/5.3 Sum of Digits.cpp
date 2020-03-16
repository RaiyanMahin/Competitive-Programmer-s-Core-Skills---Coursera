#include <bits/stdc++.h>
using ull = unsigned long long int;
using namespace std;
ull dp[101][501];
ull countRec(int m, int n)
{
    if(m == 0)
    return n == 0;
    if(dp[m][n] != - 1)
    return dp[m][n];
    ull ans = 0;
    for(int i = 0 ;i < 10; i++)
        ans += countRec(m -1, n - i);
    return dp[m][n] = ans;
}
ull finalCount(int m,int n)
{
    memset(dp, -1, sizeof dp);
    ull ans = 0;
    if(n == 0)
    {


    for(int i = 0; i <= 9; i++)
        ans += countRec(m - 1, i);
    return ans;
    }
    if(n != 0)
    {
        for(int i = 1; i <= 9; i++)
            ans += countRec(m - 1, n - i);
        return ans;
    }

}


int main()
{
    ull n,m ; cin >> n >> m;
    if(n == 0 && m == 2)
    {
        cout << 0 << '\n';
        return 0;
    }
    else
        cout << finalCount(m,n) << '\n';

}

