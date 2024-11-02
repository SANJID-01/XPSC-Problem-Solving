#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int s, t;
    cin >> s >> t;

    int a = 0, b = 0, c = 0;

    int cnt = 0;

    while (a <= s)
    {
        b = 0;
        while (b <= s)
        {
            c = 0;
            while (c <= s)
            {
                if (a + b + c <= s && a * b * c <= t)
                {
                    cnt++;
                }
                c++;
            }
            b++;
        }
        a++;
    }
    cout << cnt << endl;

    return 0;
}