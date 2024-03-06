///OM TAT SAT
#include <bits/stdc++.h>
#define all(v) v.begin(),v.end()
using namespace std;
using ll = long long;

void solve()
{
    int n,m,k;
    cin>>n>>m>>k;
    int x=k/2,y=k/2;
    // vector<int>v1(a),v2(b);
    unordered_map<int,int>a,b;
    for(int i=1; i<=n; i++)
    {
        int z;
        cin>>z;
        a[z]++;
    }
    for(int i=1; i<=m; i++)
    {
        int z;
        cin>>z;
        b[z]++;
    }

    int cnt=0;
    for(int i=1; i<=k; i++)
    {
        if(a.count(i) && !b.count(i) && x)//a te ache ,b te nai
            x--;
        if(b.count(i) && !a.count(i) && y)//b te ache,a te nai
            y--;
        if(a.count(i) and b.count(i)) cnt++;
    }
    if(x+y==cnt)
        cout<<"YES"<<endl;
    else
        cout<<"NO"<<endl;
//  int n,m,k;
//    cin>> n >> m >> k;
//    int a_c = k/2,b_c = k/2;
//    unordered_map<int,int>a,b;
//    for(int i= 1;i <=n;i++)
//    {
//        int x;
//        cin>> x;
//        a[x]++;
//    }
//    for(int i= 1;i <=m;i++)
//    {
//        int x;
//        cin>> x;
//        b[x]++;
//    }
//    int cnt = 0;
//    for(int i = 1;i <= k;i++)
//    {
//        if(a.count(i) and !b.count(i) and a_c)//a te ache ,b te nai
//            a_c--;
//        else if(b.count(i) and !a.count(i) and b_c)//b te ache,a te nai
//            b_c--;
//        else if(a.count(i) and b.count(i))
//            cnt++;
//    }
//    if(a_c+b_c==cnt)
//        cout << "YES" << endl;
//    else
//        cout << "NO" << endl;

}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);


    ll t ;
    cin >> t;
    while (t--)
    {
        solve();
    }
}


