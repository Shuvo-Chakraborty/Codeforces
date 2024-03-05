///OM TAT SAT
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
        ll n;
        cin>>n;
        while(n%2==0)
        {
            n/=2;
        }
        if(n==1)cout<<"NO"<<endl;
        else cout<<"YES"<<endl;
    }
}


