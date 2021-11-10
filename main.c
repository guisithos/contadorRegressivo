#include <stdio.h>
#include <stdlib.h>


void fm (int num)
{
 if (num == 0)
     printf ("zero");
 else
 {
     printf("%d  ", num);
     fm (num-1);
 }
}

void main(){
 int anot;
 printf ("Digite um valor inteiro: ");
 scanf ("%d", &anot);
 fm (anot);
}
