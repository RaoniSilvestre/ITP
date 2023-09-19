#include <stdio.h>

int main(){
    int num;
    scanf("%d",&num);
    int lista[num];
    for (int i = 0; i < num; i++)
    {   
        lista[i] = i;
        printf("%d\n",lista[i]);
    }
    

    return 0;
}