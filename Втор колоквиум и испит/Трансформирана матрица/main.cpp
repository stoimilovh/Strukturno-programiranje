//Да се напише програма во која се вчитува матрица од цели броеви A со N редици и N * 2 колони (N не е поголемо од 50).
//Програмата треба да ја трансформира вчитаната матрица во нова матрица B, така што сите елементи десно од N-тата колона
//ќе ги префрли под N-тата редица, односно од матрица со димензија N редици и 2 * N колони ќе се добие
//матрица со 2 * N редици x N колони.

#include <stdio.h>

int main()
{
    int n, m, i, j, a[100][100];
    scanf("%d", &n);
    m=n*2;
    for(i=0; i<n; i++){
        for(j=0; j<m; j++){
            scanf("%d", &a[i][j]);
        }
    }
    for(i=0; i<n; i++){
        for(j=0; j<n; j++){
            printf("%d ", a[i][j]);
        }
        printf("\n");
    }
    for(i=0; i<n; i++){
        for(j=n; j<m; j++){
            printf("%d ", a[i][j]);
        }
        printf("\n");
    }

    return 0;
}
