#include<bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    
        int n;
        cin>>n;
        vector<int>vec(n,0);
        for(int i=0;i<n;i++){
            cin>>vec[i];
        }
        int count=0;
        for(int i=0;i<n-1;i++){
            if(__gcd(vec[i],vec[i+1]) != 1){
                count++;
            }
        }
        vector<int> ans;

    for(int i = 0; i < n - 1; i++){
        ans.push_back(vec[i]);

        if(__gcd(vec[i], vec[i+1]) != 1){
            ans.push_back(1); 
        }
    }

    ans.push_back(vec[n-1]);

    cout << ans.size() - n << "\n";

    for(int x : ans){
        cout << x << " ";
    }
    cout << "\n";

    
    

    return 0;
}