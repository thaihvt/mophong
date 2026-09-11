#include <bits/stdc++.h>
#define ll long long
using namespace std;
ll n, ans, h;
stack<pair<ll,ll>> st;
int main()
{
    cin >> n;
    while(n--)
    {
        cin >> h;
        while(!st.empty() && st.top().first < h)
        {
            ans += st.top().second;
            st.pop();
        }

        if(st.empty()) st.push({h,1});
        else
        {
            if(h==st.top().first)
            {
                ans += st.top().second;
                st.top().second++;
                if(st.size() > 1) ans += 1;
            }
            else
            {
                ans += 1;
                st.push({h,1});
            }
        }
    }
    cout << ans;
}
