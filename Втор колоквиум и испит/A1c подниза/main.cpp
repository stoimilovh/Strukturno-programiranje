//Од стандарден влез се чита цел број N (N<100) и потоа N низи од знаци. Низите знаци содржат букви, цифри и специјални знаци,
//а секоја од нив не е поголема од 50 знаци.
//
//Да се напише програма што ќе ги отпечати на екран сите низи од знаци во кои се содржи поднизата А1c  најмалку 2 пати
//(пр. A1c01АA1c92, 12A1cwwA1cxy, аA1cwA1cA1ccA1cxab) според редоследот како што се прочитани од влезот. При печатење на зборовите,
//сите алфабетски знаци треба да се испечатат со мали букви.

#include <stdio.h>
#include <string.h>
#include <ctype.h>

void lower (char c[], int n){
    int i;
    for(i=0; i<n; i++){
        c[i]=tolower(c[i]);
    }
}

int sodrzi (char c[], int  n){
    int i, brojach=0;
    for(i=0; i<n; i++){
        if(c[i]=='a'&&c[i+1]=='1'&&c[i+2]=='c'){
            brojach++;
        }
    }
    return brojach;
}

int main() {
    int n, br, i=0;
    char c[100];
    scanf("%d\n", &n);
    while(i<n){
        fgets(c, sizeof(c), stdin);
        c[strlen(c)-1]='\0';
        br=strlen(c);
        lower(c, br);
        if(sodrzi(c, br)>=2)
            printf("%s\n", c);
        i++;
    }
    return 0;
}