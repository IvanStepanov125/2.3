#include <stdio.h>
#include <windows.h>
#include <locale.h>


int main() {
    setlocale(LC_ALL, "Rus");
    SetConsoleCP(1251);
    int x, y;
    scanf("%d %d", &x, &y);
    if ((x >= 0) && (y > 0))
        printf("Первая четверть");

    if ((x <= 0) && (y > 0))
        printf("Вторая четверть");

    if ((x < 0) && (y <= 0))
        printf("Третья четверть");

    if ((x > 0) && (y < 0))
        printf("Четверть четверть");
        
    return 0;
}