#include <stdio.h>

int main(void)
{
    int num;
    char zhi[] = {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K', 'L'};
    scanf("%d", &num);
    //784也是甲子年
    for(int i = 0; i < num ; i++){
        int year;
        int gan;
        char zhi_result;
        scanf("%d", &year);
        year = (year - 784) % 60;
        gan = year % 10;
        zhi_result = zhi[year % 12];
        printf("%d%c\n", gan, zhi_result);
    }
    return 0;
}