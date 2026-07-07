#include<bits/stdc++.h>
using namespace std;

#define endl '\n'

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;

    while (t--) {
        int n, k;
        cin >> n >> k;

        vector<pair<int,int>> v;

        for (int i = 1; i <= n; i++) {
            long long x;
            cin >> x;

            int rem = x % k;
            if (rem == 0) rem = k;

            v.push_back({rem, i});
        }

        sort(v.begin(), v.end(), [](auto &a, auto &b) {
            if (a.first != b.first)
                return a.first > b.first;
            return a.second < b.second;
        });

        for (auto &p : v)
            cout << p.second << " ";
        cout << endl;
    }

    return 0;
}