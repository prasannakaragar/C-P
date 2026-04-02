#include<bits/stdc++.h>
using namespace std;
int main(){
    string curr;
    cin>>curr;
    string ans=".";
    for(int i=0;i<curr.size();i++){
       char ch=curr[i];
       if(ch=='A' || ch=='O' || ch=='Y' || ch=='E' || ch=='U' || ch=='I'|| ch=='a' || ch=='o' || ch=='y' || ch=='e' || ch=='u' || ch=='i'){
       }else if(ch>='A' && ch<='Z'){
            ans+=(ch-'A'+'a');
            ans+='.';
       }else{
            ans+=ch;
            ans+='.';
       }
    }
    cout<<ans.substr(0,ans.size()-1)<<"\n";
    return 0;
}