#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    string s;
    cin >> s;

    string ex = "hello";
    int cnt = 0;

    for (char c : s)
    {
        if (c == ex[cnt])
        {
            cnt++;
        }
        if (cnt == ex.size())
        {
            break;
        }
    }

    if (cnt == ex.size())
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }

    return 0;
}