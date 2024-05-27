//Благ број е број што е составен само од парни цифри (0, 2, 4, 6, 8).
//Во зададен опсег (почетокот m и крајот на опегот n се цели броеви чија вредност се внесува од тастатура),
//да се најде и испечати најмалиот „благ број“. Ако не постои таков број, да се испечати NE.

#include <stdio.h>

int main()
{
    int a, b, temp, i, k, r, s, h=0, prvavrednost=0;
    scanf("%d%d", &a, &b);
    for(i=a; i<=b; i++){
        temp=i;
        s=0;
        r=1;
        while(temp>0&&h==0){
            k=temp%10;
            temp/=10;
            if(k%2==0){
                s=k*r+s;
                r*=10;
                if(s==i){
                    prvavrednost=s;
                    printf("%d\n", s);
                    h++;
                }
            }
        }
    }
    if(prvavrednost==0){
        printf("NE");
    }
    return 0;
}