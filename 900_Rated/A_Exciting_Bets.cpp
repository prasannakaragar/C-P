#include<bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while(t--){
        long long a, b;
        cin >> a >> b;

        if(a == b){
            cout << "0 0\n";
            continue;
        }

        long long d = abs(a - b);
        long long moves = min(a % d, d - (a % d));

        cout << d << " " << moves << "\n";
    }
    return 0;
}