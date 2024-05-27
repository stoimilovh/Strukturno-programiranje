//За еден природен број а велиме дека е порамнување на друг природен број b
//ако и само ако цифрите еднакви на 9 во бројот b се заменети со цифрата 7 во бројот а.
//
//Пример. Бројот 734775 е порамнување на бројот 934795.
//
//Од стандарден влез се внесуваат непознат број на цели броеви (не повеќе од 100),
//се додека не се внесе нешто што не може да се интерпретира како цел број.
//
//Ваша задача е да ги отпечатите најмалите 5 од порамнувањата на сите внесени броеви,
//по редослед од најмалиот кон најголемиот.
//
//Забелешка: Доколку се внесат помалку од 5 броеви, тогаш печатите толку броеви колку што се соодветно внесени.
//Наоѓањето на порамнувањето на даден број треба да се реализира во посебна рекурзивна функција poramnet(int a).
//
//Пример.
//
//За броевите: 9592, 69403, 100007, 6, 987, 6977, 33439,
//треба да се најдат нивните порамнувања ( тоа се: 7572, 67403, 100007, 6, 787, 6777 и 33437, соодветно),
//и да се отпечатат најмалите 5 од нив по овој редослед: 6 787 6777 7572 33437.
//ЗАБРАНЕТО е користење на глобални променливи.

#include <stdio.h>

int poramnuvanje (int n){
    int k;
    if(n<10){
        if(n==9)
            return 7;
        else
            return n;
    }
    else{
        k=n%10;
        if(k==9)
            return 7+(poramnuvanje(n/10)*10);
        else
            return k+(poramnuvanje(n/10)*10);}
}

void bubblesort(int a[], int n){
    int i, j, temp;
    for(i=0; i<n; i++){
        for(j=0; j<n-1; j++){
            if(a[j]>a[j+1]){
                temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
            }
        }
    }
}

int main()
{
    int n, i=0, a[100];
    while(scanf("%d", &n)){
        a[i]=poramnuvanje(n);
        i++;
    }
    n=i;
    bubblesort(a, n);
    for(i=0; i<n; i++){
        if(i>4)
            break;
        printf("%d ", a[i]);
    }

    return 0;
}
