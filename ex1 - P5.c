#include<stdio.h>
#include<locale.h>
#define 03

#ifdef 01

int garantir_positivo()
{
    int aux;
    do
    {
        printf("Digite um número para o cálculo do fatorial: ");
        scanf("%d", &aux);

        if (aux < 0)
        {
            printf("O número deve ser maior ou igual que ZERO | TENTE NOVAMENTE\n\n");
        }
    }
    while (aux < 0);

    return aux;
}

//função para calcular FATORIAL
int Fatorial(int num)
{
    int  result = 1;

    for (result; num > 1; num--)
    {
        result = result * num;
    }
    return result;
}

//função principal
int  main()
{
    int num, result;
    setlocale(LC_ALL, "");
    printf("O objetivo desse programa é mostrar o Fatorial de um número.\n\n");
    num = garantir_positivo();
    result = Fatorial(num);
    printf(" O fatorial de %d é: %d ", num, result);
}

#endif // fatorial



#ifdef 02
//2. Crie a função MédiaFibonacci que receba da função main um valor do tipo inteiro
//e maior que zero que represente a quantidade de termos da sequência
//e calcule a média dos termos da sequência.
//Esta quantidade de termos deverá ser no mínimo 3 e no máximo 10.
//Armazena na variável global do tipo vetor Fibo os números desta sequência de Fibonacci.
//Exiba na função main o resultado obtido na função MédiaFibonacci e o conteúdo do vetor Fibo.
//Sequência de Fibonacci:
//0 1 1 2 3 5 8 13 21....

float Fibo[10];

numero()
{
    int    num1=0;

    do
    {
        printf("apenas números maiores que zero\n");
        printf("DIGITE A QUANTIDADE DE TERMOS QUE DESEJA EXIBIR: ");
        scanf("%d", &num1);

        if(num1 < 0)
        {
            printf("Digite um nº maior que zero\n");
        }
    }while (num1 <= 0);

    return num1;
}

//função para a  quantidade de termos ser no mínimo 3 e no máximo 10.
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
    printf("\nA media é: %.2f\n", total/i);

    return total;

}

//função
float Positivo( int num1)
{
    do
    {
        if(num1<3 || num1>10)
        {
            printf("NÚMERO EXCEDIDO| TENTE NOVAMENTE \n");
            printf("sequencia de números entre 3 e 10\n");
        }
    }while(num1 < 3 || num1 < 10);

    return num1;
}


//função para armazena na variável global do tipo vetor Fibo os números da sequência de Fibonacci.
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


//Exiba na função main o resultado obtido na função MédiaFibonacci e o conteúdo do vetor Fibo.
int ExibirFibo(int cont)
{
    int x;
    printf("Exibição do conteúdo do vetor\n");
    for(x=0; x<cont; x++)
    {
        printf("posição %d=vet %d\n",x,Fibo[x]);
    }
}


//função
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
//Crie uma função para o recebimento de dois números onde o primeiro número deve ser maior que o segundo número.
//Crie uma função para cada um dos itens abaixo que calcule e mostre no interior da função main.
//Utilize o comando switch para a seleção das opções abaixo.
//A soma dos números pares desse intervalo, incluindo os números digitados;
//A multiplicação dos números ímpares desse intervalo de números incluindo os números digitados.
//A média dos números que são múltiplos de 5 e 7 ao mesmo tempo.


//Crie uma função para o recebimento de dois números onde o primeiro número deve ser maior que o segundo número.
Recebe_num()
{
    int num1, num2;
    printf("Digite o primeiro nº: ");
    scanf("%d", &num1);

    do
    {
        printf("Digite o segundo nº: ");
        scanf("%d", &num2);

        if (num1 < num2)
        {
            printf("O primeiro  nº  deve ser maior que o segundo\n");
            printf("Tente Novamente\n\n");
        }
    }
    while (num1 < num2);

    return num1, num2;
}

//Crie uma função para cada um dos itens abaixo que calcule e mostre no interior da função main.
//A soma dos números pares desse intervalo, incluindo os números digitados;
//A multiplicação dos números ímpares desse intervalo de números incluindo os números digitados.
//A média dos números que são múltiplos de 5 e 7 ao mesmo tempo.




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
