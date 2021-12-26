#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int num;
    int bed_num = 1;
    int flag = 0;;
    int *array;
    int *p;
    scanf("%d", &num);
    array = malloc(sizeof(int) * num);
    if(array == NULL){
        return -1;
        //要是失败了扔下-1
    }
    p = array;
    for(int i = 0; i < num; i++){
        scanf("%d", p);
        p++;
    }
    while(flag == 0){
        int bed[10000] = {0};
        flag = 1;
        p = array;
        for(int i = 0; i < num; i++){
            int temp = *p % bed_num;
            if(bed[temp] == 0){
                bed[temp] = 1;
            }else{
                bed_num++;
                flag = 0;
                break;
            }
            p++;
        }
        if(flag == 1){
            break;
        }
    }
    printf("%d\n", bed_num);
    free(array);
    return 0;
}