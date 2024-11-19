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

        map<int, int> mp;

        for (int i = 1; i <= n; i++)
        {
            int key;
            cin >> key;
            mp[key]++;
        }

        priority_queue<int> pq;
        for (auto [x, y] : mp)
        {
            pq.push(y);
        }

        while (!pq.empty())
        {
            if (pq.size() < 2)
            {
                break;
            }
            int m, n;
            m = pq.top();
            pq.pop();
            n = pq.top();
            pq.pop();
            m--, n--;
            if (m > 0)
            {
                pq.push(m);
            }
            if (n > 0)
            {
                pq.push(n);
            }
        }

        int cnt = 0;
        while (!pq.empty())
        {
            cnt += pq.top();
            pq.pop();
        }

        cout << cnt << endl;
    }

    return 0;
}