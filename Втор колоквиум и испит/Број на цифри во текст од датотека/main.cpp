//Да се напише програма во која од дадена датотека со име "input.txt" за секој ред ќе се отпечати бројот на цифри во тој ред,
//знакот :, па самите цифри подредени според ASCII кодот во растечки редослед. Редовите во датотеката не се подолги од 100 знаци.

#include <stdio.h>
#include <string.h>
#include <ctype.h>

void wtf() {
    FILE *f = fopen("input.txt", "w");
    char c;
    while((c = getchar()) != EOF) {
        fputc(c, f);
    }
    fclose(f);
}

void BubbleSort (int a[], int n){
    int i, j, temp;
    for(i=0; i<n; i++){
        for(j=0; j<n-1; j++){
            if(a[j]>a[j+1]){
                temp=a[j+1];
                a[j+1]=a[j];
                a[j]=temp;
            }
        }
    }
}

int main() {
    wtf();
    FILE *f;
    f=fopen("input.txt", "r");
    char c[100];
    int a[100], i=0, brojach=0, n=0, br;
    while(fgets(c, 100, f)!=NULL){
        c[strlen(c)-1]='\0';
        br=strlen(c);
        for(i=0; i<br; i++){
            if(isalnum(c[i])){
                if(!isalpha(c[i])){
                    a[n]=c[i];
                    n++;}
            }
        }
        BubbleSort(a, n);
        printf("%d:", n);
        for(i=0; i<n; i++){
            printf("%c", a[i]);
        }
        printf("\n");
        n=0;
    }
    fclose(f);
    return 0;
}
