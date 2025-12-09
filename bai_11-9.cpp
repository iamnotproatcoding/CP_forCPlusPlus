#include <bits/stdc++.h>
#define int long long
using namespace std;

signed main() {
    ios_base::sync_with_stdio(); cin.tie(0);

    int n;
    cin >> n;

    vector<int> a(n);
    int max = 0;
    for (int i = 0; i < n; i++) {
        cin >> a[i];
        if (a[i] > max) {
            max = a[i];
        }
    }

    sort(a.begin(), a.end());
    for (int i = 1; i < n; i++) {
        if (a[i] - 1 > a[i - 1]) {
            cout << a[i - 1] + 1;
            return 0;
        }
    }

    cout << max + 1;
}