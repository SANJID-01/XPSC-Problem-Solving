#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;

    map<string, string> mp1, mp2;

    for (int i = 0; i < n; i++)
    {
        string s1, s2;
        cin >> s1 >> s2;

        if (mp2.find(s1) != mp2.end())
        {
            string s = mp2[s1];
            mp1[s] = s2;
            mp2.erase(s1);
            mp2[s2] = s;
        }
        else
        {
            mp1[s1] = s2;
            mp2[s2] = s1;
        }
    }

    cout << mp1.size() << endl;

    for (auto [x, y] : mp1)
    {
        cout << x << " " << y << endl;
    }
    return 0;
}