/* Crie uma função que garanta que um número é negativo.
Receba dois números NEGATIVOS utilizando esta função.
Crie a função Verifcamultiplos e verifique se estes dois números são múltiplos ou não.
Exiba se são múltiplos ou não no interior da função VerificaMultiplos.
Pesquise na internet o que são múltiplos. */

#ifdef multiplos

 float a, b;

 void Negativo()
 {
     do{
     printf("DIGITE O 1° VALOR NEGATIVO: ");
     scanf("%f,%f",&a, &b);

     if(a>0)
        {
        printf("\nNúmero inválido\n");
        }
       }while(a>0);


     do{
     printf("\nDIGITE O SEGUNDO VALOR NEGATIVO: ");
     scanf("%f",&b);

     if(b>0){
        printf("\nNúmero inválido\n");
     }
       }while(b>0);


 }

 VerificarMult()
 {
        if(ab)
        {
            printf("MULTIPLO\n");

        }else
            printf("NÃO MULTI\n");
 }

main(){
    setlocale(LC_ALL,"");
    printf("");
    Negativo();
    VerificarMult();
}

#endif // multiplos
