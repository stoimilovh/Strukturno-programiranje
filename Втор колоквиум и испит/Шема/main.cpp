//Од тастатура се чита природен број N (N < 400).
//Да се напише програма којашто формира квадратна матрица што ги содржи броевите од 1 до N по растечки редослед на следниот начин:
//во првата колона во правец од горе надолу, па продолжува во втората колона од долу нагоре, па продолжува во третата колона од горе надолу итн.
//Да се избере најмалата димензија на матрицата во која ќе ги собере сите броеви до N. Доколку има преостанати празни места, тие да се пополнат со нули.
//
//Формираната матрица да се запише во датотека "shema.txt".

#include <stdio.h>
void printFile() {
    FILE *f=fopen("shema.txt","r");
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
    f=fopen("shema.txt", "w");
    int n, i, j, k, h=1, a[100][100], z;
    scanf("%d", &n);
    for(i=0; i<50; i++){
        if((i*i)>=n)
            break;
    }
    k=i;
    i=0;
    while(i<k){
        for(j=0; j<k; j++){
            if(h>n){
                a[i][j]=0;
            }
            else{
                a[i][j]=h;
                h++;}
        }
        i++;
        for(j=k-1; j>=0; j--){
            if(h>n){
                a[i][j]=0;
            }
            else{
                a[i][j]=h;
                h++;}
        }
        i++;
    }
    for(i=0; i<k; i++){
        for(j=0; j<k; j++){
            fprintf(f, "%d ", a[j][i]);
        }
        fprintf(f, "\n");
    }
    fclose(f);
    // do tuka
    printFile();
    return 0;
}