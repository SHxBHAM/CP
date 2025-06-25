#include <bits/stdc++.h>    
using namespace std;
int main() {
    int n, t;
    cin >> n >> t;
    vector<int> k(n);
    for (int i = 0; i < n; i++) {
        cin >> k[i];
    }
    int maxelem = max_element(k.begin(), k.end());


    long long left = 1, right = maxelem * t;  
    while (left < right) {
        long long mid = (left + right) / 2;
        long long totalBalls = 0;

        for (int i = 0; i < n; i++) {
            totalBalls += mid / k[i];
            if (totalBalls >= t) break; 
        }

        if (totalBalls >= t) {
            right = mid; 
        } else {
            left = mid + 1; 
        }
    }

    cout << left << endl; 
    return 0;
}