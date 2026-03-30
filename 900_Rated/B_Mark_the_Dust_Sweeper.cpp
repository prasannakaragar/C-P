#include<bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;

        vector<long long> a(n);
        for(int i = 0; i < n; i++){
            cin >> a[i];
        }

        long long sum = 0;
        int zeros = 0;
        bool started = false;

        for(int i = 0; i < n-1; i++){
            if(a[i] > 0) started = true;

            if(started){
                sum += a[i];
                if(a[i] == 0) zeros++;
            }
        }

        cout << sum + zeros << "\n";
    }

    return 0;
}