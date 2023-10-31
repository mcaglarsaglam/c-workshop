
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int thebiggest(int A[], int factor)
{
    int i, enb;
    enb = A[0];
    for (i = 1; i < factor; i++)
    {
        if (A[i] > enb)
        {
            enb = A[i];
        }
    }
    return enb;
}

int smallest(int A[], int factor)
{
    int i, enk;
    enk = A[0];
    for (i = 1; i < factor; i++)
    {
        if (A[i] < enk)
        {
            enk = A[i];
        }
    }
    return enk;
}

int main()
{

    // Bilgisayar tarafından rastgele üretilen N adet sayı bir dizide
    // tutulmaktadır.Dizi içerisindeki max ve min değerlerin iki ayrı fonksiyon
    // kullanarak bulunmasını sağlayan C programını yazınız.

    int n;
    int i;
    printf("How many will be produced?\n");
    scanf("%d", &n);
    int dizi[n];
    srand(time(0));
    printf("array elements\n");

    for (i = 0; i < n; i++)
    {
        dizi[i] = rand() % 100;
        printf("%d\n", dizi[i]);
    }

    printf("\nthebiggest=%d\n", thebiggest(dizi, n));
    printf("\nsmallest=%d\n", smallest(dizi, n));

    return 0;
}