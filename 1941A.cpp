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

    int t;
    cin>>t;

    while(t--)
    {
        int n,m,k;
        cin>>n>>m>>k;
        vector<int>a1(n),a2(m);

        for(int i=0; i<n; i++)
        {
            cin>>a1[i];
        }
        for(int j=0; j<m; j++)
        {
            cin>>a2[j];
        }
        sort(a1.begin(),a1.end());
        sort(a2.begin(),a2.end());
        int cnt=0;
        for(int i=0; i<n; i++)
        {
            if(a1[i]>k)break;

                for(int j=0; j<m; j++)
                {
                    if(a1[i]+a2[j]<=k)
                    {
                        cnt++;
                    }
                    else break;
                }

        }

        cout<<cnt<<endl;

    }


    return 0;
}

