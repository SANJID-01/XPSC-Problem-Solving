#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int x;
    cin >> x;
    int y = x / 5;
    if (x % 5)
        cout << y + 1 << endl;
    else
        cout << y << endl;
    return 0;
}