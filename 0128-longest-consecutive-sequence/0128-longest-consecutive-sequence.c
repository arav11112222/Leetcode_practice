int cmp(const void* a, const void* b) {
    return *(int*)a - *(int*)b;
}

int longestConsecutive(int* nums, int n) {
    if (n == 0) return 0;

    qsort(nums, n, sizeof(int), cmp);

    int ans = 1, count = 1;

    for (int i = 1; i < n; i++) {
        if (nums[i] == nums[i - 1] + 1)
            count++;
        else if (nums[i] != nums[i - 1])
            count = 1;

        if (count > ans)
            ans = count;
    }

    return ans;
}