int diagonalSum(int A[10][10], int n) {
    int sum = 0;
    for (int i = 0; i < n; i++)
        sum += A[i][i];
    return sum;
}
