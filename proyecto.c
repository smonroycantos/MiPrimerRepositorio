/*Dada el peso, la altura y el sexo, de unos estudiantes. Determinar la cantidad de vitaminas que 
deben consumir estos estudiantes, en base al siguiente criterio: Si son varones, y su estatura es 
mayor a 1.60, y su peso es mayor o igual a 150 lb, su dosis, serán: 20% de la estatura y 80% de 
su peso. De lo contrario, la dosis será la siguiente: 30% de la estatura y 70% de su peso. Si son 
mujeres, y su estatura es mayor de a 1.50 m y su peso es mayor o igual a 130 lb, su dosis será: 
25% de la estatura y 75% de su peso. De lo contrario, la dosis será: 35% de la estatura y 65% de 
su peso. La dosis debe ser expresada en gramos. La cantidad de vitaminas solo es aplicable a 
personas mayores de 18 años.
Además, se solicita el proceso se repita tantas veces como el usuario desee. Es decir, debemos 
hacer un proceso repetitivo.
*/
#include <stdio.h>
#include <conio.h>
#include <ctype.h>
#include <string.h>
int main ()
{
    float altura, peso;
    char sexo [1], edad [1];
    int estudiantes, i;
    printf("Ingrese el numero de estudiantes\n");
    scanf("%i",&estudiantes);
    while (estudiantes<=0){
        printf ("Ingrese una cantidad valida\n");
        scanf("%i",&estudiantes);
    }
   float vita[estudiantes];
   for ( i = 0; i < estudiantes; i++)
   {
    printf("%cEl estudiante %i tiene mas de 18 anios? s/n\n",168, i+1);
    scanf("%s",edad);
    while (((strcmp(edad, "s"))!= 0)&&(((strcmp(edad, "n"))!=0))){
            printf("Ingrese una respuesta valida \n");
            scanf("%s",edad);
        }
    if (strcmp(edad, "s")==0){
        printf("Si el estudiante %i es varon ingrese \"M\", si es mujer ingrese \"F\"\n", i+1);
        scanf("%s",sexo);
        sexo[0]=toupper(sexo[0]);
        while (((strcmp(sexo, "M"))!= 0)&&(((strcmp(sexo, "F"))!=0))){
            printf("Ingrese un sexo valido \n");
            scanf("%s",sexo);
            sexo[0]=toupper(sexo[0]);
        }  
        printf("Ingrese la altura del estudiante %i en metros\n", i+1);
        scanf("%f",&altura);
        while (altura<=1 || altura>2.5){
            printf ("Ingrese una cantidad valida\n");
            scanf("%f",&altura);
        }
        printf("Ingrese el peso del estudiante %i en libras\n", i+1);
        scanf("%f",&peso);
        while (peso<=60 || peso>400){
            printf ("Ingrese una cantidad valida\n");
            scanf("%f",&peso);
        }
        if ((strcmp(sexo, "M"))==0){
            if(altura>1.6 && peso>=150){
                vita[i]=altura*0.2+peso*0.8;
            } else {
                vita[i]=altura*0.3+peso*0.7;
            }
        }else{
            if(altura>1.5 && peso>=130){
                vita[i]=altura*0.25+peso*0.75;
            }else{
                vita[i]=altura*0.35+peso*0.65;
            }
        }
    }else{
        printf("La dosis solo es aplicable para mayores de edad\n");
        vita[i]=0;
    }
   }
   for ( i = 0; i < estudiantes; i++){
    if (vita[i]!=0){
        printf("La dosis de vitaminas para el estudiante %i es de %f gramos\n", i+1, vita[i]);
    }else{
        printf("El estudiante %i es menor de edad, la dosis no aplica\n", i+1);
    }    
   }   
    getch();
    return 0;
}
