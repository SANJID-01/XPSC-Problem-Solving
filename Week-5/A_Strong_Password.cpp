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
        string s;
        cin >> s;
        int sz = s.size();
        bool ft = false;

        for (int i = 0; i < sz - 1; i++)
        {
            cout << s[i];
            if (s[i] == s[i + 1] && !ft)
            {
                if (s[i] == 'a')
                    cout << "b";
                else
                    cout << "a";
                ft = true;
            }
        }
        cout << s[sz - 1];

        if (!ft)
        {
            if (s[sz - 1] == 'a')
                cout << "b";
            else
                cout << "a";
        }
        cout << endl;
    }
    return 0;
}
