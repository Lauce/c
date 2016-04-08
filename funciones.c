

float sumarNumeros(float x, float y)
{
    float total;
    total = x+y;
    return total;
}

float restarNumeros (float x, float y)
{
    float total;
    total = x-y;
    return total;
}


float dividirNumeros(float x, float y)
{

    float total;
    total = x/y;
    return total;

}

float multiplicarNumeros(float x, float y)
{
    float total;
    total = x*y;
    return total;

}

int factorial (int x)
{

    if(x == 0)
        return 1;
    else
        return (x * factorial(x-1));
}



