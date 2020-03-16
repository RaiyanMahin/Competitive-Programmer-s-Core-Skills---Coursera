#include <bits/stdc++.h>
using namespace std;
double a[100], b[100];
int main()
{
    int n; cin >> n;
    double a[n] , b[n]; double Err;
    for(int i = 0 ; i < n; i++) cin >> a[i];
    for(int i = 0 ;i < n; i++) cin >> b[i];
    double x = accumulate(a, a + n, 0.0);
    double y = accumulate(b, b + n, 0.0);
    Err = (double)n/(200000.0);
    if (abs(x-y)<Err)
        cout << "SUM(A)=SUM(B)" << "\n";
    else if (x>y+Err)
        cout << "SUM(A)>SUM(B)" << "\n";
    else
        cout << "SUM(A)<SUM(B)" << "\n";

}

