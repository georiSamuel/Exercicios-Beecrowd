#include <stdio.h>

int isFibonacci(int num) {
    int a = 1, b = 1;
    if (num == 1) return 1;
    while (b < num) {
        int Fb = b;
        b = a + b;
        a = Fb;
    }
    return b == num;
}

int main() {

  int casos;
  scanf("%d", &casos);

int flag = 0;
    int num = 1;

    while (flag < casos) {
        num++;
        if (!isFibonacci(num)) {
            flag++;
        }
    }

    printf("%d\n", num);
    return 0;
}
