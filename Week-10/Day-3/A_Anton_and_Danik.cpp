#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;

    map<char, int> mp;

    for (int i = 0; i < n; i++)
    {
        char s;
        cin >> s;
        mp[s]++;
    }
    int a, d;
    auto it = mp.begin();
    auto itt = mp.rbegin();

    if (mp.size() != 1)
    {
        a = it->second;
        d = itt->second;
    }
    else
    {
        if (it->first == 'A')
            cout << "Anton" << endl;
        else
            cout << "Danik" << endl;
        return 0;
    }

    if (a > d)
        cout << "Anton" << endl;
    else if (a < d)
        cout << "Danik" << endl;
    else
        cout << "Friendship" << endl;

    return 0;
}