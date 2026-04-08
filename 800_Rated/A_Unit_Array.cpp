#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;

        int cnt_p = 0, cnt_n = 0;

        for(int i = 0; i < n; i++){
            int x;
            cin >> x;
            if(x == 1) cnt_p++;
            else cnt_n++;
        }

        int ans = 0;
        while(cnt_p < cnt_n){
            cnt_p++;
            cnt_n--;
            ans++;
        }
        
        if(cnt_n % 2 == 1){
            ans++;
        }

        cout << ans << "\n";
    }
}