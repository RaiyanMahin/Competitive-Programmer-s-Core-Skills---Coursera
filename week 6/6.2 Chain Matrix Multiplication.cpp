#include<bits/stdc++.h>
using ll = long long;
using namespace std;
int main()
{
	vector <ll >rm;
	ll n; cin >> n ; ll  M = n + 1;
	for(ll i = 0; i < M; i++)
    {
        ll x; cin >> x;
        rm.push_back(x);

    }
    ll sz = rm.size();
    ll m[sz][sz];
    ll i, j, k, L, q;

    for (ll i  = 1; i < sz; i++)
		m[i][i] = 0;


	for (L = 2; L < sz; L++)
	{
		for (i = 1; i < sz - L + 1; i++)
		{
			j = i + L - 1;
			m[i][j] = INT_MAX;
			for (k = i; k <= j - 1; k++)
			{

				q = m[i][k] + m[k + 1][j] +
					rm[i - 1] * rm[k] * rm[j];
				if (q < m[i][j])
					m[i][j] = q;
			}
		}
	}

	cout << m[1][sz - 1] << '\n';


}

