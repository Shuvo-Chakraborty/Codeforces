///OM TAT SAT
#include <bits/stdc++.h>
#define all(v) v.begin(),v.end()
#define int long long
using namespace std;

void solve()
{
    int n,cnt=0;
    //string s1="map",s2="pie";
    string str;

    cin>>n>>str;

    for(int i=0; i<n; i++)
    {
        if(str[i]=='m'&&str[i+1]=='a'&&str[i+2]=='p')
        {
            cnt++;
            i+=2;//jodi map pai than i er man 2 kore bariye abr loop dhukbe.
        }
        else if(str[i]=='p'&&str[i+1]=='i'&&str[i+2]=='e')
        {
            cnt++;
            i+=2;
        }
    }
    cout<<cnt<<endl;

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

