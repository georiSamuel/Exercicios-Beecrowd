#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define INF 0x3f3f3f3f

int n, c, a, b, x;
int dp[2][2222];
int f[2][2222];

// Função para busca binária manual (equivalente ao lower_bound do C++)
int lower_bound(int arr[], int size, int value) {
    int low = 0, high = size;
    while (low < high) {
        int mid = (low + high) / 2;
        if (arr[mid] < value)
            low = mid + 1;
        else
            high = mid;
    }
    return low;
}

int go(int x, int i) {
    if (x < 0) return 0;
    if (dp[i][x]) return dp[i][x];
    return dp[i][x] = (go(lower_bound(f[i], n, f[i][x] - a) - 1, i) + a < 
                       go(lower_bound(f[i], n, f[i][x] - b) - 1, i) + b) ?
                      go(lower_bound(f[i], n, f[i][x] - a) - 1, i) + a :
                      go(lower_bound(f[i], n, f[i][x] - b) - 1, i) + b;
}

int main() {
    while (scanf("%d%d%d%d", &n, &c, &a, &b) != EOF) {
        // Limpar os arrays f
        memset(f[0], 0, sizeof(f[0]));
        memset(f[1], 0, sizeof(f[1]));

        // Ler os valores de f[0]
        for (int i = 0; i < n; ++i) {
            scanf("%d", &x);
            f[0][i] = x;
        }

        // Construir f[1]
        f[1][0] = f[0][n - 1];
        for (int i = 1; i < n; ++i) {
            f[1][i] = f[0][i - 1] + c;
        }

        // Limpar dp
        memset(dp, 0, sizeof(dp));

        // Imprimir o resultado
        int result = go(n - 1, 0) < go(n - 1, 1) ? go(n - 1, 0) : go(n - 1, 1);
        printf("%d\n", result);
    }
    return 0;
}
