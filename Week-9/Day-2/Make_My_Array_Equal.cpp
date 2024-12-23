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
        int n;
        cin >> n;

        vector<int> v(n);
        map<int, int> mp;

        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
            mp[v[i]]++;
        }

        if (mp.size() == 1)
            cout << "YES" << endl;
        else if (mp.size() == 2 && (*mp.begin()).first == 0)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }

    return 0;
}