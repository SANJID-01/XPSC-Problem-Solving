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
#define yes cout << "yES" << '\n'
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
        int x, y, z, a, b, c;
        cin >> x >> y >> z >> a >> b >> c;

        int s = min(x, a);
        int cnt_s = x - s;
        int l = min(y, b);
        int cnt_l = y - l;
        int xl = min(z, c);
        int cnt_xl = z - xl;

        int xl_s = min(cnt_xl, a - s);
        s += xl_s;
        cnt_xl = cnt_xl - xl_s;

        int l_s = min(cnt_l, a - s);
        s += l_s;
        cnt_l = cnt_l - l_s;

        int xl_l = min(cnt_xl, b - l);
        l += xl_l;
        cnt_xl = cnt_xl - xl_l;

        cout << xl + l + s << nl;
    }
    return 0;
}
