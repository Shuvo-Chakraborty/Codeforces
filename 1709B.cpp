///OM TAT SAT
#include <bits/stdc++.h>
#define all(v) v.begin(),v.end()
#define int long long
using namespace std;

int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    //prefix,sufix  sum e 1 based index nile cnt krte subidha hy.

    int n,m;
    cin>>n>>m;
    vector<int>v(n+1,0);

    for(int i=1; i<=n; i++)
    {
        cin>>v[i];
    }

    vector<int> pref(n+2,0);
    vector<int> suff(n+2,0);

    for(int i=1; i<=n; i++)
    {
        pref[i]=pref[i-1];
        if(v[i]<v[i-1])
        {
            pref[i]+=v[i-1]-v[i];
        }
    }
    for(int i=n; i>=1; i--)
    {
        suff[i]=suff[i+1];
        if(v[i]<v[i+1])
        {
            suff[i]+=v[i+1]-v[i];
        }
    }

    while(m--)
    {
        int i,j;
        cin>>i>>j;

        int ans;
        if(i<j)
        {
            ans=pref[j]-pref[i];
        }
        else
        {
            ans=suff[j]-suff[i];
        }
        cout<<ans<<endl;
    }

    return 0;
}




