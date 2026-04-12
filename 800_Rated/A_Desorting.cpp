#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        vector<long long> a(n);
        for (auto &x : a) cin >> x;

        
        bool ok = false;
        for (int i = 0; i < n - 1; i++) {
            if (a[i] > a[i + 1]) {
                ok = true;
                break;
            }
        }

        if (ok) {
            cout << 0 << '\n';
            continue;
        }

        long long ans = LLONG_MAX;

        for (int i = 0; i < n - 1; i++) {
            long long diff = a[i + 1] - a[i];
            long long k = diff / 2 + 1;
            ans = min(ans, k);
        }

        cout << ans << '\n';
    }

    return 0;
}