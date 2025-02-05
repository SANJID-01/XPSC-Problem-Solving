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
        int a, b;
        cin >> a >> b;

        deque<int> dq;

        while (b--)
        {
            dq.push_back(2);
        }
        int x = a / 2;
        int y = a / 2;
        while (x--)
        {
            dq.push_back(1);
        }
        while (y--)
        {
            dq.push_front(1);
        }
        for (auto val : dq)
            cout << val;
        cout << nl;
    }

    return 0;
}
