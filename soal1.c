// Praktikum PMP
// Modul: 2
// Nama: Aisyah Dahayu Shabirah
// NIM: 13224059


#include <stdio.h>

void Analisis (int *arr, int n, int *sum, int *max, int *idx, float *avg){
    *sum=0;
    *max=arr[0];
    *avg=0;

    for (int i=0; i<n; i++){
        *sum+=arr[i];
        if (arr[i]>*max){
            *max=arr[i];
            *idx=i;
        }
        *avg=(float)(*sum)/n;
    }

}

int main(){
    int n;
    scanf("%d", &n);

    int arr[n];
    for (int i=0; i<n; i++){
        scanf("%d", &arr[i]); 
    }
    int sum, max, idx;
    float avg;

    Analisis (arr, n, &sum, &max, &idx, &avg);
    printf("SUM %d\n", sum);
    printf("AVG %.2f\n", avg);
    printf("MAX %d\n", max);
    printf("IDX %d\n", idx);
    return 0;
}
