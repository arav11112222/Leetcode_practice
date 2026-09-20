int maxArea(int* h, int n) {
    int l = 0, r = n - 1, ans = 0;

    while (l < r) {
        int area = (h[l] < h[r] ? h[l] : h[r]) * (r - l);

        if (area > ans) ans = area;

        if (h[l] < h[r]) l++;
        else r--;
    }

    return ans;
}