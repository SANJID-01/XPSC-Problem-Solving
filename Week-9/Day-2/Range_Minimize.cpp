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

        deque<int> v(n);
        for (int i = 0; i < n; i++)
            cin >> v[i];

        sort(v.begin(), v.end());

        deque<int> v2 = v;
        deque<int> v3 = v;
        deque<int> v4 = v;

        int a, b, c;

        v2.pop_back();
        v2.pop_back();

        a = v2.back() - v2.front();

        v3.pop_front();
        v3.pop_front();

        b = v3.back() - v3.front();

        int mini = min(a, b);

        v4.pop_front();
        v4.pop_back();

        c = v4.back() - v4.front();

        cout << min(mini, c) << endl;
    }

    return 0;
}