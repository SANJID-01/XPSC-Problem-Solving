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
        vector<pair<int, char>> coto, boro, uttor;
        string s;
        cin >> s;

        for (int i = 0; i < s.size(); i++)
        {
            if (s[i] != 'b' && s[i] != 'B')
            {
                if (s[i] >= 'a')
                {
                    coto.push_back({i, s[i]});
                }
                else
                {
                    boro.push_back({i, s[i]});
                }
            }
            else
            {
                if (s[i] == 'b' && coto.size() != 0)
                {
                    coto.pop_back();
                }
                else if (s[i] == 'B' && boro.size() != 0)
                {
                    boro.pop_back();
                }
            }
        }

        for (int i = 0; i < coto.size(); i++)
        {
            uttor.push_back(coto[i]);
        }
        for (int i = 0; i < boro.size(); i++)
        {
            uttor.push_back(boro[i]);
        }

        sort(uttor.begin(), uttor.end());

        for (auto x : uttor)
        {
            cout << x.second;
        }
        cout << endl;
    }
    return 0;
}