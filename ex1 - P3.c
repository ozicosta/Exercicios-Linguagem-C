#include<stdio.h>
#include<locale.h>
#include<math.h>
#define ex03

#ifdef ex01 // notaPonderada
/* A nota de um estudante � calculada a partir de 3 notas atribuidas
respectivamente a um trabalho de laborat�rio, a uma avalia��o semestreal e um exame.
A m�dia das 3 notas mencionadas anteriormente obedece os pesos a seguir:

TRABALHO DE LABORAT�RIO     2
AVALIA��O SEMESTRAL         3
EXAME FINAL                 5                                                    */

    float  notaTL, notaAS, notaEF, mediaTOTAL;



    LABORATORIO()
    {
        do{
            printf("DIGITE A NOTA: TRABALHO DE LABORAT�RIO:\n");
            scanf("%f", &notaTL);

            if(notaTL<0 || notaTL>2){
                printf("Somente n�meros entre 0 e 2\n");
            }
        }while(notaTL<0 || notaTL>2);
    }



    AVALIACAO_SEMESTRAL()
    {
      do{
            printf("DIGITE A NOTA: AVALIA��O SEMESTRAL\n");
            scanf("%f", &notaAS);

            if(notaAS<0 || notaAS>3){
                printf("Somente n�meros entre 0 e 3\n");
            }
        }while(notaAS<0 || notaAS>3);
    }



    EXAME_FINAL()
    {
      do{
            printf("DIGITE A NOTA:  EXAME FINAL\n");
            scanf("%f", &notaEF);

            if(notaEF<0 || notaEF>5){
                printf("Somente n�meros entre 0 e 5\n");
            }
        }while(notaEF<0 || notaEF>5);
    }


    CONCEITO()
    {


        if(mediaTOTAL == 8 || mediaTOTAL == 9 || mediaTOTAL == 10)
        {
            printf("\n CONCEITO A\n");

        }else if (mediaTOTAL == 7){

            printf("\n CONCEITO B\n");


          }else if (mediaTOTAL == 6){

            printf("\n CONCEITO C\n");

           }else if (mediaTOTAL == 5){

            printf("\nCONCEITO D\n");

           }else if (mediaTOTAL ==0 || mediaTOTAL <5){

            printf("\n CONCEITO E\n");

        }else printf("conceito INVALIDO\n");
    }



    main()
    {
        system("color 7d");
        setlocale(LC_ALL,"");
        printf("CARO PROFESSOR, DIGITE AS NOTAS DO ESTUDANTE...\n");
        LABORATORIO();
        AVALIACAO_SEMESTRAL();
        EXAME_FINAL();
        mediaTOTAL = notaAS + notaTL + notaEF;
        printf("\nA media ponderada das NOTAS �: %.0f + %.0f + %.0f  = %.0f \n", notaAS, notaTL, notaEF, mediaTOTAL);
        CONCEITO();

    }



#endif // ex01 - notaPonderada


#ifdef ex02


    float nota1,  nota2, nota3, mediaf, notaf, examef;


    NOTAS()
    {
        do{
            printf("\n\t\tDigite a primeira nota do aluno: ");
            scanf("%f", &nota1);

            if(nota1 < 0 || nota1 >10)

            printf("\n\t\tNOTA INV�LIDA \t- DIGITE NOVAMENTE\n");

        }while(nota1< 0 || nota1 > 10);



        do{
            printf("\n\t\tDigite a segunda nota do aluno: ");
            scanf("%f", &nota2);

            if(nota2 < 0 || nota2 >10)

            printf("\n\t\tNOTA INV�LIDA \t- DIGITE NOVAMENTE\n");

        }while(nota2< 0 || nota2 > 10);



        do{
            printf("\n\t\tDigite a primeira nota do aluno: ");
            scanf("%f", &nota3);

            if(nota3 < 0 || nota3 >10)

            printf("\n\t\tNOTA INV�LIDA \t- DIGITE NOVAMENTE\n");


        }while(nota3< 0 || nota3 > 10);

    }

    MEDIA()
    {
        mediaf = (nota1 + nota2 + nota3) / 3;
    }


    EXAME()
    {
        if(mediaf>=7 && mediaf<=10){
        printf("\n\n\t\tPARAB�NS, VOC� FOI APROVADO!!");
    }else if(mediaf>=3 && mediaf<=6){
        printf("\n\n\t\tFICOU DE EXAME\n\t\tPRECISA ESTUDAR UM POUCO MAIS");
    }else
        printf("\n\t\tVoc� foi REPROVADO");

    examef = (mediaf + notaf) /  2;

    }

    main()
    {
        setlocale(LC_ALL, "");
        system("color 7D");
        printf("\t\tCaro Professor\n\t\tDIGITE AS NOTAS DO ALUNO:\n\n");
        NOTAS();
        MEDIA();
        printf("\n\t\tM�dia final do aluno �: %.1f ", mediaf);
        EXAME();
        printf("\n\t\tEii, se liga...\n\t\tVoc� precisa tirar %.1f pra passar na mat�ria!", examef);
        printf("\n\n\t\ttecle  ENTER para finalizar...\n\n");
    }

#endif // ex02


 #ifdef ex03 // duasOp��es

 int   option;
 float num1, num2, numR, raiz;

    int main()

    {
        setlocale(LC_ALL,"");
        system("color 7D");


        printf("\n\t\t1 - SOMAR DOIS N�MEROS\n");
        printf("\t\t2 - RAIZ QUADRADA DE UM N�MERO\n\n");
        printf("\t\tDIGITE A OP��O DESEJADA: ");
        scanf("%d", &option);

    Options()
    {

        switch(option)
        {
        case 1:
            printf("\n\t\tDigite o primeiro  n�mero: ");
            scanf("%f", &num1);
            printf("\n\t\tDigite o segundo n�mero: ");
            scanf("%f", &num2);
            printf("\n\t\tO RESULTADO DA SOMA �: %.0f", num1 + num2);
            break;


        case 2:
            printf("\n\t\tDigite um N�mero: ");
            scanf("%f", &numR);


            do
            {

                if(numR < 0)
                {

                    printf("\n\t\tATEN��O: N�O EXISTE RAIZ QUADRADA DE N�MERO NEGATIVO");
                }
            }
            while(numR < 0);

            raiz = sqrt(numR);

            printf("\n\t\tsA RAIZ QUADRADA �: %.1f", raiz);

            break;

        default:

            printf("\n\t\tOP��O  INV�LIDA\n");
            break;
        }

    }

 #endif // ex03
