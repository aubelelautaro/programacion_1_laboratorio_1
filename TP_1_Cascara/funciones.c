int sumar(int x, int y)
{
    int resultado;
    resultado = x+y;
    return resultado;
}

int restar(int x, int y)
{
    int resultado;
    resultado = x-y;
    return resultado;
}

int multiplicar(int x, int y)
{
    int resultado;
    resultado = x*y;
    return resultado;
}

float dividir(int x, int y)
{
    float resultado;
    resultado = (float)x/y;
    return resultado;
}

long factorial(int x)
{
    int resultado;
    if(x==0)
    {
        resultado=1;
    }
    else
    {
        resultado=x*factorial(x-1);
    }
    return resultado;
}

void operacionesJuntas(int x, int y)
{
    printf("\nLa suma es: %d\n",sumar(x,y));
    printf("La resta es: %d\n",restar(x,y));
    if(y==0)
    {
        printf("Division no posible.\nEl divisor no puede ser cero\n");
    }
    else
    {
        printf("La division es: %.2f\n",dividir(x,y));
    }
    printf("La multiplicacion es: %d\n",multiplicar(x,y));
    if(x<0)
    {
        printf("Factoreo no posible.\nEl numero no puede ser menor a cero\n");
    }
    else
    {
        printf("El factorial de %d es %li\n",x,factorial(x));
    }
}

int validarRango(int opcion, int de, int a)
{
    int resultado=0;
    if((opcion >= de)&&(opcion <= a))
        {
            resultado = 1;
        }
    return resultado;
}

int validarDivision (int x, int y)
{
    if(y==0)
    {
        printf("\nDivision no posible, el divisor no puede ser cero\n");
    }
    else
    {
        printf("La division es: %.2f\n",dividir(x,y));
    }
}

int validarFactorial (int x, int y)
{
    if(x<0)
    {
        printf("\nFactoreo no posible.\nEl numero no puede ser menor a cero\n");
    }
    else
    {
        printf("El factorial de %d es %li\n",x,factorial(x));
    }
}
