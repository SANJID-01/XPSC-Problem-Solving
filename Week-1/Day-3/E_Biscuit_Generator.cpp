#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int a, b, t;
    cin >> a >> b >> t;

    t = t + 0.5;

    cout << (t / a) * b << endl;

    return 0;
}