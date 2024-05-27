//Од стаднарден влез се читаат N низи од знаци (стрингови) не подолги од 80 знаци. На почетокот на програмата се читаат два цели броеви:
//N - бројот на низи од знаци кои ќе се читаат и
//X - поместување.
//Секоја од вчитаните низи од знаци треба да се трансформира на тој начин што секоја од малите и големите букви (a-z, A-Z)
//се заменува со истата буква поместена X места понапред во азбуката (a-z). Ако се надмине опсегот на буквите во азбуката,
//се продолжува циклично од почетокот на азбуката. Трансформираната низа да се отпечати на СИ.
//
//Трансформацијата да се имплементира со посебна рекурзивна функција.
//
//Пример:
//
//Welcome -> трансформирано со поместување 5 -> Bjqhtrj

#include <stdio.h>
#include <string.h>
#include <ctype.h>

int shifra (char *a, int n){
    char f='A';
    if(*a=='\0')
        return 0;
    if(isalpha(*a)){
        if(islower(*a))
            f='a';
        *a=f+(*a+n-f)%26;
    }
    return shifra(a+1, n);
}

int main()
{
    char a[80];
    int m, n, i=0;
    scanf("%d%d\n", &m, &n);
    while(i<m){
        i++;
        fgets(a, sizeof(a), stdin);
        shifra(a, n);
        printf("%s", a);
    }
    return 0;
}
