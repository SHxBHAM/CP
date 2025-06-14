
#include<bits/stdc++.h>
using namespace std;
string oddDivisor(long long n){
    if(n == 1){
        return "NO";
    }
    while(n % 2 == 0){
        n /= 2;
    }
    if(n > 1){
        return "YES";
    } else {
        return "NO";
    }
}
int main(){
    int n;
    cin>>n;
    vector<long long> nums;
    for(int i = 0 ; i < n; i++){
        long long tmp;
        cin>>tmp;
        nums.push_back(tmp);
    }

    for(long long n: nums){
        cout<<oddDivisor(n)<<endl;
    }
}