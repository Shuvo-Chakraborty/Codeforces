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

        int zero=0,one=0;
        string s;
        cin>>s;
        bool f=true;

        if(s=="()"){
            cout<<"NO"<<endl;}
        else{
            cout<<"YES"<<endl;
            if(s.find(")(")!=string::npos) //string::npos=string not found
            {
                for(int i=0; i<s.size(); i++){
                    cout<<"(";
                }
                for(int i=0; i<s.size(); i++){
                    cout<<")";
                }
            }
            else{
                for(int i=0; i<s.size(); i++){
                    cout<<"()";
                }
            }
            cout<<endl;
        }
    }


    return 0;
}
