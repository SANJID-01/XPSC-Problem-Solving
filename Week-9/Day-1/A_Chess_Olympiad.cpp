#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int x, y, z;
    cin >> x >> y >> z;

    float teamA = x * 1 + y * 0.5;
    float teamB = y * 0.5 + z * 1;

    int cntA = 4 - (x + y + z);
    if ((cntA + teamA) > teamB)
        cout << "Yes" << endl;
    else
        cout << "No" << endl;
    return 0;
}