#include <bits/stdc++.h>
using namespace std;
#define ll long long int

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;

    vector<ll> v(n);

    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }

    ll sum = 0;

    for (int i = 0; i < n; i++)
    {
        sum += v[i];
    }

    if (sum % 2 == 0)
    {
        cout << sum << endl;
        return 0;
    }

    sort(v.begin(), v.end());

    ll min_odd = 0;

    for (int i = 0; i < n; i++)
    {
        if (v[i] % 2 != 0)
        {
            min_odd = v[i];
            break;
        }
    }

    cout << sum - min_odd << endl;

    return 0;
}