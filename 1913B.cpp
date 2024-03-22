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
///     4
///0             ->1
///011           ->1
///0101110001    ->0
///111100        ->4

        int zero=0,one=0;
        string s;
        cin>>s;

        for(int i=0; i<s.size(); i++)
        {
            if(s[i]=='0')zero++;
            else one++;
        }

        for(int i=0; i<s.size(); i++)
        {
            if(s[i]=='1')
            {
                if(zero>0)zero--;
                else break;
            }
            if(s[i]=='0')
            {
                if(one>0)one--;
                else break;
            }
        }
        cout<<one+zero<<endl;

    }


    return 0;
}

