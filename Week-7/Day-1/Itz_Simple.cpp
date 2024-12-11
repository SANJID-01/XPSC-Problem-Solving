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
        int n, vd, vr;
        cin >> n >> vd >> vr;

        vector<int> v(n);
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
        }

        if (n == 1)
        {
            if ((v[0] + vd) > vr)
                cout << "Ved" << endl;
            else if ((v[0] + vd) < vr)
                cout << "Varun" << endl;
            else
                cout << "Equal" << endl;
            continue;
        }

        auto it = max_element(v.begin(), v.end());

        int mx = *it;

        v.erase(it);

        int cnt = 0;

        for (auto val : v)
        {
            cnt += val;
        }

        if ((cnt + vr) > (vd + mx))
            cout << "Varun" << endl;

        else if ((cnt + vr) < (vd + mx))
            cout << "Ved" << endl;

        else
            cout << "Equal" << endl;
    }
    return 0;
}