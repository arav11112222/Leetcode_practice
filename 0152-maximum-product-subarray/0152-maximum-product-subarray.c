int maxProduct(int* nums, int n) {
    int mx = nums[0], mn = nums[0], ans = nums[0];

    for (int i = 1; i < n; i++) {
        if (nums[i] < 0) {
            int t = mx;
            mx = mn;
            mn = t;
        }

        mx = mx * nums[i] > nums[i] ? mx * nums[i] : nums[i];
        mn = mn * nums[i] < nums[i] ? mn * nums[i] : nums[i];

        if (mx > ans) ans = mx;
    }

    return ans;
}