#include <stdio.h>
#include <math.h>
#include <conio.h>

int main () {
    float altura, base, cateto,area;
    int PuntoX[3], PuntoY[3];
    double dist[3];
    for (int i = 0; i < 3; i++)
    {
        printf("Ingrese las coordenadas x y del punto %i\n", i+1);
        scanf("%i %i",&PuntoX[i], &PuntoY[i]);
       
    }
   
    dist[0]=sqrt(pow((PuntoX[0]-PuntoX[1]),2)+pow((PuntoY[0]-PuntoY[1]),2));
    dist[1]=sqrt(pow((PuntoX[0]-PuntoX[2]),2)+pow((PuntoY[0]-PuntoY[2]),2));
    dist[2]=sqrt(pow((PuntoX[1]-PuntoX[2]),2)+pow((PuntoY[1]-PuntoY[2]),2));
    
    if(dist[0]>dist[1]&&dist[0]>dist[2]){
        altura=dist[1]*dist[2]/dist[0];
        cateto=dist[1];
       
        if(dist[1]+dist[2]<=dist[0]){
            goto msj;
        }
       if(pow(dist[0],2)!=pow(dist[1],2)+pow(dist[2],2)){
            goto end;
       }
        
    } else if (dist[1]>dist[0]&&dist[1]>dist[2]){
        altura=dist[0]*dist[2]/dist[1];
        cateto=dist[2];
        
        if(dist[0]+dist[2]<=dist[1]){
            goto msj;
        }
        if(pow(dist[1],2)!=pow(dist[0],2)+pow(dist[2],2)){
            goto end;
       }
    } else {
        altura=dist[0]*dist[1]/dist[2];
        cateto=dist[0];
        
        if(dist[1]+dist[0]<=dist[2]){
            goto msj;
        }
        if(pow(dist[2],2)!=pow(dist[1],2)+pow(dist[0],2)){
            goto end;
       }
       
    }

    base=sqrt(pow(cateto,2)-pow(altura,2));
    area=base*altura/2;
    
    printf("El area sombreada es de %f \n",area);
    if(1!=1){
        msj:
        printf("No es un triangulo\n");
    }
    if(1!=1){
        end:
        printf("No es un triangulo rectangulo\n");
    }
    
    getch();
    
    return 0;
}