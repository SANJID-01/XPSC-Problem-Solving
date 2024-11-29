#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    string s;
    getline(cin, s);

    set<char> ss;

    for (char c : s)
    {
        if (c != '{' && c != '}' && c != ',' && c != ' ')
        {
            ss.insert(c);
        }
    }

    cout << ss.size() << endl;

    return 0;
}