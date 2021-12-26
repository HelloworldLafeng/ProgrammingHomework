#include <stdio.h>
#define MAX 20

int main(void)
{
    int matrix[MAX][MAX] = {0};
    int row, column;
    int num;
    int sum = 0;
    scanf("%d %d", &row, &column);
    scanf("%d", &num);
    for(int i = 0; i < num; i++){
        int x, y;
        scanf("%d %d", &x, &y);
        matrix[x - 1][y - 1] = 1;
        matrix[x - 1][y] = 1;
        matrix[x - 1][y + 1] = 1;
        matrix[x][y - 1] = 1;
        matrix[x][y] = 1;
        matrix[x][y + 1] = 1;
        matrix[x + 1][y - 1] = 1;
        matrix[x + 1][y] = 1;
        matrix[x + 1][y + 1] = 1;
    }
    for(int i = 1; i <= row; i++){
        for(int j = 1; j <= column; j++){
            if(matrix[i][j] == 1){
                sum++;
            }
        }
    }
    printf("%d\n", sum);
    return 0;
}