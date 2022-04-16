#include<stdio.h>
#include<locale.h>
#include<math.h>
#define ex04

#ifdef ex01  // números ímpar de 50 a 150

 int num;

    void main ()
    {
        setlocale(LC_ALL,"");
        system("color c");
        printf("EXIBIR NÚMEROS IMPARES ENTRE 50 E 150: \n\n");
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


#ifdef ex02 // números pares entre -10 e 50

   int  num = -10;

    void main()
    {
        setlocale(LC_ALL,"");
        system("color 7c");
        printf("EXIBIR NÚMEROS PARES: \n\n");

    while(num<50)
        {
        num = num +2;
        printf("%d \n", num);
        }
    }
#endif // ex02


#ifdef ex03 // múltiplos de 5 entre 1 e 100



  void main()
  {
      setlocale(LC_ALL,"");
      system("color 7C");
      printf("EXIBIR MÚLTIPLOS DE 5 ENTRE 1 E 100: \n");
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

//função principal
  void main ()
  {
      setlocale(LC_ALL,"");
      system("color 7C");
      printf("EXIBIR NÚMEROS MÚLTIPLOS DE 3 E ÍMPARES: \n");
      MULTIPLO();

  }

  //função para calcular multiplo
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
// Faça um programa em C que solicite ao usuário a quantidade de termos
// que ele deseja exibir da seguinte sequência:3, 6, 9, 12, 15,...
// Obs.: Crie uma função para garantir que essa quantidade deve ser
// deve ser maior que zero e representada pela variável K.


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
            printf("DIGITE UM NÚMERO POSITIVO: ");
            scanf("%d", &k);

            if(k<0)
                printf("NÚMERO INVÁLIDO\nTENTE NOVAMENTE\n\n");
        }while(k<0);
    }

#endif // ex05


#ifdef ex06
// Faça um programa em C que solicite ao usuário a quantidade de termos
// que ele deseja exibir da seguinte sequência: 1/4, 1/8, 1/12, 1/16, 1/20,...
// Obs.: Crie uma função para garantir que essa quantidade deve ser deve ser
// maior que zero e representada pela variável K





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
            printf("DIGITE UM NÚMERO POSITIVO: ");
            scanf("%d", &k);

            if(k<0)
                printf("NÚMERO INVÁLIDO\nTENTE NOVAMENTE\n\n");
        }while(k<0);
    }

#endif // ex06


#ifdef ex07
// Faça um programa em C que solicite ao usuário a quantidade de termos
// que ele deseja exibir da seguinte sequência: 2/5, 4/10, 6/15, 8/20, 10/25, 12/30,...
// Obs.: Crie uma função para garantir que essa quantidade deve ser deve ser maior
// que zero e representada pela variável K.

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
            printf("DIGITE UM NÚMERO POSITIVO: ");
            scanf("%d", &k);

            if(k<0)
                printf("\n\tNÚMERO INVÁLIDO\n\tTENTE NOVAMENTE\n\n");
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
// Faça um programa em C que solicite ao usuário a quantidade de termos representada
// pela variável X que representa a quantidade de termos que o usuário deseja.
// H representa cada um desses números, calcule o produto dos X números.
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
                    printf("Número inválido\nTENTE NOVAMENTE");
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
        printf("Digite um número maior que zero: ");
        scanf("%f", &numb);

        if(numb <= 0)
        {
            printf("VALOR INVÁLIDO | TENTE NOVAMENTE\n\n");
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
    //há duas formas de imprimir o valor na tela 1º criando uma variavel e atribuindo o valor a ela com a função ou
    // chamar direto no printf a função

}

#endif // ex10


