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
        vector<char> v(6);
        for (int i = 0; i < 6; i++)
        {
            cin >> v[i];
        }

        int cnt = 0;
        bool flag = false;
        for (int i = 1; i < 6; i++)
        {
            if (v[i - 1] == 'W' && v[i] == 'W')
            {
                cnt++;
                if (cnt == 2)
                {
                    flag = true;
                    break;
                }
            }
            else
            {
                cnt = 0;
            }
        }

        (flag) ? yes : no;
    }

    return 0;
}
