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
        deque<char> s(n);
        for (int i = 0; i < n; i++)
        {
            cin >> s[i];
        }

        while (true)
        {
            if (s.front() == 'B' && s.back() == 'B')
                break;

            if (s.front() == 'W')
                s.pop_front();

            if (s.back() == 'W')
                s.pop_back();
        }
        cout << s.size() << endl;
    }
    return 0;
}