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

        vector<int> a(n);

        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }

        vector<int> b(n);

        for (int i = 0; i < n; i++)
        {
            cin >> b[i];
        }

        int cnt = 0;

        for (int i = 0; i < n; i++)
        {
            if (b[i] <= 2 * a[i] && a[i] <= 2 * b[i])
            {
                cnt++;
            }
        }

        cout << cnt << endl;
    }

    return 0;
}
