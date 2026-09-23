int* topKFrequent(int* nums, int n, int k, int* returnSize) {
    int* ans = malloc(k * sizeof(int));
    int freq[20001] = {0};

    for (int i = 0; i < n; i++)
        freq[nums[i] + 10000]++;

    int count = 0;

    while (count < k) {
        int max = 0, index = 0;

        for (int i = 0; i < 20001; i++) {
            if (freq[i] > max) {
                max = freq[i];
                index = i;
            }
        }

        ans[count++] = index - 10000;
        freq[index] = 0;
    }

    *returnSize = k;
    return ans;
}