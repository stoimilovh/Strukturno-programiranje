//Во рамките на текстуална датотека matrica.txt се сместени елементите (целобројни вредности) од една матрица (A).
//Во првиот ред од датотеката се запишани бројот на редици n и бројот на колони m на матрицата (n, m < 120).
//Потоа, во секој ред од датотеката се запишани елементите од соодветната редица на матрицата.
//
//Да се испечати колку индексни броеви има во секоја колона поединечно.
//Индексен број е број чија вредност е идентична со вредноста што се добива со спојување на индексот од редицата и колоната на елементот.

#include<stdio.h>
#include<ctype.h>
#include<string.h>

void wtf() {
    FILE *f = fopen("matrica.txt", "w");
    char c;
    while((c = getchar()) != '#') {
        fputc(c, f);
    }
    fclose(f);
}

int main() {
    wtf();
    //vasiot kod ovde
    FILE *f;
    f=fopen("matrica.txt", "r");
    int m, n, i, j, brojka, a[1000][1000], brojach=0;;
    if(!feof(f)){
        fscanf(f, "%d %d", &m, &n);
    }
    for(i=0; i<m; i++){
        for(j=0; j<n; j++){
            fscanf(f, "%d", &a[i][j]);
        }
    }
    j=0;
    while(j<n){
        for(i=0; i<m; i++){
            if(i<1000&&j<10){
                brojka=(i*10)+j;}
            else if(i<1000&&j>9&&j<99){
                brojka=(i*100)+j;}
            if(a[i][j]==brojka){
                brojach++;
            }
        }
        printf("%d\n", brojach);
        brojach=0;
        j++;
    }
    fclose(f);
    return 0;
}
