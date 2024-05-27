//Од тастатура се внесуваат димензиите m и n на матрица од цели броеви, Аmxn, ( 0 < m, n < 30 ) и нејзините елементи.
//Потоа се внесуваат два цели броја r и k  (индекси на редица/колона од матрицата, т.е. 0 <= r < m и 0 <= k < n).
//
//Да се напише програма која ja трансформира матрицата А така што елементите над редицата r и лево од колоната k
//се заменуваат со минималната вредност од матрицата А.
//
//Новодобиената матрица да се запише во датотека "matrica.txt".

#include <stdio.h>
void printFile() {
    FILE *f=fopen("matrica.txt","r");
    char line[1000];
    while(!feof(f)){
        fgets(line,1000,f);
        if (feof(f))
            break;
        printf("%s",line);
    }
    fclose(f);
}

int main() {
    //Vasiot kod tuka
    FILE *f;
    f=fopen("matrica.txt", "w");
    int m, n, r, k, i, j, a[100][100], min;
    scanf("%d%d%d%d", &m, &n, &r, &k);
    for(i=0; i<m; i++){
        for(j=0; j<n; j++){
            scanf("%d", &a[i][j]);
        }
    }
    min=a[0][0];
    for(i=0; i<m; i++){
        for(j=0; j<n; j++){
            if(min>a[i][j]){
                min=a[i][j];
            }
        }
    }
    for(i=0; i<m; i++){
        for(j=0; j<n; j++){
            if(i<r&&j<k){
                a[i][j]=min;
            }
        }
    }
    for(i=0; i<m; i++){
        for(j=0; j<n; j++){
            fprintf(f, "%d ", a[i][j]);
        }
        fprintf(f, "\n");
    }
    fclose(f);
    // do tuka
    printFile();
    return 0;
}