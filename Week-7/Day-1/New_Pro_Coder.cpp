#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    float n, m;
    cin >> n >> m;

    if ((n / 2) >= m)
        cout << "PRO" << endl;
    else
        cout << "NEWBIE" << endl;

    return 0;
}