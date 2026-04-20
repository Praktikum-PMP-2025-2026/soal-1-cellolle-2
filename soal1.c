#include <stdio.h>

int main() {
    int N;
    if (scanf("%d", &N) != 1) return 0;

    int array[N];
    for (int i = 0; i < N; i++) {
        if (scanf("%d", &array[i]) != 1) break;
    }
    for (int i = 0; i < N; i++) {
        if (array[i] == -1) {
            int kiri = -1;
            int kanan = -1;
            if (i > 0) {
                kiri    = array[i - 1];
            }
            for (int j = i + 1; j < N; j++) {
                if (array[j] != -1) {
                    kanan = array[j];
                    break;
                }
            }
            if (kiri != -1 && kanan != -1) {
                array[i] = (kiri + kanan) / 2;
            } else if (kiri != -1) {
                array[i] = kiri;
            } else if (kanan != -1) {
                array[i] = kanan;
            } else {
                array[i] = 0;
            }
        }
    }

    int MAX_SUM = 0;
    printf("\nRECOVERED ");
    for (int i = 0; i < N; i++) {
        if (array[i] > 0) {
            MAX_SUM += array[i];
        }
        printf("%d%s", array[i], (i == N - 1) ? "" : " ");
    }
    printf("\nMAX_SUM %d\n", MAX_SUM);
    return 0;
}
