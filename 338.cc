class Solution {
 public:
  vector<int> countBits(int num) {
    vector<int> result{};
    result.reserve(num);
    result.emplace_back(0);
    for (int i = 1; i != num + 1; ++i) {
      result.emplace_back(result[i / 2] + (i & 1));
    }
    return result;
  }
};
