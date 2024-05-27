//Дадена е текстуална датотека text.txt.
//Да се избројат и испечатат сите последнователни појавувања на соседни самогласки во датотеката.
//Појавата на големи и мали букви да се игнорира. Пронајдените парови самогласки да се испечатат на екран,
//секој во нов ред со мали букви. Потоа во нов ред се печати бројот на појавувања на паровите самогласки.
//
//Пример: за датотеката:
//
//IO is short for Input Output
//medioio medIo song
//излез:
//
//io
//ou
//io
//oi
//io
//io
//6

#include <stdio.h>
#include <ctype.h>
#include <string.h>

void writeToFile() {
    FILE *f = fopen("text.txt", "w");
    char c;
    while((c = getchar()) != '#') {
        fputc(c, f);
    }
    fclose(f);
}

int main() {

    writeToFile();

    // Vasiot kod zapocnuva od tuka
    FILE *f;
    f=fopen("text.txt", "r");
    char a[100], b, k, h;
    int br=0, n, i;
    while(fgets(a, 100, f)!=NULL){
        a[strlen(a)-1]='\0';
        n=strlen(a);
        for(i=0; i<n; i++){
            k=tolower(a[i]);
            if(k=='a'||k=='e'||k=='i'||k=='o'||k=='u'){
                h=tolower(a[i+1]);
                if(h=='a'||h=='e'||h=='i'||h=='o'||h=='u'){
                    printf("%c%c\n", k, h);
                    br++;
                }
            }
        }
    }
    fclose(f);
    printf("%d", br);

    return 0;
}
