/*Se requiere un algoritmo para determinar cuánto ahorrará una persona en un año, si al final de cada mes
deposita variables cantidades de dinero; además, se requiere saber cuánto lleva ahorrado cada mes.
*/
#include <stdio.h>
#define MESES 12 // DECLARO UNA CONSTANTE
 
int main(int argc, char const *argv[])
{
    float ahorro[MESES];
    float deposito, totalAhorro = 0;
 
    printf("Ingrese el monto a depositar :\n");
    // INSERTAR UN VALOR EN CADA POSICION DEL ARREGLO
    for (int i = 0; i < MESES; i++)
    {
        printf("Mes %i : ", i + 1);
        scanf("%f", &deposito);
        if (deposito > 0)
        {
            ahorro[i] = deposito;
            totalAhorro = totalAhorro + deposito;
        }
        else
        {
            printf("El valor a depositar correspondiente al mes %i es invanlido, ingrese nuevamente\n", i + 1);
            i--;
        }
    }
    printf("Resumen de depositos en el año : \n");
    // RECORRER ARREGLO E IMPRIMIR
    for (int i = 0; i < MESES; i++)
    {
        printf("Mes %i : %.2f\n", i + 1, ahorro[i]);
    }
    printf("\nSu ahorro anual fue de : %.2f", totalAhorro);
 
    return 0;
}