#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    string s;
    cin >> s;

    int cp;
    int flag = 0;
    char cc;

    for (char c = 'a'; c <= 'z'; c++)
    {
        cp = s.find(c) + 1;
        if (cp)
        {
            continue;
        }
        else
        {
            flag = 1;
            cc = c;
            break;
        }
    }

    if (flag)
    {
        cout << cc << endl;
    }
    else
        cout << "None" << endl;

    return 0;
}