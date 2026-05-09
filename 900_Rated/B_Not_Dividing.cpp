#include<bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int>vec(n,0);
        for(int i=0;i<n;i++){
            cin>>vec[i];
        }
        for(int i = 0; i < n; i++){
            if(vec[i] == 1){
                vec[i]++;
            }
        }

         for(int i = 0; i < n - 1; i++){
            while(vec[i+1] % vec[i] == 0){
                vec[i+1]++;
            }
        }
        for(int i=0;i<n;i++){
            cout<<vec[i]<<" ";
        }
        cout<<"\n";
    }
    
    return 0;
}