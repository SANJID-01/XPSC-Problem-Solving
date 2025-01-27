#define sonic                     \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);
#define io_files                      \
    freopen("input.txt", "r", stdin); \
    freopen("output.txt", "w", stdout); // *required
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define pub(x, y) (x).push_back(y)
#define ppb(x) (x).pop_back()
#define ff first
#define ss second
#define nl '\n'
#define sz(x) (int)x.size()
#define yes cout << "YES" << '\n'
#define no cout << "NO" << '\n'
#define Minus cout << -1 << '\n'
#define all(x) (x).begin(), (x).end()
#define Unique(x) (x).erase(unique(all(x)), (x).end()) // *required sorted

int main()
{
    sonic;

    int t;
    cin >> t;
    while (t--)
    {
        int n, d;
        cin >> n >> d;
        vector<int> v(n);
        for (int i = 0; i < n; i++)
            cin >> v[i];

        int cnt = 0;
        bool flag = true;
        for (int i = 0; i < n; i++)
        {
            if (v[i] > d && flag)
            {
                cnt++;
                flag = false;
            }
            else if (v[i] <= d && !flag)
            {
                cnt++;
                flag = true;
            }
        }
        cout << cnt << nl;
    }

    return 0;
}
