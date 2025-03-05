#include <bits/stdc++.h>
using namespace std;

#define sonic                     \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);

int main()
{
    sonic;

    int t;
    cin >> t;

    while (t--)
    {
        int n, c;
        cin >> n >> c;
        string s;
        cin >> s;

        map<char, int> mp;
        for (char ch : s)
        {
            mp[ch]++;
        }

        vector<int> freq;
        for (auto &[ch, cnt] : mp)
        {
            freq.push_back(cnt);
        }

        // Sort frequencies in descending order
        sort(freq.rbegin(), freq.rend());

        // Compute prefix sums
        vector<int> prefix(freq.size() + 1, 0);
        for (int i = 0; i < freq.size(); ++i)
        {
            prefix[i + 1] = prefix[i] + freq[i];
        }

        int min_cost = n * (n + 1) / 2; // Translator-only cost

        // Try learning 0, 1, ..., up to all languages
        for (int k = 0; k <= freq.size(); ++k)
        {
            int learned = prefix[k];
            int remaining = n - learned;
            int cost = k * c + remaining * (remaining + 1) / 2;
            min_cost = min(min_cost, cost);
        }

        cout << min_cost << '\n';
    }

    return 0;
}