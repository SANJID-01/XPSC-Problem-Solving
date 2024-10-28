#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    string s;
    cin >> s;

    int x = s.size();

    if (x == 1)
        cout << 0 << 0 << 0 << s << endl;

    else if (x == 2)
        cout << 0 << 0 << s << endl;

    else if (x == 3)
        cout << 0 << s << endl;

    else
        cout << s << endl;
    return 0;
}