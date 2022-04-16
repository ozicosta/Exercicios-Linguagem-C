//exercicos para entrega Nádia
// EXERCICIOS REFEITOS COM FUNÇÕES GLOBAIS E PASSAGEM DE PARAMETROS ******** 27/10/2021

#include<stdio.h>
#include<locale.h>
#define antecessorEsucessorTESTE
#ifdef antecessorEsucessorTESTE
//TESTE para receber  um numero e informar seu antecessor e sucessor.

    main(void)
    {
    int num;

    setlocale(LC_ALL,"");
    num = exiba();
    printf("Digite um número, por favor ");
    scanf("%i", &num);

    }


    void exiba(void)
    {
    int num;
    printf("O sucessor do valor %d é %d\n ",num,num+1);
    printf("O antecessor do valor %d é %d\n ",num,num-1);

    return num;
    }
#endif


#ifdef calcularVolumeEsfera
//Crie a função Esfera que receba da função main o valor do raio
//e calcule o volume da esfera o seu volume (v = 4/3*Pi*R3).
//Crie também uma função para garantir que o raio deve ser maior que zero.
//Exiba o resultado obtido no interior da função main.

    float valorraio, valorpositivo;

    main(void)
    {
        printf("Digite um valor \n");
        printf("O valor deve ser POSITIVO!!!\n");
        scanf("%f", &valorraio);
    }

#endif

#ifdef VerificarSePosNegZero
//Crie a função Verifica para verificar
//e exibir no seu interior se o número é positivo, negativo ou zero.
//O número deverá ser do tipo inteiro
//e deverá ser recebido  no interior  função main.

 int num;

     void verificar(void)
    {
        do{
            if(num>0)
                printf("Você digitou um numero POSITIVO");
            if(num<0)
                printf("Você digitou um numero NEGATIVO");
            if(num==0)
                printf("Você digitou o numero ZERO");
          }while(num=0);
    }
  main(void)
    {
        setlocale(LC_ALL,"");
        printf("Digite um numero ");
        scanf("%d",&num);
        verificar();
    }

#endif calcularValorPosNegZero

#ifdef calcularNotaAluno

//Crie uma função que garanta que as notas devem ser maiores ou iguais a zero e menores ou iguais a dez.
//Leia quatro valores referentes às notas escolares de um aluno. Crie a função média para o cálculo da média
//e exiba o resultado desta média no interior da função main .
//Informe também se o aluno está aprovado se a média superior ou igual a 6 caso contrário informe que está reprovado

    float nota1, nota2, nota2, nota4, media;




#endif



//_____________________________________________________________________________________________________________________

#ifdef calcularSalaraioFuncionario
//Elabore um programa que receba o salário de um funcionário e calcule o reajuste desse salário
//Considere que o funcionário deve receber um reajuste de 15% caso seu salário seja menor que 800 reais
//Se o salário for maior ou igual a 800 e menor ou igual a 1000, seu reajuste será de 10 %; caso seja maior que 1000,
//o reajuste deve ser de 5%. Ao final do programa deve apresentar o valor antigo e o novo salário

#endif









