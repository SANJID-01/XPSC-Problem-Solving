#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;

    while (true)
    {
        n++;
        set<int> st;
        int temp = n;

        while (temp)
        {
            int m = temp % 10;
            st.insert(m);
            temp /= 10;
        }

        if (st.size() == 4)
        {
            cout << n << endl;
            break;
        }
    }

    return 0;
}