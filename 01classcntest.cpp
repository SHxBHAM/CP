#include <bits/stdc++.h>
using namespace std;
void printVector(vector<int> nums){
    for(int n:nums){
        cout<<n<<" ";
    }
}
vector<int> answer(vector<int>nums, int k){
    int currMax = 0;
    vector<int> ans;
    if(k == 0 || nums.size() == 0){
        return ans;
    }
    for(int i = 0 ; i < k;i++){
        currMax = max(currMax,nums[i]);
        ans.push_back(currMax);
    }
    for(int i = k;i<nums.size();i++){
        if(nums[i]>currMax){
            currMax = max(nums[i],currMax);
        }
        ans.push_back(currMax);
    }
    return ans;
}
int main()
{
    int n;
    cin>>n;
    vector<int> nums;
    for(int i = 0 ; i <n;i++){
        int tmp;
        cin>>tmp;
        nums.push_back(tmp);
    }
    int k;
    cin>>k;
    printVector(answer(nums,k));
    return 0;
}
