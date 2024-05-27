//Од стандарден влез се чита цел број N (N<=100) и потоа N низи од знаци.
//Низите знаци содржат букви, цифри и специјални знаци (без знаци за празно место), а секоја од нив не е подолга од 80 знаци.
//Да се напише програма со која што на стандарден излез ќе се отпечати најдолгата низа, којашто е палиндром
//(се чита исто од од лево на десно и од десно на лево) и што содржи барем еден специјален знак. Ако нема такви низи,
//се печати "Nema!". Ако има две или повеќе низи што го задоволуваат овој услов, се печати првата низа којашто го задоволува условот.

#include <stdio.h>
#include <string.h>
#include <ctype.h>

int palindrom (char *c, int br){
    int i, j;
    for(i=0; i<br/2; i++){
        if(*(c+i)!=*(c+br-1-i))
            return 0;
    }
    return 1;
}

int znak (char *c){
    int i, n=strlen(c);
    for(i=0; i<n; i++){
        if(!isalnum(*(c+i)))
            return 1;
    }
    return 0;
}

int main(){
    int n, i=0, br, k=0, flag=0;
    char c[80], a[80];
    scanf("%d\n", &n);
    while(i<n){
        fgets(c, sizeof(c), stdin);
        c[strlen(c)-1]='\0';
        br=strlen(c);
        if(znak(c)){
            if(palindrom(c, br)&&br>k){
                strcpy(a, c);
                k=strlen(a);
                flag=1;
            }
        }
        i++;
    }
    if(flag==1)
        printf("%s", a);
    else
        printf("Nema!");
    return 0;
}