#include <bits/stdc++.h>
using namespace std;

void AnswerFunc(vector<string> &strs, long long n, long long k, long long x) {
    long long minPossibleVal = (k * (k + 1)) / 2;
    long long maxPossibleVal = ((n * (n + 1)) / 2) - ((n - k) * (n - k + 1)) / 2;
    
    if (minPossibleVal <= x && x <= maxPossibleVal) {
        strs.push_back("YES");
    } else {
        strs.push_back("NO");
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    vector<string> strs;
    while (t--) {
        long long n, k, x;
        cin >> n >> k >> x;
        AnswerFunc(strs, n, k, x);
    }

    for (const string &s : strs) {
        cout << s << '\n';
    }
}
