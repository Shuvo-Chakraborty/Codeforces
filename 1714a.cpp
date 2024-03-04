#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t,c,a,b;
    cin>>t;
    while(t--)
    {
        int n,h,m;
        cin>>n>>h>>m;
        int ans=INT_MAX;
        for(int i=1; i<=n; i++)
        {
            int hr,mn;
            cin>>hr>>mn;

             a=h*60+m;
             b=hr*60+mn;
             c=b-a;

            if(c<0)
            {
                c+=1440;
            }
            ans=min(ans,c);
        }
        cout<<ans/60<<" "<<ans%60<<endl;
    }

    return 0;
}








