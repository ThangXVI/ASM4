#include <stdio.h>

int main() {
    int n;
    printf("Nhap n: ");
    scanf("%d", &n);

    printf("Cac so le nho hon %d la: ", n);
    for (int i = 1; i < n; i += 2) {
        printf("%d ", i);
    }
}

