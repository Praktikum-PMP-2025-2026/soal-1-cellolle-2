/** EL2008 Praktikum Pemecahan Masalah dengan Pemrograman 2024/2025
 *   Modul               : 1 - Overview C Language
 *   Hari dan Tanggal    : Senin, 20 April 2026
 *   Nama (NIM)          : Marcello Menata Pandiangan (13224069)
 *   Nama File           : tp2_2.c
 *   Deskripsi           : Pemulihan Segmen Fragmen
 * 
 */

 #include <stdio.h>
 #include <string.h>
   
 int main(){
    int MAX_SUM = 0;
    int N;
    scanf("%d", &N);
    int array[N];
    for (int i = 0; i < N; i++) {
        scanf("%d", &array[i]);
    }
    for (int i = N-1; i >= 0; i--) {
        if (array[i] == -1) {
            if (array[i-1] != -1 && array[i+1] != -1) {
                array[i] = (array[i+1] + array [i-1])/2;
            } else if (array[i+1] != -1 && array[i-1] == -1) {
                array[i] = array[i+1] ;
            } else if (array[i+1] == -1 && array[i-1] != -1) {
                array[i] = array[i-1] ;
            } else if (array[i+1] == -1 && (array[i-1] == -1)) {
                array[i] = 0;
            }
        }
    }
    printf ("RECOVERED ") ;
    for (int i = 0; i < N; i++) {
        printf ("%d ",array[i]);
        MAX_SUM = MAX_SUM + array[i];
    }printf("\n");
    printf("MAX_SUM %d",MAX_SUM);
    return 0;
}
