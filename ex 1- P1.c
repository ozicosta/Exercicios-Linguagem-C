/* Crie uma fun��o que garanta que um n�mero � negativo.
Receba dois n�meros NEGATIVOS utilizando esta fun��o.
Crie a fun��o Verifcamultiplos e verifique se estes dois n�meros s�o m�ltiplos ou n�o.
Exiba se s�o m�ltiplos ou n�o no interior da fun��o VerificaMultiplos.
Pesquise na internet o que s�o m�ltiplos. */

#ifdef multiplos

 float a, b;

 void Negativo()
 {
     do{
     printf("DIGITE O 1� VALOR NEGATIVO: ");
     scanf("%f,%f",&a, &b);

     if(a>0)
        {
        printf("\nN�mero inv�lido\n");
        }
       }while(a>0);


     do{
     printf("\nDIGITE O SEGUNDO VALOR NEGATIVO: ");
     scanf("%f",&b);

     if(b>0){
        printf("\nN�mero inv�lido\n");
     }
       }while(b>0);


 }

 VerificarMult()
 {
        if(ab)
        {
            printf("MULTIPLO\n");

        }else
            printf("N�O MULTI\n");
 }

main(){
    setlocale(LC_ALL,"");
    printf("");
    Negativo();
    VerificarMult();
}

#endif // multiplos
