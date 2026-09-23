int findMaxLength(int* nums, int n) {
    int first[2 * n + 1];

    for (int i = 0; i <= 2 * n; i++)
        first[i] = -2;

    first[n] = -1;

    int sum = 0, ans = 0;

    for (int i = 0; i < n; i++) {
        sum += nums[i] == 1 ? 1 : -1;

        if (first[sum + n] != -2) {
            int len = i - first[sum + n];

            if (len > ans) ans = len;
        }
        else
            first[sum + n] = i;
    }

    return ans;
}