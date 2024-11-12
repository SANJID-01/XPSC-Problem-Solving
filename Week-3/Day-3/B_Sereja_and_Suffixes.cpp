#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n, m;
    cin >> n >> m;

    vector<int> v(n + 1);
    vector<int> v2(n + 1);
    set<int> s;

    for (int i = 1; i <= n; i++)
    {
        cin >> v[i];
    }

    for (int i = n; i >= 1; i--)
    {
        s.insert(v[i]);
        v2[i] = s.size();
    }

    for (int i = 1; i <= m; i++)
    {
        int x;
        cin >> x;
        cout << v2[x] << endl;
    }

    return 0;
}