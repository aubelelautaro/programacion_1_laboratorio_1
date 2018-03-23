/*numeros distintos de cero, no se saben cuantos
mostrar:
        *cant pares e impares *mayor y menor * porcentaje de cant positivos y negativos
        *maximo par
        *cantidad de num entre 125 y 236
*/
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int numero;
    int contador = 0 ;
    int contPositivos = 0;
    int contNegativos = 0;
    float porcentajePos;
    float porcentajeNeg;
    int contPares = 0;
    int contImpares = 0;
    int max = 0;
    int min = 0;
    char respuesta;
    int maximoPar;
    int cantXNum = 0;
    int flag = 0;
    while (respuesta != 'n')
    {
        printf("\nNumero: ");
        scanf("%d", &numero);
        while (numero == 0)
        {
            printf("Numero que no sea 0: ");
            scanf("%d", &numero);
        }
        printf("\nSeguir?");
        respuesta = getche();
        contador++;
        if (numero < 0)
        {
            contNegativos++;
        }
        else
        {
            contPositivos++;
        }
        if (numero % 2 == 0)
        {
            if (contPares == 0 || numero> maximoPar)
            {
                maximoPar = numero;
            }
            contPares++;
        }
        else
        {
            contImpares++;
        }
        if (flag == 0 || numero>max)
        {
            max = numero;
        }
        if (flag == 0 || numero<min)
        {
            min = numero;
            flag = 1;
        }
        if (cantXNum <= 236 && cantXNum >= 125)
        {
            cantXNum++;
        }
        porcentajePos = (float) contPositivos * 100 / contador;
        porcentajeNeg = 100 - porcentajePos;
    }

    printf("\nImpares: %d \nPares: %d \nMinimo: %d \nMaximo: %d \nMaximo par: %d \nNumeros entre 236 y 125: %d \nPorcentaje negativos: %f \nPorcentaje positivos: %f" , contImpares , contPares, min , max, maximoPar, cantXNum, porcentajeNeg, porcentajePos);
    return 0;
}
