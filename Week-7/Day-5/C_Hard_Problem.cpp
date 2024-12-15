#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;

    while (t--)
    {
        int m, a, b, c;
        cin >> m >> a >> b >> c;

        int r1 = m;
        int r2 = m;

        int cnt1 = min(r1, a);
        r1 -= cnt1;

        int cnt2 = min(r2, b);
        r2 -= cnt2;

        int rem = r1 + r2;
        int cnt3 = min(rem, c);

        cout << cnt1 + cnt2 + cnt3 << endl;
    }

    return 0;
}
