#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int x, y;
    cin >> x >> y;

    if (x <= y)
        cout << y - x + 1 << endl;
    else
        cout << 0 << endl;
    return 0;
}
