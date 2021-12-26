#include <stdio.h>

int in7(int num){
    while(num != 0){
        int temp = num % 10;
        if(temp == 7){
            return 1;
        }
        num = num / 10;
    }
    return 0;
}

int main(void)
{
    int first, last;
    int sum = 0;
    scanf("%d %d", &first, &last);
    for(int i = first; i <= last; i++){
        if(in7(i) == 1){
            sum++;
        }else{
            if(i % 7 == 0){
                sum++;
            }
        }
    }
    printf("%d\n", sum);
    return 0;
}