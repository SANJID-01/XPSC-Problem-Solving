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

int fib(int a1, int a2, int a3, int a4, int a5)
{
    int cnt = 0;
    if (a3 == a1 + a2)
        cnt++;
    if (a4 == a2 + a3)
        cnt++;
    if (a5 == a3 + a4)
        cnt++;
    return cnt;
}

int main()
{
    sonic;

    int t;
    cin >> t;

    while (t--)
    {
        int a1, a2, a4, a5;
        cin >> a1 >> a2 >> a4 >> a5;

        int x = a1 + a2;
        int y = a4 - a2;
        int z = a5 - a4;

        int mx_fib = 0;

        int i = fib(a1, a2, x, a4, a5);
        mx_fib = max(mx_fib, i);
        int j = fib(a1, a2, y, a4, a5);
        mx_fib = max(mx_fib, j);
        int k = fib(a1, a2, z, a4, a5);
        mx_fib = max(mx_fib, k);

        cout << mx_fib << nl;
    }

    return 0;
}
