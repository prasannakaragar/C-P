#include<bits/stdc++.h>
using namespace std;

int main(){
    
    int t;
    cin>>t;
    while(t-->0){
        int n;
        string s;
        cin>>n>>s;
        int count=1;
        for(int i=0;i<n;i++){
            if(s[i] == 'L'){
                cout<<count<<"\n";
                break;
            }else{
                count++;
            }
        }
    }
    return 0;
}