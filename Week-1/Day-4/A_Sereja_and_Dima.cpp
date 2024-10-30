#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;
    deque<int> dq(n);

    for (int i = 0; i < n; i++)
    {
        cin >> dq[i];
    }

    int s = 0, d = 0;
    while (!dq.empty())
    {
        if (dq.size() == 1)
        {
            s += dq.front();
            dq.clear();
            break;
        }

        if (dq.front() > dq.back())
        {
            s += dq.front();
            dq.pop_front();
        }
        else
        {
            s += dq.back();
            dq.pop_back();
        }

        if (dq.front() > dq.back())
        {
            d += dq.front();
            dq.pop_front();
        }
        else
        {
            d += dq.back();
            dq.pop_back();
        }
    }
    cout << s << " " << d << endl;
    return 0;
}