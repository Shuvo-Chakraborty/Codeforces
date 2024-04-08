///OM TAT SAT
//https://codeforces.com/problemset/problem/1858/C
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
void solve()
{
   int n;
   cin>>n;
   vector<int>visited(n+1,false);
   vector<int>ans;

   for(int i=n; i>=1; i--) {
        if(visited[i]==false){
            int temp=i;
            visited[i]==true;
            ans.push_back(i);
            while(temp%2 == 0){
                visited[temp/2] = true;
                ans.push_back(temp/2);
                temp /= 2;
            
            }
        }
   }
   for(auto u : ans){
    cout<<u<<" ";
   }
   cout<<endl;
   
}

int32_t main()
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