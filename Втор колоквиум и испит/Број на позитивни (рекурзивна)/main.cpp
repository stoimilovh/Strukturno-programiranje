//Да се напише рекурзивна функција која ќе го најде бројот на позитивни броеви од целобројна низа.
//Функцијата како аргумент ја прима низата, за која се бара бројот на позитивни броеви и вкупниот број на елементи,
//кои ги има таа низа. Функцијата е зададена со следниот прототип:
//
//int BrojPozitivni(int niza[], int n);
//
//Да се напише и функција main() за тестирање на функцијата BrojPozitivni.

#include <stdio.h>

int BrojPozitivni(int a[], int n){
    n--;
    if(n<0){
        return 0;}
    if(a[n]>0){
        return 1+BrojPozitivni(a, n);
    }
    else
        return BrojPozitivni(a, n);
}

int main()
{
    int a[100], n, i, c;
    scanf("%d", &n);
    for(i=0; i<n; i++){
        scanf("%d", &a[i]);
    }
    c=BrojPozitivni(a, n);
    printf("%d", c);

    return 0;
}