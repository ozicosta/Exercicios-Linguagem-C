//exercicos para entrega N�dia
// EXERCICIOS REFEITOS COM FUN��ES GLOBAIS E PASSAGEM DE PARAMETROS ******** 27/10/2021

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
    printf("Digite um n�mero, por favor ");
    scanf("%i", &num);

    }


    void exiba(void)
    {
    int num;
    printf("O sucessor do valor %d � %d\n ",num,num+1);
    printf("O antecessor do valor %d � %d\n ",num,num-1);

    return num;
    }
#endif


#ifdef calcularVolumeEsfera
//Crie a fun��o Esfera que receba da fun��o main o valor do raio
//e calcule o volume da esfera o seu volume (v = 4/3*Pi*R3).
//Crie tamb�m uma fun��o para garantir que o raio deve ser maior que zero.
//Exiba o resultado obtido no interior da fun��o main.

    float valorraio, valorpositivo;

    main(void)
    {
        printf("Digite um valor \n");
        printf("O valor deve ser POSITIVO!!!\n");
        scanf("%f", &valorraio);
    }

#endif

#ifdef VerificarSePosNegZero
//Crie a fun��o Verifica para verificar
//e exibir no seu interior se o n�mero � positivo, negativo ou zero.
//O n�mero dever� ser do tipo inteiro
//e dever� ser recebido  no interior  fun��o main.

 int num;

     void verificar(void)
    {
        do{
            if(num>0)
                printf("Voc� digitou um numero POSITIVO");
            if(num<0)
                printf("Voc� digitou um numero NEGATIVO");
            if(num==0)
                printf("Voc� digitou o numero ZERO");
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

//Crie uma fun��o que garanta que as notas devem ser maiores ou iguais a zero e menores ou iguais a dez.
//Leia quatro valores referentes �s notas escolares de um aluno. Crie a fun��o m�dia para o c�lculo da m�dia
//e exiba o resultado desta m�dia no interior da fun��o main .
//Informe tamb�m se o aluno est� aprovado se a m�dia superior ou igual a 6 caso contr�rio informe que est� reprovado

    float nota1, nota2, nota2, nota4, media;




#endif



//_____________________________________________________________________________________________________________________

#ifdef calcularSalaraioFuncionario
//Elabore um programa que receba o sal�rio de um funcion�rio e calcule o reajuste desse sal�rio
//Considere que o funcion�rio deve receber um reajuste de 15% caso seu sal�rio seja menor que 800 reais
//Se o sal�rio for maior ou igual a 800 e menor ou igual a 1000, seu reajuste ser� de 10 %; caso seja maior que 1000,
//o reajuste deve ser de 5%. Ao final do programa deve apresentar o valor antigo e o novo sal�rio

#endif









