#include <bits/stdc++.h>
#define all(v) v.begin(),v.end()
using namespace std;
using ll = long long;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);


    ll t ;
    cin >> t;
    while (t--)
    {
        ll cnt=0;
        ll n,f=0;
        cin>>n;
        vector<ll>a(n);
        for(ll i=0; i<n; i++)
        {
            cin>>a[i];
        }

        for(ll i = 0; i < n-1; i++)
        {
            if(a[i]!=0)
            {
                cnt += a[i];
                f = 1;
            }
            else if(f == 1)
                cnt++;
        }
        cout << cnt << endl;

    }
}

