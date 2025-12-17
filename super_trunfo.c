#include <stdio.h>
#include <stdlib.h>


int main(){



     //Primeira carta
      int   p_turisc,I=0;
      int   ataque;
     
      float popu;
      float especial;
      float PIB;
      float Rpib;
      float poder;
      float DSD;
      float Area;
      
      char estado;
      char N_cid[10];
      char codigo[4];




    //Segunda Carta
      int    p_turisc2;
     
      float  popu2;
      float  especial2;
      float  Rpib2;
      float  PIB2;
      float  poder2;
      float  DSD2;
      float  Area2;
      
      char  estado2;
      char  N_cid2[50];
      char  codigo2[4];

    
      printf("--------------------SUPER-TRUNFO-------------------------------\n");
    

    while (I <= 5)
    {

     //Dados Primeira Carta   
      printf("-------------------///////////////------------------------------\n");
      printf("Digite Uma letra, que Representa um dos oito estados! EX(A-H)..\n ");
      scanf("%c",&estado);

      printf("Me Informe o Codigo Da Carta Ex(ex: A01)...\n");
      scanf("%s",&codigo);

      printf("Nome da cidade?\n");
      scanf("%s",&N_cid);

      printf("Digite a população  da cidade:\n");
        scanf("%f",&popu);

      printf("Area(Km)\n");
        scanf("%f:",&Area);
        DSD =  popu / Area;

      printf("PIB(-Produto Interno Bruto-)\n");
      scanf("%fbilhões de reais",&PIB);
      Rpib = PIB /popu ;

      printf("Número de Pontos Turísticos\n");
      scanf("%d",&p_turisc);
      //Fim Dados
      
      poder = (PIB + popu)/ Area;
      especial = (Rpib + DSD + poder ) / Area;
     


     //Segunda Carta
     printf("---------------Insira Os Dados da segunda carta------------------\n");
     printf(" Digite Uma letra, que Representa um dos oito estados! EX(A-H)..\n ");
      scanf("%s",&estado2);

      printf("Me Informe o Codigo Da Carta Ex(ex: A01)...\n");
      scanf("%s",&codigo2);

      printf("Nome da cidade?\n");
      scanf("%s",&N_cid2);

      printf("Digite a população  da cidade:\n");
        scanf("%f",&popu2);

      printf("Area(Km)\n");
        scanf("%f:",&Area2);
        DSD2 =  popu2 / Area2;

      printf("PIB(-Produto Interno Bruto-)\n");
      scanf("%f",&PIB2);
      Rpib2 = PIB2 / popu2 ;

      printf("Número de Pontos Turísticos\n");
      scanf("%d",&p_turisc2);


      poder2 = (PIB2 + popu2)/ Area2;

       poder2 = (PIB2 + popu2)/ Area2;
       especial2 = (Rpib2 + DSD2 +poder2) / Area2;
     //Fim Segunda
 
     printf("----------------------------------------------------------------\n");
      //O que vai aparecer na tela Primeira carta
    printf("Carta 1:\n");
    printf("Estado: %c\n", estado);
    printf("Código da Carta: %s\n", codigo);
    printf("Nome da Cidade: %s\n", N_cid);
    printf("População: %.f\n", popu);
    printf("Área (Km²): %.2f\n", Area);
    printf("PIB per capita: %.2f\n", Rpib);
    printf("Densidade Populacional: %.2f\n", DSD);
    printf("Número de Pontos Turísticos: %d\n", p_turisc);
    printf("Força da Carta: %.2f\n", poder); 
    printf("Especial:%.2f\n",especial);
    printf("----------------------------------------------------------------\n");
   
      //O que vai aparecer na tela Segunda carta
    printf("Carta 2:\n");
    printf("Estado: %c\n", estado2);
    printf("Código da Carta: %s\n", codigo2);
    printf("Nome da Cidade: %s\n", N_cid2);
    printf("População: %.2f\n", popu2);
    printf("Área (Km²): %.2f\n", Area2);
    printf("PIB per capita: %.2f\n", Rpib2);
    printf("Densidade Populacional: %.2f\n", DSD2);
    printf("Número de Pontos Turísticos: %d\n", p_turisc2);
    printf("Força da Carta: %.2f\n", poder2);
    printf("Especial:%.2f\n",especial2);
    printf("--------------------------------------------------------------------\n");

    printf("Usar Qual Atributo para comparação\n");
    printf("----------------------////////----------------------------------------\n");
    printf("1. Especial!!\n");
    printf("2. Força Da Carta\n");
    printf("----------------------////////----------------------------------------\n");
    scanf("%d",&ataque);
      

     switch (ataque)
     {case 1:
       if ((especial < especial2 )&&( especial2 > especial))
       {printf("####Carta 1 ganhou Parabens!#####\n");
       }else if ((especial2 == especial)&&(especial == especial2))
       {printf("#####Rodada Empatou#####\n");
       }else{printf("###Carta:2 Vencedora###\n");}

      break;
      case 2:
       if ((poder > poder2 )&&( poder2 < poder))
       {printf("####Carta 1 ganhou Parabens!#####\n");
       }else if ((poder2 == poder)&&(poder2== poder))
       {printf("#####Rodada Empatou#####\n");
       }else{printf("###Carta:2 Vencedora###\n");}
       printf("--------------------////////////-------------------------------------------\n");
      break;
       default:
         printf("Escolha invalida\n");
         printf("-----------------////////////--------------------------------------------\n");
      break;}

      I++; }
     printf("---------------------Fim Do Programa----------------------------\n");
       
     system("pause"); 


     return 0;
     
     

    }

    
