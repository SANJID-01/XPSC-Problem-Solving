#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int x, y;
    cin >> x >> y;

    if (x == y)
        cout << x + y << endl;
    else
    {
        x = max(x, y);
        cout << x + (x - 1) << endl;
    }

    return 0;
}