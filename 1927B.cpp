#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    string str="abcdefghijklmnopqrstuvwxyz";

    while(t--)
    {
        string ans;
        int n;
        cin>>n;
        map<char,int>mp;
        for(int i=0; i<str.size(); i++)mp[str[i]]=0;

        vector<int>v(n);
        for(int i=0; i<n; i++)
        {
            cin>>v[i];
            //  vector<int>::iterator x;
            for(auto x:mp)
            {
                if(x.second==v[i])
                {
                    ans.push_back(x.first);
                    mp[x.first]++;
                    break;
                }
            }
        }
        cout<<ans<<endl;
    }
    return 0;
}
