#include<bits/stdc++.h>
using namespace std;

int main(){
    int t ;
    cin>>t;
    while(t--){
        unordered_map<char,int> mpp;
        int n;
        cin>>n;
        string str;
        cin>>str;
        for(auto s:str){
            mpp[s]++;
        }
        int ans = 0;
        for(auto& m:mpp){
            ans  += m.second +1;
        }
        cout<<ans<<endl;
    }
}