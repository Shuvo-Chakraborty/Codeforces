///OM TAT SAT
//https://codeforces.com/problemset/problem/1883/C
#include <bits/stdc++.h>
#define all(v) v.begin(),v.end()
//#define int long long
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int t;
    cin>>t;

    while(t--)
    {
        int n,k;
        cin>>n>>k;
        vector<int>a(n);
        int cnt=0;
        int even=0;int ans=k;
        for(int i=0;i<n;i++){
            //cin>>a[i];
            int x; cin>>x;

            if(x%2==0)even++;
            if(x%k==0)ans=0;
            ans=min(ans,k-x%k);

        }
        if(k==4){
            if(even>=2){ans=0;}
            else if(even==1){ ans= min(ans,1);}
            else {ans= min(ans,2);}
        }

       cout<<ans<<endl; 
    }

    return 0;
}