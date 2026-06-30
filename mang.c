#include <stdio.h>

int main()
{
    int i, j, n, m;
    float b[10][5];
    do{
        printf("Nhap so dong cua mang n: ");
        scanf("%d", &n);
    }while (n>10 || n<2);
    do{
        printf("Nhap so cot cua mang m: ");
        scanf("%d", &m);
    }while (m>5 || m<2);
    printf("Nhap mang: \n");
    for(i=0; i<n; i++)
        for(j=0; j<m; j++)
        {
            printf("\tNhap b[%d][%d]= ", i,j);
            scanf("%f",&b[i][j]);
        }
    printf("Hien thi mang:\n");
    for (i = 0; i < n; i++){
        for (j = 0; j < m; j++){
            printf("%6.2f\t", b[i][j]);
        }
        printf("\n");
    }
}