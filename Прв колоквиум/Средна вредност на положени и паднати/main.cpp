//Од тастатура се внесува колку студенти полагале колоквиум и потоа се внесуваат поените на сите кои полагале.
//Програмата треба да отпечати средна вредност на поените на сите студенти кои имале помалку од 50 поени,
//како и список на студентите со повеќе од 50 поени. Исто така програмата да отпечати средна вредност на поените
//на сите кои положиле со најмалку 50 поени и нивните освоени поени (редоследот на печатење во двата случаеви треба
//да биде ист како и редоследот на внесување). Максималниот број на студенти што може да се внесат е 1000.
//
//Напомена: Оваа задача е за материјалот наменет за втор колоквиум и истата се решава со користење на низи.
//
//Влез:
//
//10 //Kolku studenti?
//
//20 10 50 60 70 90 40 20 70 90 //Poeni?
//
//Излез
//
//Sredna vrednost na padnati 22.50
//
//20 10 40 20
//
//Sredna vrednost na polozeni 71.67
//
//50 60 70 90 70 90

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
