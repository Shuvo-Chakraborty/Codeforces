///OM TAT SAT
//https://codeforces.com/problemset/problem/1849/B
#include <bits/stdc++.h>
#define all(v) v.begin(),v.end()
//#define int long long
using namespace std;

bool cmp (pair <int, int> p1, pair <int, int> p2) {
    if (p1.first == p2.first)
        return (p1.second < p2.second);
    else
        return (p1.first > p2.first);
}
void solve()
{
    int n, k;
    cin >> n >> k;
    
    int a[n + 5];
    vector<pair< int , int >> p;

    for (int i = 1; i <= n; i++)
    {
        cin>>a[i];
    }
    for (int i = 1; i <= n; i++)
    {
       if (a[i] % k == 0) p.push_back({k, i});
		else p.push_back({a[i] % k, i});
       
    }
    sort(p.begin(),p.end(),cmp);

   for(auto u: p){
        cout<<u.second<<" ";
    }
    cout<<endl;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int t;
    cin>>t;

    while(t--)
    {
    solve();
    }

    return 0;
}