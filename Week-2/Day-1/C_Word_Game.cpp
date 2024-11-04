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
        map<string, vector<int>> mp;
        int n;
        cin >> n;
        int x = 1;
        while (x != 4)
        {
            for (int i = 0; i < n; i++)
            {
                string s;
                cin >> s;
                mp[s].push_back(x);
            }
            x++;
        }

        vector<int> v(x);

        for (auto [x, y] : mp)
        {
            vector<int> v2 = y;

            if (v2.size() == 1)
            {
                v[v2[0]] += 3;
            }

            if (v2.size() == 2)
            {
                v[v2[0]]++;
                v[v2[1]]++;
            }
        }

        for (int i = 1; i <= 3; i++)
        {
            cout << v[i] << " ";
        }
        cout << endl;
    }
    return 0;
}