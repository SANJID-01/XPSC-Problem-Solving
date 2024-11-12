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

        string x, y;
        cin >> x >> y;

        int flag = 1;

        for (int i = 0; i < n; i++)
        {
            if (x[i] == 'R' && y[i] != 'R')
            {
                flag = 0;
                break;
            }
            else if ((x[i] == 'B' && y[i] == 'R') || (x[i] == 'G' && y[i] == 'R'))
            {
                flag = 0;
                break;
            }
        }

        if (flag)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }

    return 0;
}