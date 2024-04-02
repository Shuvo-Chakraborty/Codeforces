///OM TAT SAT
//https://codeforces.com/problemset/problem/1883/B
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
        int n,k ;
        cin>>n>>k;
        vector<int>a(n);

        for(int i=0; i<n; i++){
            cin>>a[i];
        }
        
            if(is_sorted(a.begin(),a.end())){
                cout<<0<<endl;
                continue;
            }
        
        int ordered=0;
         for(int i=0; i<n; i++){
            if(a[i]==ordered+1)
            ordered++;
        }
        int nonordered=n-ordered;
        int ans=(nonordered+k-1)/k;//ceil(a/b)=(a+b-1)/b
        cout<<ans<<endl;

    }
    return 0;
}
