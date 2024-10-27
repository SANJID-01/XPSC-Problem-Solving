#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int x, y, z;
    cin >> x >> y >> z;

    int n = 1, flag = -1;

    while (n * z <= y)
    {
        if (n * z >= x)
        {
            flag = n * z;
            break;
        }
        n++;
    }
    cout << flag << endl;
    return 0;
}
