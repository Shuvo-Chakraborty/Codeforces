///OM TAT SAT
//https://codeforces.com/problemset/problem/84/A
#include <bits/stdc++.h>
using namespace std;
#define Shuvo ios_base::sync_with_stdio(false);
#define Chakraborty cin.tie(NULL);cout.tie(NULL);
#define all(v) v.begin(),v.end()
#define int long long

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
    while(t--){
        int one,two,three;
        int a,b,c;
        cin>>a>>b>>c;

        if(abs(b-c)%2==0) one=1;
        else one =0;

        if(abs(a-c)%2==0) two=1;
        else two =0;

        if(abs(a-b)%2==0) three=1;
        else three =0;

        cout<< one <<" "<< two <<" "<< three;
        cout<<endl;
    }
    
}

int32_t main()
{
    Shuvo Chakraborty
    solve();
    
    return 0;
}
