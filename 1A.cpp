///OM TAT SAT
//https://codeforces.com/problemset/problem/1/A
#include <bits/stdc++.h>
#define all(v) v.begin(),v.end()
#define int long long
using namespace std;

bool cmp (pair <int, int> p1, pair <int, int> p2) {
    if (p1.first == p2.first)
        return (p1.second < p2.second);
    else
        return (p1.first > p2.first);
}

int32_t main()
{
    // int n,m,a;
    // cin >> n >> m >> a;

    // cout<<((m+a-1)/a)*((n+a-1)/a);
    int n,m,a;
    cin >> n >> m >> a;

    cout<<floor(n/a);
    
    
    return 0;
}