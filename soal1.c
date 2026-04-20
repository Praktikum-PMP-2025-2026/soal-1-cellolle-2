#include <stdio.h>

int main() {
    int N;
    if (scanf("%d", &N));

    int array[N];
    for (int i = 0; i < N; i++) {
        if (scanf("%d", &array[i]));
    }
    for (int i = 0; i < N; i++) {
        if (array[i] == -1) {
            int kiri = -1;
            int kanan = -1;
            if (i > 0) {
                kiri = array[i - 1];
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
    for (int i = 0; i < N-1; i++) {
        if (array[i] > 0) {
            MAX_SUM += array[i];
        }
        printf ("%d ",array[i]);
    }
    printf ("%d\n",array[N-1]);
    if (array[N-1] > 0) {
        MAX_SUM += array[N-1];
    
    printf("MAX_SUM %d",MAX_SUM);
    printf("\nMAX_SUM %d", MAX_SUM);
    return 0;
}
