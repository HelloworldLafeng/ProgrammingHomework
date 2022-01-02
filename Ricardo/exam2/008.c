#include <stdio.h>

#define MAXLEN 500000
void sortAndOutput(int *data, int size);

int main()
{
    int data[MAXLEN];
    int n, i;

    scanf("%d", &n);
    for (i = 0; i < n; i++)
        scanf("%d", &data[i]);

    sortAndOutput(data, n);

    return 0;
}

/* 请在这里填写答案 */
void sortAndOutput(int *data, int size)
{
    int *p = data;
    int *p_array[1000];
    int pos = 0;
    for(int i = 0; i < size;){
        p_array[pos] = p;
        pos++;
        p++;
        i = i + 2 + *p;
        p = p + *p + 1;
    }
    for(int i = 0; i < pos; i++){
        for(int j = 0; j < pos - i - 1; j++){
            if(*p_array[j] > *p_array[j + 1]){
                int *temp = p_array[j];
                p_array[j] = p_array[j + 1];
                p_array[j + 1] = temp;
            }
        }
    }
    for(int i = 0; i < pos; i++){
        int *temp = p_array[i];
        printf("%d ", *temp);
        temp++;
        int sum = *temp;
        printf("%d ", sum);
        for(int j = 0; j < sum; j++){
            temp++;
            if(j == sum - 1){
                printf("%d\n", *temp);
                break;
            }
            printf("%d ", *temp);
        }
    }
}