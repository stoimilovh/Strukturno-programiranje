//Од тастатура се читаат непознат број на позитивни цели броеви (со максимум 5 цифри) се додека не се внесе нешто
//различно од број. За секој број треба да се најде позицијата (од десно на лево) на првото појавување на најголемата
//цифра во составот на бројот (цифрата на единици се наоѓа на позиција 0). Потоа, да се испечати статистика за позициите
//на најдените цифри со максимална вредност во следниот формат:
//
//[позиција]: [вкупно броеви чија максимална цифра се наоѓа на таа позиција]
//
//0: 2
//
//1: 3
//
//2: 1
//
//3: 1
//
//4: 1
//
//
//за броевите 97654 48654 12345 12343 1263 12443 12643 12777

#include <stdio.h>

int main()
{
    int x, h, max, i, k, brojka, e1=0, e2=0, e3=0, e4=0, e5=0;
    while(scanf("%d", &x)){
        if(x<100000){
            h=x;
            max=0;
            i=0;
            while(h>0){
               k=h%10;
               i++;
               h/=10;
               if(k>max){
                   max=k;
                   brojka=i;
               }
            }
            if(brojka==1){
                e1++;}
            if(brojka==2){
                e2++;}
            if(brojka==3){
                e3++;}
            if(brojka==4){
                e4++;}
            if(brojka==5){
                e5++;}
        }
    }

    printf("0: %d\n1: %d\n2: %d\n3: %d\n4: %d", e1, e2, e3, e4, e5);

    return 0;
}