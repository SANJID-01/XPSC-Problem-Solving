#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    string s, x;
    cin >> s;

    for (int i = 0; i < s.size(); i++)
    {
        if ('A' <= s[i] && s[i] <= 'Z')
        {
            s[i] = s[i] + 32;
        }
        if (s[i] != 'a' && s[i] != 'e' && s[i] != 'i' && s[i] != 'o' && s[i] != 'u' && s[i] != 'y')
        {
            x.push_back('.');
            x.push_back(s[i]);
        }
    }
    cout << x << endl;

    return 0;
}