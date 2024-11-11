#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n, x;
    cin >> n >> x;

    vector<int> v(n);

    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }

    vector<int> v2;

    for (int i = 0; i < n; i++)
    {
        if (v[i] != x)
        {
            v2.push_back(v[i]);
        }
    }

    for (auto k : v2)
    {
        cout << k << " ";
    }
    return 0;
}