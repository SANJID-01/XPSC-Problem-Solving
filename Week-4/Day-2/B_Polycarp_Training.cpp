#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;

    multiset<int> ml;

    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        ml.insert(x);
    }

    int day = 0, pb = 1;

    while (!ml.empty())
    {
        auto lb = ml.lower_bound(pb);

        if (lb != ml.end())
        {
            day++;
            ml.erase(lb);
        }
        else
        {
            break;
        }
        pb++;
    }
    cout << day << endl;

    return 0;
}