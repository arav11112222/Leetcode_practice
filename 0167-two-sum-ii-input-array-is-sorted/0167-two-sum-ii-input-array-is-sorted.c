int* twoSum(int* a, int n, int target, int* returnSize) {
    int l = 0, r = n - 1;
    int* ans = malloc(2 * sizeof(int));

    while (l < r) {
        int sum = a[l] + a[r];

        if (sum == target) {
            ans[0] = l + 1;
            ans[1] = r + 1;
            *returnSize = 2;
            return ans;
        }

        if (sum < target) l++;
        else r--;
    }

    *returnSize = 0;
    return NULL;
}