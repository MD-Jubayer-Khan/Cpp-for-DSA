#include <bits/stdc++.h>

using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    cin >> t;

    while (t--){
        int n, m, k;
        cin >> n >> m >> k;
        vector<int> left(n);
        vector<int> right(m);
        for (int i = 0; i < n; ++i) cin >> left[i];
        for (int i = 0; i < m; ++i) cin >> right[i];
        sort(left.begin(), left.end());
        sort(right.begin(), right.end());

        int count = 0;
        for (int i = 0; i < n; i++){
            for (int j = 0; j < m; j++){
                if (left[i] + right[j] <= k)
                    count++;
                else
                    break;
            }
        }

        cout << count << endl;
    }

    return 0;
}
