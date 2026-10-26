/*Leer tres numeros enteros y mostrar
su suma,
su productoy su
promediocon dos
decimales.
*/
#include  <stdio.h>
main(){
//Pedir datos
printf("Ingresael primer numero:");
float numeroUno;
scant("%f,&numeroUno);
}}
printf("Ingresael segundo numero:");
float numeroDos;
scant("%f,&numeroDos);}
printf("Ingresa el tercer numero:");
float numeroTres;
scanf ("%f",&numeroTres);

//operaciones
float suma;
float producto;
float promedio;

suma = numeroUno +numeroDos +numeroTres;
producto = numeroUno * numeroDos * numeroTres;
promedio = (numeroUno+numeroDos+numeroTres)/3;

//Mostrar datos
printf("\nLa suma de los m enores es:%.2f",suma);
printf("\nEl producto de los numeros es:%.2f",producto);
printf("\nEl promedio de los numeros es:%.2f",promedio);
