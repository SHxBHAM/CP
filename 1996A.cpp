#include<bits/stdc++.h>
using namespace std;

void Answerfunc(int n){
    cout<<(n+3)/4<<endl;
}
int main(){
    vector<int> Arr;
    int n;
    cin>>n;
    for(int i = 0 ;i<n;i++){
        int tmp;
        cin>>tmp;
        Arr.push_back(tmp);
    }
    for(int n:Arr){
        Answerfunc(n);
    }
    
}
