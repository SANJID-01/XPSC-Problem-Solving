#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;
    cin.ignore();

    map<string, bool> mp;

    for (int i = 0; i < n; i++)
    {
        string s;
        getline(cin, s);
        mp[s] = true;
    }

    cout << mp.size() << endl;

    return 0;
}