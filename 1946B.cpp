///OM TAT SAT
//https://codeforces.com/problemset/problem/1946/B
#include <bits/stdc++.h>
#define all(v) v.begin(),v.end()
#define int long long
using namespace std;

const long long mod = 1e9 + 7;

bool cmp (pair <int, int> p1, pair <int, int> p2) {
    if (p1.first == p2.first)
        return (p1.second < p2.second);
    else
        return (p1.first > p2.first);
}

void codeforlife()
{
    int n,k ;
    cin>>n>>k;
    int cnt=0,ans=0;

    vector<int>a(n);
    //vector<int>sum;

    for(int i=0; i<n; i++){
        cin>>a[i];
        cnt+=a[i];
        ans=max(ans,cnt);
        cnt=max(cnt,0ll);
    }
    int finalans=(accumulate(a.begin(),a.end(),0ll) % mod + mod) % mod;

    for(int i=0; i<k; i++){
        finalans=(finalans+ans) % mod;
        ans=(ans * 2) % mod;
    }

    cout<<finalans<<endl;
}


int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int t;
    cin>>t;

    while(t--){
        codeforlife();
    }
    return 0;
}
