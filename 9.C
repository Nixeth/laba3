// 9. Дано натуральное число n. Найти значение числа, полученного следующим образом: из записи числа n выбросить цифры 0 и 5, оставив прежним порядок остальных цифр.
#include <stdio.h>
int main(){
    int n, a[15], i, k;
    scanf("%d", &n);
    k = 0;
    while (n){
        a[k] = n % 10;
        n /= 10;
        k++;
    } 
    n = 0;
    for (i = k - 1; i > -1; --i)
        if (a[i] != 0 && a[i] != 5)
            n = n * 10 +a[i];
    printf("%d", n);             
    return 0;
}
