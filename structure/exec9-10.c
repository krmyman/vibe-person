#include<stdio.h>
#include<stdlib.h>
struct pclist
{
    char pcName[20];
    char pcID[10];
    int sales[4];
    float fAve;
}prd[3] = {
        {"pc","p01",1234,2211,3213,4213},
    {"筆電","p02",1233,8212,1279,2130},
    {"手機","p03",2267,3287,5423,3250}
};
int main()
{
    for (int i = 0;i < 3;i++)
    {
        for (int j = 0;j < 4;j++)
            prd[i].fAve += prd[i].sales[j];
        printf("%s 的平均銷量為  %6.2f\n", prd[i].pcName, prd[i].fAve /= 4.0);
    }
    return 0;
}
