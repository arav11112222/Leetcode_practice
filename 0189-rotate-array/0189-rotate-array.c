void rev(int* a, int l, int r) {
    while (l < r) {
        int t = a[l];
        a[l++] = a[r];
        a[r--] = t;
    }
}

void rotate(int* nums, int n, int k) {
    k %= n;

    rev(nums, 0, n - 1);
    rev(nums, 0, k - 1);
    rev(nums, k, n - 1);
}