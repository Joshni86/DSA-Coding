#include <iostream>
#include <vector>
#include <set>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<vector<int>> a(n, vector<int>(n));
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cin >> a[i][j];
        }
    }
    // dp[row] = list of states
    // each state = pair(sum, used columns)
    vector<vector<pair<int, set<int>>>> dp(n + 1);
    // base case
    dp[0].push_back(make_pair(0, set<int>()));
    for (int row = 0; row < n; row++) {
        for (int i = 0; i < dp[row].size(); i++) {
            int currSum = dp[row][i].first;
            set<int> usedCols = dp[row][i].second;
            for (int col = 0; col < n; col++) {
                if (usedCols.find(col) == usedCols.end()) {
                    set<int> newSet = usedCols;
                    newSet.insert(col);
                    int newSum = currSum + a[row][col];
                    dp[row + 1].push_back(make_pair(newSum, newSet));
                }
            }
        }
    }
    int ans = 0;
    for (int i = 0; i < dp[n].size(); i++) {
        ans = max(ans, dp[n][i].first);
    }
    cout << ans << endl;
    return 0;
}