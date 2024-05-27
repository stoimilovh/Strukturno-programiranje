//Дадена е текстуална датотека (livce.txt) која претставува ливче во спортска обложувалница.
//На почетокот во датотеката, во посебен ред е запишана сумата на уплата (цел број).
//Потоа во секој ред од датотеката е запишан по еден тип во следниот формат:
//
//ab12 1 1.25
//Првиот број е шифрата на типот (низа од знаци која не е подолга од 9 знаци),
//вториот број е типот (може да биде 1, 0 или 2) додека третиот број е коефициентот (реален број).
//Ваша задача е да се испечати типот со најголем коефициент како и можната добивка на ливчето.
//Доколку има повеќе типови со ист максимален коефициент, да се испечати првиот.
//Можната добивка се пресметува како производ на сите коефициенти со сумата на уплата.

#include <stdio.h>
#include <string.h>
#include <ctype.h>

// ne menuvaj ovde
void wf() {
    FILE *f = fopen("livce.txt", "w");
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
    f=fopen("livce.txt", "r");
    int tip, m, t;
    double fi=0, koef, zbir=1, dobivka;
    char c[100], a[100];
    fscanf(f, "%d", &m);
    while(fscanf(f, "%s %d %lf", c, &tip, &koef)!=EOF){
        zbir*=koef;
        if(koef>fi){
            strcpy(a, c);
            fi=koef;
            t=tip;
        }
    }
    printf("%s %d %.2lf\n", a, t, fi);
    printf("%.2lf", m*(double)zbir);
    fclose(f);
    return 0;
}