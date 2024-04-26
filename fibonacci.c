/*Realice un algoritmo , que permita al usuario un número N y
genere esos N elementos de la sucesión de Fibonacci (0, 1, 1, 2,
3, 5, 8, 13,...).*/
#include <stdio.h>
#include <conio.h>
#include <locale.h>
int main()
{
setlocale(LC_ALL,"");
    int n, a, b, c, i;
 do
 {
  printf("Ingrese la cantidad de numeros fibonacci que desea\n");
  scanf("%i",&n);
  if (n<=0)
  {
    printf("Ingrese una cantidad valida\n");
  }
   } while (n<=0);
    a=0;
    b=1;
  for ( i = 0; i < n; i++)
  {
    printf("%i\n",a);
    c=a+b;
    a=b;
    b=c;
  }
    getch();
    return 0;
}
