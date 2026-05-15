#include <stdio.h>

int main()
{
    int i,n, a[50];
    do{
        printf("Nhap so luong phan tu cua mang: ");
        scanf("%d", &n);
    }while (n>50 || n<3);
    printf("Nhap cac phan tu cua mang: \n");
    for(i=0; i<n; i++)
    {
        printf("Nhap a[%d] = ",i);
        scanf("%d", &a[i]);
    }
    printf("Mang vua nhap la: ");
    for(i=0; i<n; i++)
        printf("%d\t", a[i]);
    return 0;
}