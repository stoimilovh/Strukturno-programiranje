#include <stdio.h>
#define MAX 1000

int main()
{
    int a[MAX], i, n, svpadnati=0, padnati=0, svpolozeni=0, polozeni=0;
    scanf("%d", &n);
    for(i=0; i<n; i++){
        scanf("%d", &a[i]);
    }
    for(i=0; i<n; i++){
        if(a[i]<50){
            svpadnati++;
            padnati+=a[i];
        }
    }
    printf("Sredna vrednost na padnati %.2f\n", (float) padnati/svpadnati);
    for(i=0; i<n; i++){
        if(a[i]<50){
            printf("%d ", a[i]);
        }
    }
    for(i=0; i<n; i++){
        if(a[i]>=50){
            svpolozeni++;
            polozeni+=a[i];
        }
    }
    printf("\nSredna vrednost na polozeni %.2f\n", (float) polozeni/svpolozeni);
    for(i=0; i<n; i++){
        if(a[i]>=50){
            printf("%d ", a[i]);
        }
    }

    return 0;
}
