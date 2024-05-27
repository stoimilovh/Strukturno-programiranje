//Од тастатура се внесуваат димензиите на една матрица (m,n <= 100), а потоа и елементите од матрицата.
//Да се трансформира матрицата така што средниот елемент во секоја редица ќе се замени со разликата
//(по апсолутна вредност) на сумата на елементите во првата половина од редицата и сумата на елементите
//во втората половина на редицата. Ако матрицата има парен број колони, се менува вредноста на средните два елемента.
//Средниот/те елемент/и влегува/ат во сумите (при непарен број на колони, средниот елемент влегува во двете суми!).
//Да се испечати на екран променетата матрица.

#include <stdio.h>

int main()
{
    int m, n, a[100][100], i, j;
    scanf("%d%d", &m, &n);
    for(i=0; i<m; i++){
        for(j=0; j<n; j++){
            scanf("%d", &a[i][j]);
        }
    }

    int prvzbir=0, vtorzbir=0, k, zbir, ed;
    k=(n/2);
    ed=n-(n/2);

    for(i=0; i<m; i++){
        for(j=0; j<n/2; j++){
            prvzbir+=a[i][j];
        }
        for(j=ed; j<n; j++){
            vtorzbir+=a[i][j];
        }
        if(prvzbir>vtorzbir){
            zbir=prvzbir-vtorzbir;
        }
        if(vtorzbir>prvzbir){
            zbir=vtorzbir-prvzbir;
        }
        a[i][k]=zbir;
        if(n%2==0){
            a[i][k-1]=zbir;
        }
        zbir=prvzbir=vtorzbir=0;
    }

    for(i=0; i<m; i++){
        for(j=0; j<n; j++){
            printf("%d ", a[i][j]);
        }
        printf("\n");
    }

    return 0;
}
