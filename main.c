#include <stdio.h>
#include <stdlib.h>


void f2(int num)
{
 if (num == 0)
     printf("zero");
 else
 {
     printf("%d  ", num);
     f2(num-1);
 }
}

void main(){
 int anot;
 printf ("Digite um valor inteiro: ");
 scanf ("%d", &anot);
 f2 (anot);
}
