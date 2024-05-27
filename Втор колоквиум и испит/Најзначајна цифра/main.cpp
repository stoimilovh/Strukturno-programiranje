//Во дадена датотека “broevi.txt” се запишани повеќе редови со броеви така што секој ред започнува со еден цел број (N>=1)
//што означува колку броеви следуваат по него во тој ред. Да се напише програма која на СИ за секој ред ќе го испечати бројот
//со најголема најзначајна цифра. Читањето на броеви завршува кога ќе се прочита 0.

#include <stdio.h>
#include <string.h>
#define MAX 100

//ne menuvaj!
void wtf() {
    FILE *f = fopen("broevi.txt", "w");
    char c;
    while((c = getchar()) != EOF) {
        fputc(c, f);
    }
    fclose(f);
}

int mx (int *a, int n, int maxim){
    int i, k;
    for(i=0; i<n; i++){
        k=a[i];
        while(k>0){
            if(k<10&&k==maxim){
                return a[i];
            }
            k/=10;
        }
    }
    return 0;
}

int main()
{
    wtf();

    // vashiot kod ovde
    FILE *f;
    f=fopen("broevi.txt", "r");
    int n=1, max=0, i, k, a[100], h;
    while(n>0){
        if(!feof(f)){
            fscanf(f, "%d", &n);
        }
        for(i=0; i<n; i++){
            fscanf(f, "%d", &a[i]);
        }
        for(i=0; i<n; i++){
            k=a[i];
            while(k>0){
                if(k<10){
                    if(k>max){
                        max=k;
                    }
                }
                k/=10;
            }
        }
        h=mx(a, n, max);
        max=0;
        if(h>0)
            printf("%d\n", h);
    }
    fclose(f);
    return 0;
}