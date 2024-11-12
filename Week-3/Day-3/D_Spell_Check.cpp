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
        int n;
        string s;
        cin >> n >> s;

        if (n != 5)
        {
            cout << "NO" << endl;
        }
        else
        {
            string str = "Timur";

            sort(str.begin(), str.end());

            sort(s.begin(), s.end());

            if (str == s)
                cout << "YES" << endl;
            else
                cout << "NO" << endl;
        }
    }

    return 0;
}