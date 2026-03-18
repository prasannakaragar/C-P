#include<bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    int n;
    cin>>n;
    string s;
    cin>>s;
    vector<int>vec(26,0);
    for(int i=0;i<n;i++){
        if(s[i]>='A' && s[i]<='Z'){
            vec[s[i]-'A']++;
        }else{
        vec[s[i]-'a']++;
        }
    }
    for(int i=0;i<26;i++){
        if(vec[i]==0){
            cout<<"NO\n";
            return 0;
        }
    }

    cout<<"YES\n";
    return 0;
}