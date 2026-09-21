void setZeroes(int** matrix, int n, int* col) {
    int m = col[0];
    int row[n], c[m];

    for (int i = 0; i < n; i++) row[i] = 0;
    for (int j = 0; j < m; j++) c[j] = 0;

    for (int i = 0; i < n; i++)
        for (int j = 0; j < m; j++)
            if (matrix[i][j] == 0)
                row[i] = c[j] = 1;

    for (int i = 0; i < n; i++)
        for (int j = 0; j < m; j++)
            if (row[i] || c[j])
                matrix[i][j] = 0;
}