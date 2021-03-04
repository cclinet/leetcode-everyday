class Solution {
public:
int maxEnvelopes(vector<vector<int>>& envelopes) {
    if (envelopes.empty()) {
        return 0;
    }
    sort(envelopes.begin(), envelopes.end(),
         [](const vector<int>& v1, const vector<int>& v2) {
             return v1[0] < v2[0] || (v1[0] == v2[0] && v1[1] > v2[1]);
         });
    vector<int> dp(envelopes.size(), 1);
    for (size_t i = 1; i != envelopes.size(); ++i) {
        for (size_t j = 0; j != i; ++j) {
            if (envelopes[j][1] < envelopes[i][1]) {
                dp[i] = max(dp[i], dp[j] + 1);
            }
        }
    }
    return *max_element(dp.begin(), dp.end());
}
};
