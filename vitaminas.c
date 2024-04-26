
#include <stdio.h>
#include <conio.h>
int main()
{
    int i, s, varon, edad;
    float estatura, peso, a, b, total;
    printf("Escriba 1 para empezar, 0 para finalizar\n");
    scanf("%i",&i);
if (i!=0)
{
    do
    {
        s=0;
        printf("Escriba 1 si el paciente es varon, cualquier otro numero si es mujer\n");
        scanf("%i",&s);

        printf("Escriba la estatura del estudiante en metros\n");
        scanf ("%f",&estatura);
        while (estatura<1 || estatura>2.2)
        {
            printf("Escriba una estatura valida\n");
            scanf ("%f",&estatura);
        }
        

        printf("Escriba el peso en lb del estudiante\n");
        scanf("%f",&peso);
        while (peso<=50 || peso>300)
        {
            printf("Escriba un peso valido\n");
            scanf("%f",&peso);
        }
        
        printf("Escriba la edad del estudiante\n");
        scanf("%i",&edad);
        while (edad<=0 || edad>60)
        {
            printf("Escriba una edad valida\n");
            scanf("%i",&edad);
        }

        if (edad>=18)
        {
            if (s==1)
            {
                if (estatura>1.6 && peso>=150)
                {
                    a=estatura*0.2;
                    b=peso*0.8;
                }
                else
                {
                    a=estatura*0.3;
                    b=peso*0.7;
                }
            }
            else
            {
                if (estatura>1.5 && peso>=130)
                {
                    a=estatura*0.25;
                    b=peso*0.75;
                }
                else
                {
                    a=estatura*0.35;
                    b=peso*0.65;
                }
            }
            total=a+b;
            printf("La dosis recetada es de %.2fgr\n",total);
        }
        else
        {
            printf("La dosis no aplica para personas menores a 18 años de edad\n");
        }

        printf("Escriba 1 para continuar, 0 para finalizar\n");
        scanf("%i",&i);
    } while (i!=0);
}
    printf("Fin");
    
    
    getch();
    return 0;
}

