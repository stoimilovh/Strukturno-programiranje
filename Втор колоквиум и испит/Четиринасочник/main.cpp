//Четиринасочник претставува матрица во која се испишани зборови хоризонотално и вертикално, одлево-надесно и оддесно-налево.
//Притоа секој елемент од матрицата претставува буква од англиската азбука.
//
//пример скриени зборови: HAIR, OLE (прецртани), FISH, TOE (подвлечени)
//
//T H A I R E
//E S N K N E
//M I M J O L
//M F S P S T
//I F G E L O
//X U T Y O E
//Во датотеката input.txt е сместена квадратна матрица од знаци(3 <= n <= 50). Во првиот ред е дефиниран бројот на редици
//(колони) на матрицата и во секој преостанат ред е внесен еден ред од матрицата (види пример).
//По читањето на матрицата, од стандарден влез се внесува збор составен од максимум 10 букви.
//
//Ваша задача е да определите дали тој збор се наоѓа во четиринасочникот (хоризонтално или вертикално, одлево-надесно или оддесно-налево).
//Потребно е да се испечати локацијата (ред, колона) на првата и последната буква од зборот. Доколку зборот повеќепати се наоѓа во четеринасочникот,
//треба да се испечати првото појавување, гледано елемент по елемент како што се чита матрицата.
//
//Доколку не се пронајде зборот, тогаш се печати Not Found.

#include <stdio.h>
#include <string.h>

void wtf(){
    FILE *f=fopen("input.txt","w");

    int n,i,j;
    char el;
    scanf("%d", &n);

    fprintf(f,"%d\n",n);
    char a = getchar();

    for (i=0; i < n; ++i){
        for (j=0; j < n; ++j){
            el = getchar();
            getchar();
            fprintf(f, "%c  ", el);
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
    int n, i, j, br, temp, x1, x2, x3, x4, s, k, r;
    char c[100][100], a[10];
    fscanf(f, "%d", &n);
    for(i=0; i<n; i++){
        for(j=0; j<n; j++){
            fscanf(f, "%c", &c[i][j]);
            if(!isalpha(c[i][j])){
                j--;
            }
        }
    }
    fgets(a, sizeof(a), stdin);
    a[strlen(a)-1]='\0';
    br=strlen(a);
    for(i=0; i<n; i++){
        for(j=0; j<n; j++){
            if(temp==1)
                break;
            if(c[i][j]==a[0]&&c[i+br-1][j]==a[br-1]){
                temp=1, s=0, x1=i, x2=j, r=j;
                for(k=i; k<i+br-1; k++){
                    if(c[k][r]!=a[s])
                        temp=0;
                    s++;
                }
                if(temp==1){
                    x3=k, x4=r;
                    break;
                }
            }
            else if(c[i][j]==a[0]&&c[i-br+1][j]==a[br-1]){
                temp=1, s=0, x1=i, x2=j, r=j;
                for(k=i; k>=i-br+1; k--){
                    if(c[k][r]!=a[s])
                        temp=0;
                    s++;
                }
                if(temp==1){
                    x3=k+1, x4=r;
                    break;
                }
            }
            else if(c[i][j]==a[0]&&c[i][j+br-1]==a[br-1]){
                temp=1, s=0, x1=i, x2=j ,k=i;
                for(r=j; r<j+br-1; r++){
                    if(c[k][r]!=a[s])
                        temp=0;
                    s++;
                }
                if(temp==1){
                    x3=k, x4=r;
                    break;
                }
            }
        }
    }
    if(temp==1){
        printf("%d, %d -> %d, %d", x1, x2, x3, x4);
    }
    else
        printf("Not Found");

    fclose(f);
    // Your code ends here!
    return 0;
}
