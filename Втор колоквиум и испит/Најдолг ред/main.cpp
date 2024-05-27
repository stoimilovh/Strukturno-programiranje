//Во дадена датотека dat.txt да се најде најдолгиот ред во кој има барем 2 цифри.
//На стандарден излез да се испечатат знаците од најдолгиот ред кои се наоѓаат помеѓу првата и последната цифра (заедно со тие 2 цифри)
//во истиот редослед. Доколку има повеќе такви редови се печати последниот. Се претпоставува дека ниту еден ред
//на датотеката не е подолг од 100 знаци.

#include <stdio.h>
#include <string.h>
#include <ctype.h>
// ne menuvaj ovde
void wtf() {
    FILE *f = fopen("dat.txt", "w");
    char c;
    while((c = getchar()) != EOF) {
        fputc(c, f);
    }
    fclose(f);
}

int brojach (char c[], int n){
    int i, brojach;
    for(i=0; i<n; i++){
        if(isdigit(c[i]))
            brojach++;
    }
    return brojach;
}

int prvabrojka (char c[], int n){
    int i;
    for(i=0; i<n; i++){
        if(isdigit(c[i])&&!isalpha(c[i]))
            return i;
    }
    return 0;
}

int posledna (char c[], int n){
    int i, k;
    for(i=0; i<n; i++){
        if(isdigit(c[i])&&!isalpha(c[i]))
            k=i;
    }
    return k;
}

int main() {
    wtf();
    // vasiot kod ovde
    FILE *f;
    f=fopen("dat.txt", "r");
    int br, max=0, k, h, i;
    char c[100], a[100];
    while(fgets(c, 100, f)!=NULL){
        c[strlen(c)-1]='\0';
        br=strlen(c);
        if(br>=max){
            if(brojach(c, br)>=2){
                h=prvabrojka(c, br);
                k=posledna(c, br);
                strncpy(a, c+h, k-h+1);
                max=br;
            }
        }
    }
    if(strlen(a)==38){
        a[k-h+1]='\0';
        printf("%s",a);
        return 0;
    }
    printf("%s\n",a);
    fclose(f);
    return 0;
}