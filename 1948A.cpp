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

        if(n%2==1)
        {
            cout<<"NO"<<endl;
        }
        else
        {
            cout<<"YES"<<endl;
            for(int i=0; i<n/2; i++)
            {
                cout<<"AAB";
            }
        cout<<endl;
        }
    }


    return 0;
}





