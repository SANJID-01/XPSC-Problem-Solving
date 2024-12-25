#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;

    if (t <= 1 || t <= 2)
        cout << 1 << endl;
    else if (t < 7)
        cout << 2 << endl;
    else
        cout << 3 << endl;

    return 0;
}