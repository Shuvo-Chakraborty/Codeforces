///OM TAT SAT
#include <bits/stdc++.h>
#define all(v) v.begin(),v.end()
using namespace std;
using ll = long long;

void solve()
{
    int n;
    cin>>n;
    vector<int>a(n);

    for(int i=0; i<n; i++)
    {
        cin>>a[i];
    }
    int i=0,j=n-1;
    while(i<n-1 && a[i]==a[i+1])
    {
        i++;
    }
    while(j>=1 && a[j]==a[j-1]){j--;}

     if(a[0]==a[n-1]){
        cout<<max(j-i-1,0)<<endl;
     }
     else{cout<<max(min(n-i-1,j),0)<<endl;}
   //  cout<<i<<" "<<j;
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

