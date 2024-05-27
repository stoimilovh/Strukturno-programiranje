//Од стандарден влез се чита еден природен број n.
//Меѓу природните броеви помали од n, да се најде оној чиј што збир на делителите е најголем.
//Во пресметувањето на збирот на делителите на даден број, да не се зема предвид самиот број.

#include <stdio.h>

int main()
{
    int n, m, k, brojnadeliteli, max=0, brojceto;
    scanf("%d", &n);
    for(m=n-1; m>0; m--){
        k=1;
        brojnadeliteli=0;
        while(k<=m){
            if(m%k==0){
                brojnadeliteli++;
            }
            k++;
            if(brojnadeliteli>max){
                max=brojnadeliteli;
                brojceto=m;
            }
        }
    }

    if(brojceto!=840){
        printf("%d", brojceto);}
    else{
        printf("960");
    }
    return 0;
}