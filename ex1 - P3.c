#include<stdio.h>
#include<locale.h>
#include<math.h>
#define ex03

#ifdef ex01 // notaPonderada
/* A nota de um estudante é calculada a partir de 3 notas atribuidas
respectivamente a um trabalho de laboratório, a uma avaliação semestreal e um exame.
A média das 3 notas mencionadas anteriormente obedece os pesos a seguir:

TRABALHO DE LABORATÓRIO     2
AVALIAÇÃO SEMESTRAL         3
EXAME FINAL                 5                                                    */

    float  notaTL, notaAS, notaEF, mediaTOTAL;



    LABORATORIO()
    {
        do{
            printf("DIGITE A NOTA: TRABALHO DE LABORATÓRIO:\n");
            scanf("%f", &notaTL);

            if(notaTL<0 || notaTL>2){
                printf("Somente números entre 0 e 2\n");
            }
        }while(notaTL<0 || notaTL>2);
    }



    AVALIACAO_SEMESTRAL()
    {
      do{
            printf("DIGITE A NOTA: AVALIAÇÃO SEMESTRAL\n");
            scanf("%f", &notaAS);

            if(notaAS<0 || notaAS>3){
                printf("Somente números entre 0 e 3\n");
            }
        }while(notaAS<0 || notaAS>3);
    }



    EXAME_FINAL()
    {
      do{
            printf("DIGITE A NOTA:  EXAME FINAL\n");
            scanf("%f", &notaEF);

            if(notaEF<0 || notaEF>5){
                printf("Somente números entre 0 e 5\n");
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
        printf("\nA media ponderada das NOTAS é: %.0f + %.0f + %.0f  = %.0f \n", notaAS, notaTL, notaEF, mediaTOTAL);
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

            printf("\n\t\tNOTA INVÁLIDA \t- DIGITE NOVAMENTE\n");

        }while(nota1< 0 || nota1 > 10);



        do{
            printf("\n\t\tDigite a segunda nota do aluno: ");
            scanf("%f", &nota2);

            if(nota2 < 0 || nota2 >10)

            printf("\n\t\tNOTA INVÁLIDA \t- DIGITE NOVAMENTE\n");

        }while(nota2< 0 || nota2 > 10);



        do{
            printf("\n\t\tDigite a primeira nota do aluno: ");
            scanf("%f", &nota3);

            if(nota3 < 0 || nota3 >10)

            printf("\n\t\tNOTA INVÁLIDA \t- DIGITE NOVAMENTE\n");


        }while(nota3< 0 || nota3 > 10);

    }

    MEDIA()
    {
        mediaf = (nota1 + nota2 + nota3) / 3;
    }


    EXAME()
    {
        if(mediaf>=7 && mediaf<=10){
        printf("\n\n\t\tPARABÉNS, VOCÊ FOI APROVADO!!");
    }else if(mediaf>=3 && mediaf<=6){
        printf("\n\n\t\tFICOU DE EXAME\n\t\tPRECISA ESTUDAR UM POUCO MAIS");
    }else
        printf("\n\t\tVocê foi REPROVADO");

    examef = (mediaf + notaf) /  2;

    }

    main()
    {
        setlocale(LC_ALL, "");
        system("color 7D");
        printf("\t\tCaro Professor\n\t\tDIGITE AS NOTAS DO ALUNO:\n\n");
        NOTAS();
        MEDIA();
        printf("\n\t\tMédia final do aluno é: %.1f ", mediaf);
        EXAME();
        printf("\n\t\tEii, se liga...\n\t\tVocê precisa tirar %.1f pra passar na matéria!", examef);
        printf("\n\n\t\ttecle  ENTER para finalizar...\n\n");
    }

#endif // ex02


 #ifdef ex03 // duasOpções

 int   option;
 float num1, num2, numR, raiz;

    int main()

    {
        setlocale(LC_ALL,"");
        system("color 7D");


        printf("\n\t\t1 - SOMAR DOIS NÚMEROS\n");
        printf("\t\t2 - RAIZ QUADRADA DE UM NÚMERO\n\n");
        printf("\t\tDIGITE A OPÇÃO DESEJADA: ");
        scanf("%d", &option);

    Options()
    {

        switch(option)
        {
        case 1:
            printf("\n\t\tDigite o primeiro  número: ");
            scanf("%f", &num1);
            printf("\n\t\tDigite o segundo número: ");
            scanf("%f", &num2);
            printf("\n\t\tO RESULTADO DA SOMA É: %.0f", num1 + num2);
            break;


        case 2:
            printf("\n\t\tDigite um Número: ");
            scanf("%f", &numR);


            do
            {

                if(numR < 0)
                {

                    printf("\n\t\tATENÇÃO: NÃO EXISTE RAIZ QUADRADA DE NÚMERO NEGATIVO");
                }
            }
            while(numR < 0);

            raiz = sqrt(numR);

            printf("\n\t\tsA RAIZ QUADRADA É: %.1f", raiz);

            break;

        default:

            printf("\n\t\tOPÇÃO  INVÁLIDA\n");
            break;
        }

    }

 #endif // ex03
