#include <stdio.h>

int main(void)
{
    float father_h;
    float mather_h;
    int sex;
    float result;
    scanf("%f %f %d", &father_h, &mather_h, &sex);
    switch (sex)
    {
    case 1:
        result = (father_h + mather_h) * 1.08 / 2.0;
        break;
    case 0:
        result = (father_h * 0.923 + mather_h) / 2.0;
        break;
    }
    printf("%.2f\n", result);
    return 0;
}