#include <stdio.h>

int main() {
    int i = 0, toplam_deger = 0;
    int n;
    printf("Lütfen n değerini giriniz> ");
    scanf("%d", &n);
    while (i <= n) {
        toplam_deger += i * i;
        i++;
    }
    printf("Sonuç: %d\n", toplam_deger);
    return 0;
}