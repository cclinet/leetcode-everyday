class Solution {
 public:
  int removeDuplicates(vector<int>& nums) {
    if (nums.size() == 0) {
      return 0;
    }
    int cur = nums[0];
    size_t i = 1;
    for (size_t j = 1; j != nums.size(); ++j) {
      if (nums[j] != cur) {
        cur = nums[j];
        nums[i] = cur;
        ++i;
      }
    }
    return i;
  }
};
