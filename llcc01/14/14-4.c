#include <stdio.h>
typedef struct
{
    char name[11];
    long long id;
    int score[3];
    double score_avg;
} student;

int main()
{
    student s[130];
    long long op_id;
    int n, i, j, cmd, sn = 0, is_exist; //sn为最大索引+1
    student t;//输入缓冲
    scanf("%d", &n);
    for (i = 0; i < n; i++)
    {
        scanf("%d", &cmd);
        scanf("%lld", &op_id);
        for (j = 0; j < sn; j++)
        {
            if (s[j].id == op_id)
            {
                break;
            }
        }
        is_exist = j != sn;
        switch (cmd)
        {
        case 1:
            //找空位
            for (j = 0; j < sn; j++)
            {
                if (s[j].id == 0)
                {
                    break;
                }
            }
            t.id = op_id;
            scanf("%s%d%d%d", &t.name, &t.score[0], &t.score[1], &t.score[2]);
            t.score_avg = (t.score[0] + t.score[1] + t.score[2]) / 3.0;
            if (!is_exist)
            {
                s[j]=t;
                if (sn < j + 1)
                {
                    sn = j + 1;
                }
                printf("Add success\n");
            }
            else
            {
                printf("Students already exist\n");
            }
            break;
        case 2:
            if (is_exist)
            {
                s[j].id = 0;
                printf("Delete success\n");
            }
            else
            {
                printf("Students do not exist\n");
            }
            break;
        case 3:
            scanf("%d%d%d", &t.score[0], &t.score[1], &t.score[2]);
            if (is_exist)
            {
                s[j].score[0]=t.score[0];
                s[j].score[1]=t.score[1];
                s[j].score[2]=t.score[2];
                s[j].score_avg = (s[j].score[0] + s[j].score[1] + s[j].score[2]) / 3.0;
                printf("Update success\n");
            }
            else
            {
                printf("Students do not exist\n");
            }
            break;
        case 4:
            if (is_exist)
            {
                printf("Student ID:%d\nName:%s\nAverage Score:%.1lf\n", s[j].id, s[j].name, s[j].score_avg);
            }
            else
            {
                printf("Students do not exist\n");
            }
            break;
        }
    }
    return 0;
}
