#include "bits/stdc++.h"
using ll = long long int;
using namespace std;
vector <int > rm;
vector <int > r;
vector <int >::iterator it;
int main()
{
    int n, cnt = 0; cin >> n;
    for(int i = 0; i < n; i++)
    {
        int x; cin >> x;
        rm.push_back(x);
    }
    int d = *max_element(rm.begin(),rm.end());
    for(int i = 0; i < n; i++)
    {
        if(d == rm[i]) cnt++;

    }
     if(cnt == 1)
        {
            for(int i = 0; i < n ;i++)
            {
                if(d != rm[i])
                {
                    r.push_back(rm[i]);
                }
            }

        }
    else {
        int t3 = 0;
        for(int i = 0; i < n ;i++)
        {
            if(d == rm[i]) {
                    t3++;

                    if(t3 == 3){
                        continue;
                    }
                    r.push_back(rm[i]);


            }
             else {
                        r.push_back(rm[i]);
                    }
        }
    }
    for(it = r.begin(); it != r.end(); it++)
    {
        cout << *it << ' ';
    }
}

