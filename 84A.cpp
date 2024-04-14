///OM TAT SAT
//https://codeforces.com/problemset/problem/84/A
#include <bits/stdc++.h>
using namespace std;
#define Shuvo ios_base::sync_with_stdio(false);
#define Chakraborty cin.tie(NULL);cout.tie(NULL);
#define all(v) v.begin(),v.end()
#define int long long

//const long long mod = 1e9 + 7;

bool cmp (pair <int, int> p1, pair <int, int> p2) {
    if (p1.first == p2.first)
        return (p1.second < p2.second);
    else
        return (p1.first > p2.first);
}
void solve()
{
    int t;
    cin>>t;
    cout<< t+(t/2) <<endl;
    
}

int32_t main()
{
    Shuvo Chakraborty
    solve();
    
    return 0;
}
