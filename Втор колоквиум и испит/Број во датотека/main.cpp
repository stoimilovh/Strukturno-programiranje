//Во датотеката podatoci.txt се запишани редови со низи од знаци (секој не подолг од 80 знаци).
//Од стандарден влез се читаат два знака z1 и z2. Да се напише програма со која на стандарден излез ќе се испечатат
//поднизите од секој ред од датотеката составени од знаците што се наоѓаат меѓу z1 и z2 (без нив). Секоја подниза се печати во нов ред.
//Се смета дека секој ред од датотеката точно еднаш ги содржи знаците z1 и z2, знакот z1 секогаш се наоѓа пред знакот z2,
//а меѓу z1 и z2 секогаш има барем еден знак.

#include <stdio.h>
#include <string.h>
#include <ctype.h>

// ne menuvaj ovde
void wf() {
    FILE *f = fopen("podatoci.txt", "w");
    char c;
    while((c = getchar()) != '#') {
        fputc(c, f);
    }
    fclose(f);
}

int main() {
    wf();
    // vasiot kod pocnuva od ovde
    FILE *f;
    f=fopen("podatoci.txt", "r");
    int br=0, i, j, k=0;
    char c[100], m, n, a[100], h;
    scanf("%c%c%c", &h, &m, &n);
    while(fgets(c, 100, f)!=NULL){
        c[strlen(c)-1]='\n';
        br=strlen(c);
        for(i=0; i<br; i++){
            if(c[i]==m){
                strncpy(a, c+i+1, 100);
                br=strlen(a);
                for(i=0; i<br; i++){
                    if(a[i]==n)
                        a[i]='\0';
                }

                printf("%s\n", a);
            }
        }
    }
    fclose(f);
    return 0;
}