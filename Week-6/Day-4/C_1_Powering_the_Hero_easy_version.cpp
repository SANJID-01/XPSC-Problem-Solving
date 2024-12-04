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
        vector<int> arr(n);
        for (int i = 0; i < n; ++i)
        {
            cin >> arr[i];
        }

        priority_queue<int> pq;
        long long int cnt = 0;

        for (int i = 0; i < n; ++i)
        {
            if (arr[i] > 0)
            {
                pq.push(arr[i]);
            }
            else if (arr[i] == 0)
            {
                if (!pq.empty())
                {
                    cnt += pq.top();
                    pq.pop();
                }
            }
        }

        cout << cnt << endl;
    }

    return 0;
}