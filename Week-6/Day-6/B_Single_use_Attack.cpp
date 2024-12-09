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
        int h, x, y;
        cin >> h >> x >> y;

        int cnt = 1;
        int z = h - y;

        while (z > 0)
        {
            z = z - x;
            cnt++;
        }
        cout << cnt << endl;
    }
    return 0;
}
