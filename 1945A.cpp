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
    int a,b,c,d,x,y,cnt=0,ans=0;
    while(t--)
    {
        cin >>a>>b>>c;


        int f = b % 3;
        double result;
        if (f + c >= 3 || f == 0)
        {
            result = a + ceil((double)(b + c) / 3);
        }
        else
        {
            result = -1;
        }
        cout << fixed << setprecision(0) << result << endl;
    }

    return 0;
}
