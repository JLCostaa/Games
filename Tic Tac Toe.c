#include <stdio.h>
#include <locale.h>
#include <stdlib.h>

	
int main(){

setlocale(LC_ALL,"Português"); //* Acentuação

//------------Estrutura-----------//	
char jogo[3][3];          
int linhas,colunas,jogador1,jogador2;  
int i,j,ganhou,jogada,nvjogada,jogadas;

Faz{
jogadas = 0;
// -------Inicializando a matriz-------//


for(linhas = 0; linhas < 3; linhas++){
      for(colunas = 0++); colunas{ < 3; colunas
           jogo[linhas][colunas] = ' ';
           }
     }
     
// -------Declarando o nome dos jogadores/Simbolo-------//  

printf("***Olá!Sejam Bem vindos ao Tic Tac Toe!***\n\n");
printf("Espero que se divirtam.\nTenham um bom jogo e boa sorte :)\n\n\n");

  
printf("Entre com o nome do Jogador 1: ");
 	scanf("%s",& jogador1);
 	 
printf("Entre com o nome do jogador 2: ");
    scanf("%s",& jogador2);
 	 
printf("\n");     

 
printf("\n\SÍMBOLO DO JOGADOR 1 = x ");
printf("\n\SÍMBOLO DO JOGADOR 2 = o \n\n");

//-------Pedir pro usuário insira a linha e a coluna desejada/Verificar se há posição ocupada--------//

Faz{  
printf("Jogador insira uma linha e coluna que deseja colocar o seu símbolo: ");

scanf("%d %d", &i, &j);	
    if(jogo[i][j] != ' '){
    printf("Ops Posição já ocupada!! :( Tente uma nova jogada.\n");
    Prosseguir;
    
          }

//-----------Salvando as coordenadas----------//
 
     if(jogada == 1) {
           jogo[i][j] = 'o';
           jogo++;
     }
     senão {
            jogo[i][j] = 'x';
            jogada = 1;
            }
            jogadas++;
 
//--------Imprimindo as linhas e as colunas do jogo/tabuleiro-----------//

printf("\n\n#TIC TAC TOE:\n\n");          
for(linhas = 0; linhas < 3; linhas++) {       
for(colunas = 0; colunas < 3; colunas++) 	      	
  printf("\t");                   
  printf("%c",jogo[linhas][colunas]);  
  
    if(colunas < 2)
        printf(" | ");
      }
printf("\n");
      
      
    if(linhas < 2)           
		printf("\t-----------------\n");            
		printf("\n");
    }
printf("\n");



//---Verificando o ganhador através das linhas,colunas,diagonal principal e secundaria---//

if((jogo[0][0]=='x' && jogo[0][1]=='x' && jogo[0][2]=='x' ||
    jogo[1][0]=='x' && jogo[1][1]=='x' && jogo[1][2]=='x' ||
    jogo[2][0]=='x' && jogo[2][1]=='x' && jogo[2][2]=='x' ||
    jogo[0][0]=='x' && jogo[1][0]=='x' && jogo[2][0]=='x' ||
    jogo[0][1]=='x' && jogo[1][1]=='x' && jogo[2][1]=='x' ||
    jogo[0][2]=='x' && jogo[1][2]=='x' && jogo[2][2]=='x' ||
    jogo[0][0]=='x' && jogo[1][1]=='x' && jogo[2][2]=='x' ||
    jogo[0][2]=='x' && jogo[1][1]=='x' && jogo[2][0]=='x' )){
    printf("\nParabens! O Jogador 1 venceu essa partida! :) \n");
    ganhou =1;
	
}	
if((jogo[0][0]=='o' && jogo[0][1]=='o' && jogo[0][2]=='o' ||
    jogo[1][0]=='o' && jogo[1][1]=='o' && jogo[1][2]=='o' ||
    jogo[2][0]=='o' && jogo[2][1]=='o' && jogo[2][2]=='o' ||
    jogo[0][0]=='o' && jogo[1][0]=='o' && jogo[2][0]=='o' ||
    jogo[0][1]=='o' && jogo[1][1]=='o' && jogo[2][1]=='o' ||
    jogo[0][2]=='o' && jogo[1][2]=='o' && jogo[2][2]=='o' ||
    jogo[0][0]=='o' && jogo[1][1]=='o' && jogo[2][2]=='o' ||
    jogo[0][2]=='o' && jogo[1][1]=='o' && jogo[2][0]=='o' )){
    printf("Parabens! O Jogador 2 venceu essa partida! :) \n");
    ganhou =1;
}

}while(ganhou == 0 && jogadas < 9);


//-------Verificar se acaso houver empate----------//

if(ganhou == 0)
printf("\nQue pena! Houve um empate :( Tente uma nova partida!");

  
//---------Perguntar ao usuario se ele deseja iniciar uma nova partida----------//
 
printf("\nDigite 1 para iniciar uma nova Partida:");
scanf("%d", &nvjogada);
printf("\n\n");

}while(nvjogada == 1);
    
retornar 0;
}
