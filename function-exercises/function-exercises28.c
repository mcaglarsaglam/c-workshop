
#include <math.h>
#include <stdio.h>
#include <stdlib.h>

void combine(int A[], int B[], int C[], int N, int K)
{
    int i, j, counter = 0;

    for (i = 0; i < N; i++)
    {
        C[counter] = A[i];
        counter++;
    }

    for (j = 0; j < K; j++)
    {
        C[counter] = B[j];
        counter++;
    }
}

int main()
{
    // Kullanıcı tarafından girilen A ve B dizilerine sırasıyla N ve K adet
    // tamsayı girilmektedir.Bu iki dizinin birleştirilerek tek bir dizi haline
    // getirilmesini sağlayan C programını aşağıdaki fonksiyon prototipini
    // kullanarak yazınız.
    // void birleştir(int A[],int B[],int C[],int K,int N)

    int N, K, i;
    printf("Enter the number of elements of the first array: ");
    scanf("%d", &N);
    int A[N];

    for (i = 0; i < N; i++)
    {
        printf("A[%d] = ", i);
        scanf("%d", &A[i]);
    }

    printf("Enter the number of elements of the second array: ");
    scanf("%d", &K);
    int B[K];

    for (i = 0; i < K; i++)
    {
        printf("B[%d] = ", i);
        scanf("%d", &B[i]);
    }

    int unified[N + K];
    combine(A, B, unified, N, K);

    printf("Unified array: ");
    for (i = 0; i < N + K; i++)
    {
        printf("%3d ", unified[i]);
    }
    printf("\n");

    return 0;
}