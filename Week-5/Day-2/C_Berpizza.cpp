#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, cn = 1;
    cin >> n;
    set<pair<int, int>> s;
    multiset<pair<int, int>> ml;
    vector<int> v;
    for (int i = 1; i <= n; i++)
    {
        int t;
        cin >> t;
        if (t == 1)
        {
            int m;
            cin >> m;
            s.insert({cn, m});
            ml.insert({m, -cn});
            cn++;
        }
        else if (t == 2)
        {
            int pos = s.begin()->first, m = s.begin()->second;
            v.push_back(pos);
            s.erase(s.begin());
            ml.erase({m, -pos});
        }
        else
        {
            int pos = -ml.rbegin()->second, m = ml.rbegin()->first;
            v.push_back(pos);
            ml.erase(--ml.end());
            s.erase({pos, m});
        }
    }

    for (auto val : v)
    {
        cout << val << " ";
    }
    cout << endl;

    return 0;
}