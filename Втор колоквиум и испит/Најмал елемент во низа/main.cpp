//Од стандарден влез се чита природен број N (N <= 100), како и низа од позитивни цели броеви a[ ] со N елементи.
//Да се напише функција int par(a, n) која ќе го врати најмалиот елемент во низата кој се појавува парен број пати во низата.
//Доколку нема таков елемент, функцијата враќа вредност 0.
//Напишете програма што ќе ја повика функцијата par за внесената низа a[ ] и ќе го испечати најмалиот број којшто се појавува парен број пати во низата a[ ].
//

#include <stdio.h>

void BubbleSort (int a[], int n){
    int temp, i, j;
    for(i=0; i<n; i++){
        for(j=0; j<n-1; j++){
            if(a[j]>a[j+1]){
                temp=a[j+1];
                a[j+1]=a[j];
                a[j]=temp;
            }
        }
    }
}

int par(int a[], int n){
    int i, j, k, brojach=1, min;
    for(i=0; i<n; i++){
        if(k!=a[i]){
            min=a[i];
            for(j=i+1; j<n; j++){
                if(a[i]==a[j]){
                    brojach++;}
            }
            if(brojach%2==0)
                return min;
        }
        k=a[i];
        brojach=1;
    }
    return 0;
}

int main()
{
    int n, a[100], b[100], i;
    scanf("%d", &n);
    for(i=0; i<n; i++){
        scanf("%d", &a[i]);
    }
    BubbleSort(a, n);
    i=par(a, n);
    if(i>0){
        printf("Najmaliot element koj se pojavuva paren broj pati e %d", i);
    }
    else if(i==0)
        printf("Nitu eden element ne se pojavuva paren broj pati!");

    return 0;
}