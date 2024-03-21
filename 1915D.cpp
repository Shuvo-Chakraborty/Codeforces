///OM TAT SAT
#include <bits/stdc++.h>
#define all(v) v.begin(),v.end()
#define int long long
using namespace std;

int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int t;
    cin>>t;

    while(t--)
    {
        int n;
        cin>>n;
        string s;
        cin>>s;
        string res;

        for(int i=0; i<s.size(); i++)
        {
            res+=s[i];
            if(s[i+2]=='a' || s[i+2]=='e')
            {
                res+='.';
            }
        }
        int x=res.size()-1;
        if(res[x]=='.')
        {
            res.pop_back();
        }
        cout<<res<<endl;
    }


    return 0;
}
