#include<stdio.h>
#include<locale.h>
#define 03

#ifdef 01

int garantir_positivo()
{
    int aux;
    do
    {
        printf("Digite um n�mero para o c�lculo do fatorial: ");
        scanf("%d", &aux);

        if (aux < 0)
        {
            printf("O n�mero deve ser maior ou igual que ZERO | TENTE NOVAMENTE\n\n");
        }
    }
    while (aux < 0);

    return aux;
}

//fun��o para calcular FATORIAL
int Fatorial(int num)
{
    int  result = 1;

    for (result; num > 1; num--)
    {
        result = result * num;
    }
    return result;
}

//fun��o principal
int  main()
{
    int num, result;
    setlocale(LC_ALL, "");
    printf("O objetivo desse programa � mostrar o Fatorial de um n�mero.\n\n");
    num = garantir_positivo();
    result = Fatorial(num);
    printf(" O fatorial de %d �: %d ", num, result);
}

#endif // fatorial



#ifdef 02
//2. Crie a fun��o M�diaFibonacci que receba da fun��o main um valor do tipo inteiro
//e maior que zero que represente a quantidade de termos da sequ�ncia
//e calcule a m�dia dos termos da sequ�ncia.
//Esta quantidade de termos dever� ser no m�nimo 3 e no m�ximo 10.
//Armazena na vari�vel global do tipo vetor Fibo os n�meros desta sequ�ncia de Fibonacci.
//Exiba na fun��o main o resultado obtido na fun��o M�diaFibonacci e o conte�do do vetor Fibo.
//Sequ�ncia de Fibonacci:
//0 1 1 2 3 5 8 13 21....

float Fibo[10];

numero()
{
    int    num1=0;

    do
    {
        printf("apenas n�meros maiores que zero\n");
        printf("DIGITE A QUANTIDADE DE TERMOS QUE DESEJA EXIBIR: ");
        scanf("%d", &num1);

        if(num1 < 0)
        {
            printf("Digite um n� maior que zero\n");
        }
    }while (num1 <= 0);

    return num1;
}

//fun��o para a  quantidade de termos ser no m�nimo 3 e no m�ximo 10.
float MediaFibonacci(aux)
{
   int  i, atual=1, ante=1, prox=0;
   float total=0;

    for(i=0; i<aux; i++)
    {
        if(i==0)
        {
            printf("0, ");
        }
        else if(i==1 || i==2)
        {
            printf("1, ");
            total=total+1;
        }
        else
        {
            prox=ante+atual;
            ante=atual;
            atual=prox;
            printf("%d, ",prox);
            total=total+atual;
        }
    }
    printf("\nA media �: %.2f\n", total/i);

    return total;

}

//fun��o
float Positivo( int num1)
{
    do
    {
        if(num1<3 || num1>10)
        {
            printf("N�MERO EXCEDIDO| TENTE NOVAMENTE \n");
            printf("sequencia de n�meros entre 3 e 10\n");
        }
    }while(num1 < 3 || num1 < 10);

    return num1;
}


//fun��o para armazena na vari�vel global do tipo vetor Fibo os n�meros da sequ�ncia de Fibonacci.
int armazenaFibo(int num)
{
    int auxcont=1, numb,cont=0;
    while(auxcont <= num)
    {
        numb+=3;
        Fibo[cont]=numb;
        cont+=1;
        auxcont+=1;
    }
    return cont;
}


//Exiba na fun��o main o resultado obtido na fun��o M�diaFibonacci e o conte�do do vetor Fibo.
int ExibirFibo(int cont)
{
    int x;
    printf("Exibi��o do conte�do do vetor\n");
    for(x=0; x<cont; x++)
    {
        printf("posi��o %d=vet %d\n",x,Fibo[x]);
    }
}


//fun��o
main()
{
    int num1, num, cont, aux;
    setlocale(LC_ALL,"");
    aux=numero();
    num1=MediaFibonacci(aux);
    num= Positivo(num1);
    cont=armazenaFibo(num);
    ExibirFibo(cont);



}
#endif  // fibonacci

#ifdef 03
//Crie uma fun��o para o recebimento de dois n�meros onde o primeiro n�mero deve ser maior que o segundo n�mero.
//Crie uma fun��o para cada um dos itens abaixo que calcule e mostre no interior da fun��o main.
//Utilize o comando switch para a sele��o das op��es abaixo.
//A soma dos n�meros pares desse intervalo, incluindo os n�meros digitados;
//A multiplica��o dos n�meros �mpares desse intervalo de n�meros incluindo os n�meros digitados.
//A m�dia dos n�meros que s�o m�ltiplos de 5 e 7 ao mesmo tempo.


//Crie uma fun��o para o recebimento de dois n�meros onde o primeiro n�mero deve ser maior que o segundo n�mero.
Recebe_num()
{
    int num1, num2;
    printf("Digite o primeiro n�: ");
    scanf("%d", &num1);

    do
    {
        printf("Digite o segundo n�: ");
        scanf("%d", &num2);

        if (num1 < num2)
        {
            printf("O primeiro  n�  deve ser maior que o segundo\n");
            printf("Tente Novamente\n\n");
        }
    }
    while (num1 < num2);

    return num1, num2;
}

//Crie uma fun��o para cada um dos itens abaixo que calcule e mostre no interior da fun��o main.
//A soma dos n�meros pares desse intervalo, incluindo os n�meros digitados;
//A multiplica��o dos n�meros �mpares desse intervalo de n�meros incluindo os n�meros digitados.
//A m�dia dos n�meros que s�o m�ltiplos de 5 e 7 ao mesmo tempo.




soma(num1, num2)
{
    int a, b; //somar;

    num  = a + b;

}



main()
{
    int num, num1, num2;
    setlocale(LC_ALL,"");
    num=Recebe_num();
    soma(num);
    //num2=Recebe_num();


}


#endif // receberDoisNumeros
