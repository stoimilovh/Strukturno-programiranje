//Еден елемент се заматува ако се најде аритметичка средина на елементот и сите негови соседи. Сосед на еден елемент се сите елементи
//кои припаѓаат на матрицата и се  околу истиот елемент (хоризонтално, вертикално и дијагонално).
//
//Во датотеката input.txt е сместена матрица од реални броеви (3 < n,m < 50). Во првиот ред се дефинирани бројот на редици
//и колони на матрицата и во секој преостанат ред е внесен еден ред од матрицата (види пример).По читањето на матрицата,
//од стандарден влез се внесуваат и 2 пара координати на матрицата (ред и колона) кои го репрезентираат горниот-лев и
//долниот-десен елемент од регионот. Потребно е да генеирате нова матрица во која ќе ги заматите сите елементи кои припаѓаат на регионот.
//Новодобиената матрица, во истиот формат, треба да се запише во датотеката output.txt.
//
//Пример:
//датотека: input.txt
//
//3 4
//1.00 2.00 3.00 4.00
//5.00 6.00 7.00 8.00
//9.00 0.00 1.00 2.00
//
//Стандарден влез:
//
//0 1
//2 2
//Резултат:
//
//датотека: output.txt
//3 4
//1.00 4.00 5.00 4.00
//5.00 3.78 3.67 8.00
//9.00 4.67 4.00 2.00

#include <stdio.h>
#include <math.h>

#define MAX 50

void printFile() {

    FILE *f=fopen("output.txt","r");
    char line[1000];
    while(!feof(f)){
        fgets(line,1000,f);
        if (feof(f))
            break;
        printf("%s",line);
    }
    fclose(f);
}

void wtf(){
    FILE *f=fopen("input.txt","w");

    int row,column,i,j;
    float el;
    scanf("%d %d", &row, &column);

    fprintf(f,"%d %d\n",row, column);

    for (i=0; i<row; ++i){
        for (j=0; j<column; ++j){
            scanf("%f", &el);
            fprintf(f, "%.2f ", el);
        }
        fputc('\n',f);
    }
    fclose(f);

    return;
}

int main(){
    wtf();
    // Your code starts here!
    FILE *f;
    f=fopen("input.txt", "r");
    int x, y, w, q, m, n, i, j, k, r, brojach=0;
    float zbir=0, a[100][100], b[100][100];
    if(!feof(f)){
        fscanf(f, "%d %d", &m, &n);
    }
    for(i=0; i<m&&!feof(f); i++){
        for(j=0; j<n&&!feof(f); j++){
            fscanf(f, "%f", &a[i][j]);
        }
    }
    fclose(f);
    for(i=0; i<m; i++){
        for(j=0; j<n; j++){
            b[i][j]=a[i][j];
        }
    }
    scanf("%d%d%d%d", &x, &y, &w, &q);
    for(i=x; i<=w; i++){
        for(j=y; j<=q; j++){
            for(k=0; k<m; k++){
                for(r=0; r<n; r++){
                    if(k==i-1||k==i||k==i+1){
                        if(r==j-1||r==j||r==j+1){
                            zbir+=a[k][r];
                            brojach++;
                        }
                    }
                }
            }
            b[i][j]=zbir/brojach;
            brojach=zbir=0;
        }
    }
    for(i=0; i<m; i++){
        for(j=0; j<n; j++){
            printf("%.2f ", b[i][j]);
        }
        printf("\n");
    }
    // Your code ends here!
    //printFile();

    return 0;
}
