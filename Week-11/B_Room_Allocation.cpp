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

        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
        }

        int cnt = 0;

        for (int i = 0; i < n; i++)
        {
            if (v[i] % 2 != 0)
            {
                cnt += v[i] % 2;
            }
            cnt += v[i] / 2;
        }
        cout << cnt << endl;
    }

    return 0;
}