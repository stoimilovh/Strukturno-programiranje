//Во рамките на текстуална датотека matrica.txt се сместени елементите од една матрица (A),
//составена од природни броеви. Во првиот ред од датотеката се запишани бројот на редици N
//и бројот на колони M на матрицата (N, M < 100). Потоа, во секој ред од датотеката се
//запишани елементите од соодветната редица на матрицата.
//
//За секоја редица, да се испечати индексот на редицата и бројот на
//штосни броеви во таа редица во формат indeks_na_redica: broj_na_stosni_broevi_vo_taa_redica (види тест пример).
//
//Штосен број е број чија парност е иста со парноста на збирот од индексите на редицата и колоната на елементот.

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
    int m, n, i, j, a[100][100], brojach=0, zbir;
    fscanf(f, "%d %d", &m, &n);
    for(i=0; i<m; i++){
        for(j=0; j<n; j++){
            fscanf(f, "%d", &a[i][j]);
        }
    }
    for(i=0; i<m; i++){
        for(j=0; j<n; j++){
            zbir=i+j;
            if(zbir%2==0&&a[i][j]%2==0)
                brojach++;
            else if(zbir%2!=0&&a[i][j]%2!=0)
                brojach++;
        }
        printf("%d: %d\n", i, brojach);
        brojach=0;
    }
    fclose(f);
    return 0;
}
