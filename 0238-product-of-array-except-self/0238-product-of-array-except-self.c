int* productExceptSelf(int* nums, int n, int* returnSize) {
    int* ans = malloc(n * sizeof(int));
    int p = 1;

    for (int i = 0; i < n; i++) {
        ans[i] = p;
        p *= nums[i];
    }

    p = 1;

    for (int i = n - 1; i >= 0; i--) {
        ans[i] *= p;
        p *= nums[i];
    }

    *returnSize = n;
    return ans;
}