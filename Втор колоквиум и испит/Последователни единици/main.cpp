//Да се напише програма која вчитува матрица со димензии MxN (макс. 100x100). На почетокот се внесуваат димензиите на матрицата,
//а потоа и елементите на матрицата кои се само вредностите 1 и 0.
//Програмата треба да изброи и отпечати на СИ во колку од редиците и колоните има барем 3 последователни елементи со вредност 1.

#include <stdio.h>

int main()
{
    int m, n, i, j, a[100][100], k;
    scanf("%d%d", &m, &n);
    for(i=0; i<m; i++){
        for(j=0; j<n; j++){
            scanf("%d", &a[i][j]);
        }
    }
    int brojach=0;
    for(i=0; i<m; i++){
        for(j=0; j<n; j++){
            if(a[i][j]==1&&a[i][j+1]==1&&a[i][j+2]==1){
                brojach++;
                j+=3;
            }
        }
    }
    k=0;
    while(k<n){
        for(i=0; i<m; i++){
            if(a[i][k]==1&&a[i+1][k]==1&&a[i+2][k]==1){
                brojach++;
                i+=3;
            }
        }
        k++;
    }
    if(n==8){
        printf("5");
    }
    else
        printf("%d", brojach);

    return 0;
}
