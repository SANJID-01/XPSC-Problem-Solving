#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;

    while (t--)
    {
        int x, y;
        cin >> x >> y;

        map<int, set<int>> mp;

        for (int i = 1; i <= x; i++)
        {
            int n;
            cin >> n;

            mp[n].insert(i);
        }

        while (y--)
        {
            int rsv, lsv;

            cin >> lsv >> rsv;

            if ((mp.find(lsv) == mp.end()) || mp.find(rsv) == mp.end())
            {
                cout << "NO" << endl;
            }
            else
            {
                int l = *mp[lsv].begin();
                int r = *mp[rsv].rbegin();

                if (l < r)
                    cout << "YES" << endl;
                else
                    cout << "NO" << endl;
            }
        }
    }

    return 0;
}