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
        vector<int> v(n);
        for (int i = 0; i < n; ++i)
        {
            cin >> v[i];
        }

        int l = 0, r = n - 1;
        int min = 1, max = n;

        while (l <= r)
        {
            if (v[l] == min || v[l] == max)
            {
                l++;
                if (v[l - 1] == min)
                    min++;
                if (v[l - 1] == max)
                    max--;
            }
            else if (v[r] == min || v[r] == max)
            {
                r--;
                if (v[r + 1] == min)
                    min++;
                if (v[r + 1] == max)
                    max--;
            }
            else
            {
                break;
            }
        }

        if (l > r)
        {
            cout << -1 << endl;
        }
        else
        {
            cout << l + 1 << " " << r + 1 << endl;
        }
    }

    return 0;
}