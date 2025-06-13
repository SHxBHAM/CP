#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int> nums;;
    for(int i=0;i<4;i++){
        int tmp;
        cin>>tmp;
        nums.push_back(tmp);
    }
    int maxN = INT_MIN;
    for(int n:nums){
        maxN = max(n,maxN);
    }
    for(int n:nums){
        if(maxN-n>0){
            cout<<maxN-n<<" ";
        }
    }
    
}

