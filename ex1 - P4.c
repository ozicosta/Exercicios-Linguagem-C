#include<stdio.h>
#include<locale.h>
#include<math.h>
#define ex04

#ifdef ex01  // n�meros �mpar de 50 a 150

 int num;

    void main ()
    {
        setlocale(LC_ALL,"");
        system("color c");
        printf("EXIBIR N�MEROS IMPARES ENTRE 50 E 150: \n\n");
        Impar();
    }

    Impar()
    {
    for (num=50; num<150; num++)
      {
        num = num + 1;
        printf("%d \n", num);
      }
    }
#endif // ex01


#ifdef ex02 // n�meros pares entre -10 e 50

   int  num = -10;

    void main()
    {
        setlocale(LC_ALL,"");
        system("color 7c");
        printf("EXIBIR N�MEROS PARES: \n\n");

    while(num<50)
        {
        num = num +2;
        printf("%d \n", num);
        }
    }
#endif // ex02


#ifdef ex03 // m�ltiplos de 5 entre 1 e 100



  void main()
  {
      setlocale(LC_ALL,"");
      system("color 7C");
      printf("EXIBIR M�LTIPLOS DE 5 ENTRE 1 E 100: \n");
      Conta();

}

Conta()
{int num = 0;
      while (num < 100)
      {

          num = num + 5;
          printf(" %d\n", num);
      }
  }
#endif // ex03


#ifdef ex04 // multiplos de 3 e impares

//fun��o principal
  void main ()
  {
      setlocale(LC_ALL,"");
      system("color 7C");
      printf("EXIBIR N�MEROS M�LTIPLOS DE 3 E �MPARES: \n");
      MULTIPLO();

  }

  //fun��o para calcular multiplo
      MULTIPLO()
      {int num = 0;
          for(num=0; num<=100; num++)
          {

          if (num % 2 !=0)
           {
              if (num % 3 == 0)
              {
                  printf("%d \n", num);
              }
           }
         }
      }


#endif // ex04

#ifdef ex05
// Fa�a um programa em C que solicite ao usu�rio a quantidade de termos
// que ele deseja exibir da seguinte sequ�ncia:3, 6, 9, 12, 15,...
// Obs.: Crie uma fun��o para garantir que essa quantidade deve ser
// deve ser maior que zero e representada pela vari�vel K.


    int k, num; // num;

    void main()
{
        setlocale(LC_ALL,"");
        system("color 7C");
        printf("DIGITE A QUANTIDADE DE TERMOS QUE DESEJA EXIBIR \n \n");
        Garantir();
        Incrementar();
}

    Incrementar()
    {
    for(int num = 1; num<=k; num++)
      {
        printf("%d\n", num*3);
      }
   }

    Garantir()
    {
        do
        {
            printf("DIGITE UM N�MERO POSITIVO: ");
            scanf("%d", &k);

            if(k<0)
                printf("N�MERO INV�LIDO\nTENTE NOVAMENTE\n\n");
        }while(k<0);
    }

#endif // ex05


#ifdef ex06
// Fa�a um programa em C que solicite ao usu�rio a quantidade de termos
// que ele deseja exibir da seguinte sequ�ncia: 1/4, 1/8, 1/12, 1/16, 1/20,...
// Obs.: Crie uma fun��o para garantir que essa quantidade deve ser deve ser
// maior que zero e representada pela vari�vel K





    int  k, num;

    void main()
{
        setlocale(LC_ALL,"");
        system("color 7C");
        printf("DIGITE A QUANTIDADE DE TERMOS QUE DESEJA EXIBIR \n \n");
        Garantir();
        Incrementar();
}

    Incrementar()
{
    for(int num = 1; num<=k; num++)
    {
        printf("1/%d\n", num*4);
    }
}

    Garantir()
    {
        do
        {
            printf("DIGITE UM N�MERO POSITIVO: ");
            scanf("%d", &k);

            if(k<0)
                printf("N�MERO INV�LIDO\nTENTE NOVAMENTE\n\n");
        }while(k<0);
    }

#endif // ex06


#ifdef ex07
// Fa�a um programa em C que solicite ao usu�rio a quantidade de termos
// que ele deseja exibir da seguinte sequ�ncia: 2/5, 4/10, 6/15, 8/20, 10/25, 12/30,...
// Obs.: Crie uma fun��o para garantir que essa quantidade deve ser deve ser maior
// que zero e representada pela vari�vel K.

 int  k, num;

    Incrementar()
    {

    for(int num = 1; num<=k; num++)
      {

        printf("%d/%d\n",num*2, num*5);
      }
   }

    Garantir()
    {
        do
        {
            printf("DIGITE UM N�MERO POSITIVO: ");
            scanf("%d", &k);

            if(k<0)
                printf("\n\tN�MERO INV�LIDO\n\tTENTE NOVAMENTE\n\n");
                system("pause");
                //system("cls");
        }while(k<0);
    }



       void main()
{
        setlocale(LC_ALL,"");
        system("color C");
        printf("DIGITE A QUANTIDADE DE TERMOS QUE DESEJA EXIBIR \n \n");
        Garantir();
        Incrementar();
}


#endif // ex07


#ifdef ex08
// Fa�a um programa em C que solicite ao usu�rio a quantidade de termos representada
// pela vari�vel X que representa a quantidade de termos que o usu�rio deseja.
// H representa cada um desses n�meros, calcule o produto dos X n�meros.
// OBS: H deve ser maior ou igual a 15.

    float x, h, prod=1;
    int   cont;
    ValorX()
    {
        while(x>0)
        {
            printf("Digite quantos termos deseja exibir: \n");
            scanf("%f", &x);
        }
    }

    Garantir()
    {

        for(cont = 1; cont < x; cont++)
        {
           do{
                  printf(" %d termo \n", cont+1);
                  scanf("%f", &h);

                if(h<15)
                {
                    printf("N�mero inv�lido\nTENTE NOVAMENTE");
                }else
                    {
                        (prod*=h);
                    }
             }while(h<15);
        }
    }
    main()
    {
       setlocale(LC_ALL,"");
       system("color D");
       ValorX();
       Garantir();
    }

#endif // ex08


#ifdef ex10

float receber()
{
    float  numb;

    do
    {
        printf("Digite um n�mero maior que zero: ");
        scanf("%f", &numb);

        if(numb <= 0)
        {
            printf("VALOR INV�LIDO | TENTE NOVAMENTE\n\n");
        }

    }while(numb <=0);
    return numb;
}

float dividir(float k)
{
    float  div;

    div = k / 2;

    return div;
}

main()
{
    float k; //s;
    setlocale(LC_ALL,"");
    system("color 7d");
    k=receber();
    //s=dividir(k);
    printf("RESULT: %.1f ",dividir(k));
    //h� duas formas de imprimir o valor na tela 1� criando uma variavel e atribuindo o valor a ela com a fun��o ou
    // chamar direto no printf a fun��o

}

#endif // ex10


