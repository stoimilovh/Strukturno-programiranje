//Од тастатура се читаат непознат број позитивни цели броеви се додека не се внесе нешто
//различно од број. За секој број треба да се пресмета збирот на цифрата со максимална вредност
//од претходно внесениот број  и сумата на цифрите на тековниот број
//(за првиот внесен број се пресметува само сумата на неговите цифри). За секој внесен број резултатот треба
//да се испечати во следниот формат:
//
//[број]: [сумата на цифрите на бројот + максималната цифра од претходниот број]
//
//342: 9   //3+4+2
//
//345: 16 //3+4+5+4
//
//123: 11 //1+2+3+5
//
//456: 18 //4+5+6+3


#include <stdio.h>

int main()
{
    int x, s, i=0, zbir, k, h;
    while(scanf("%d", &x)){
        s=x;
        zbir=0;
        h=0;
        while(s>0){
            k=s%10;
            zbir+=k;
            if(k>h){
                h=k;}
            s/=10;}
        zbir+=i;
        i=h;

        printf("%d: %d\n", x, zbir);

    }
    return 0;
}
