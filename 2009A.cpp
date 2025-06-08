#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector<int> nums;
    for(int i = 0 ; i<n;i++){
        int a;
        int b;
        cin>>a;
        cin>>b;
        nums.push_back(b-a);
    }
    for(int n:nums){
        cout<<n<<endl;
    }
}