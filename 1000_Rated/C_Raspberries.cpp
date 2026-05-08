#include<bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while(t--){
        int n,k;
        cin >> n >> k;

        vector<int>a(n);
        for(int i=0;i<n;i++) cin >> a[i];

        int ans = INT_MAX;

        if(k == 4){
            int even = 0;
            vector<int>cost;

            for(int i=0;i<n;i++){
                if(a[i] % 2 == 0) even++;
                cost.push_back((2 - a[i]%2)%2);
            }

            if(even >= 2){
                ans = 0;
            } else if(even == 1){
                ans = 1;
            } else {
                sort(cost.begin(), cost.end());
                ans = cost[0] + cost[1];
            }

            for(int i=0;i<n;i++){
                ans = min(ans, (4 - a[i]%4)%4);
            }
        }
        else{
            for(int i=0;i<n;i++){
                ans = min(ans, (k - a[i]%k)%k);
            }
        }

        cout << ans << "\n";
    }
}