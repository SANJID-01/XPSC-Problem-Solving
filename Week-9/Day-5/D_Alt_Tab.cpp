#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;

    stack<string> stk;
    map<int, string> mp;
    set<string> st;

    while (n--)
    {
        string s;
        cin >> s;
        stk.push(s);
    }
    int i = 0;

    while (!stk.empty())
    {
        i++;
        string x = stk.top();

        if (st.find(x) == st.end())
        {
            mp[i] = x;
            st.insert(x);
        }
        stk.pop();
    }

    for (auto val : mp)
    {
        string c = val.second;
        cout << c.substr(c.size() - 2);
    }

    return 0;
}