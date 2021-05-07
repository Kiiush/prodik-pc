#include "telas.h"

//menu sobre nos
int menuSobre(void) {
  int op0;
    printf("\n");
    printf("///////////////////////////////////////////////////////////////////////////////\n");
    printf("///                                                                         ///\n");
    printf("///                            ***************                              ///\n");
    printf("///                            ** SOBRE NOS **                              ///\n");
    printf("///                            ***************                              ///\n");
    printf("///                                                                         ///\n");
    printf("///  Prodik e um programa feito com o intuito de ajudar aqueles que querem  ///\n");
    printf("///  digitar de forma mais rapida e pratica, com a ajuda de diversos jogos  ///\n");
    printf("///  e desafios para treinar seus reflexos e habilidades de digitacao.      ///\n");
    printf("///  Seja para treinar ou apenas se divertir, Prodik podera te ajudar       ///\n");
    printf("///                                                                         ///\n");
    printf("///                          Pressione 0 para voltar                        ///\n");
    scanf("%i", &op0);
    getchar();
    printf("///                                                                         ///\n");
    printf("///////////////////////////////////////////////////////////////////////////////\n");
    printf("\n");
    return op0;
}

//menu da criação da conta
int menuCriarConta (void) {
	
	char contaNome[20];
	char contaSenha[20];
  int op4;
	
    printf("\n");
    printf("/////////////////////////////////////////////////////////////////////\n");
    printf("///                                                               ///\n");
    printf("///                        *****************                      ///\n");
    printf("///                        ** Criar Conta **                      ///\n");
    printf("///                        *****************                      ///\n");
    printf("///                                                               ///\n");
    printf("///                        Digite seu nome (login):               ///\n");
	scanf("%[A-Z a-z 0-9]", contaNome);
	getchar();
    printf("///                        Digite sua senha:                      ///\n");
	scanf("%[A-Z a-z 0-9]", contaSenha);
	getchar();
    printf("///                                                               ///\n");
    printf("///                    Pressione 0 para voltar                    ///\n");
    scanf("%i", &op4);
    getchar();
    printf("///                                                               ///\n");
    printf("/////////////////////////////////////////////////////////////////////\n");
    printf("\n");
    return op4;
}

int menuEntrarConta (void) {
	
	char contaNome[20];
	char contaSenha[20];
  int op8;
	
    printf("\n");
    printf("/////////////////////////////////////////////////////////////////////\n");
    printf("///                                                               ///\n");
    printf("///                        ******************                     ///\n");
    printf("///                        ** Entrar Conta **                     ///\n");
    printf("///                        ******************                     ///\n");
    printf("///                                                               ///\n");
    printf("///                        Digite seu nome (login):               ///\n");
	scanf("%[A-Z a-z 0-9]", contaNome);
	getchar();
    printf("///                        Digite sua senha:                      ///\n");
	scanf("%[A-Z a-z 0-9]", contaSenha);
	getchar();
    printf("///                                                               ///\n");
    printf("///                    Pressione 0 para voltar                    ///\n");
    scanf("%i", &op8);
    printf("///                                                               ///\n");
    printf("/////////////////////////////////////////////////////////////////////\n");
    printf("\n");
  return op8;
}

//menu de resetar os dados
int menuReset (void) {
  char op5;
    printf("\n");
    printf("/////////////////////////////////////////////////////////////////////\n");
    printf("///                                                               ///\n");
    printf("///                      *******************                      ///\n");
    printf("///                      ** Resetar Conta **                      ///\n");
    printf("///                      *******************                      ///\n");
    printf("///                                                               ///\n");
    printf("///       Tem certeza que deseja resetar os dados da conta?       ///\n");
    printf("///                                                               ///\n");
    printf("///                   (S)                     (N)                 ///\n");
    printf("///                                                               ///\n");
    printf("///                                                               ///\n");
    printf("///                    Pressione 0 para voltar                    ///\n");
    scanf("%char", &op5);
    getchar();
    printf("///                                                               ///\n");
    printf("/////////////////////////////////////////////////////////////////////\n");
    printf("\n");
    switch (op5){
      case 'S': printf("conta resetada");
                break;
      case 'N': printf("conta nao resetada");
    }
  return op5;
}

//menu que mostra os placares (relatorios) (o quao rapido cada pessoa digitou)
int menuPlacar (void) {
  char op6;
    printf("\n");
    printf("/////////////////////////////////////////////////////////////////////\n");
    printf("///                                                               ///\n");
    printf("///                          ************                         ///\n");
    printf("///                          ** Placar **                         ///\n");
    printf("///                          ************                         ///\n");
    printf("///                                                               ///\n");
    printf("/////////////////////////////////////////////////////////////////////\n");
    printf("//////        CayoDantas           |         19.3s             //////\n");
    printf("/////////////////////////////////////////////////////////////////////\n");
    printf("//////        MatheusMed           |         24.5s             //////\n");
    printf("/////////////////////////////////////////////////////////////////////\n");
    printf("//////        JoaoVictor           |         30.2s             //////\n");
    printf("/////////////////////////////////////////////////////////////////////\n");
    printf("//////        EricMarley           |         32.1s             //////\n");
    printf("/////////////////////////////////////////////////////////////////////\n");
    printf("//////                             |                           //////\n");
    printf("/////////////////////////////////////////////////////////////////////\n");
    printf("//////                             |                           //////\n");
    printf("/////////////////////////////////////////////////////////////////////\n");
    printf("//////                             |                           //////\n");
    printf("/////////////////////////////////////////////////////////////////////\n");
    printf("//////                             |                           //////\n");
    printf("/////////////////////////////////////////////////////////////////////\n");                            
    printf("///                                                               ///\n");
    printf("///                    Pressione 0 para voltar                    ///\n");
    scanf("%char", &op6);
    getchar();
    printf("///                                                               ///\n");
    printf("/////////////////////////////////////////////////////////////////////\n");
    printf("\n");
  return 0;
}

//menu de configuracoes
int menuConfig (void) {
  int op2;
    printf("\n");
    printf("/////////////////////////////////////////////////////////////////////\n");
    printf("///                                                               ///\n");
    printf("///                      *******************                      ///\n");
    printf("///                      ** Configuracoes **                      ///\n");
    printf("///                      *******************                      ///\n");
    printf("///                                                               ///\n");
    printf("///                       1 - Criar Conta                         ///\n");
    printf("///                       2 - Entrar em conta                     ///\n");
    printf("///                       3 - Resetar Dados                       ///\n");
    printf("///                                                               ///\n");
    printf("///                    Pressione 0 para voltar                    ///\n");
    scanf("%i", &op2);
    getchar();
    printf("///                                                               ///\n");
    printf("/////////////////////////////////////////////////////////////////////\n");
    printf("\n");
    switch (op2){
    case 1: menuCriarConta();
            break;
    case 2: menuEntrarConta();
            break;
    case 3: menuReset();
            break;
    case 0:
            break;
    }
  return 0;
}

//menu Jogar
int menuJogar(void) {
  int op7;
    printf("\n");
    printf("/////////////////////////////////////////////////////////////////////\n");
    printf("///                                                               ///\n");
    printf("///                      *******************                      ///\n");
    printf("///                      **     Jogar     **                      ///\n");
    printf("///                      *******************                      ///\n");
    printf("///                                                               ///\n");
    printf("///                       1 - Jogar                               ///\n");
    printf("///                       2 - Ver Placares                        ///\n");
    printf("///                       0 - Sair                                ///\n");
    printf("///                                                               ///\n");
    printf("///                    Pressione 0 para voltar                    ///\n");
    scanf("%i", &op7);
    getchar();
    printf("///                                                               ///\n");
    printf("/////////////////////////////////////////////////////////////////////\n");
    printf("\n");
    switch (op7){
    case 1: printf("Jogos ainda nao criados");
            break;
    case 2: menuPlacar();
            break;
    case 0:
            break;
    }
  return 0;
}

//menu principal
int menuPrincipal(void) {
	int op;
  
  printf("\n");
  printf("/////////////////////////////////////////////////////////////////////\n");
  printf("///                                                               ///\n");
  printf("///             *************************************             ///\n");
  printf("///             ** Programa de Digitacao do Kiiush **             ///\n");
  printf("///             *************************************             ///\n");
  printf("///                                                               ///\n");
  printf("///                       1 - Jogar                               ///\n");
  printf("///                       2 - Configuracoes                       ///\n");
  printf("///                       3 - Sobre Nos                           ///\n");    
  printf("///                       0 - Sair                                ///\n");
  scanf("%i", &op);
  getchar();
  printf("///                                                               ///\n");
  printf("/////////////////////////////////////////////////////////////////////\n");
  printf("\n");
  return op;
}

//menu da conta
int menuConta (void) {
  int op3;
    printf("\n");
    printf("/////////////////////////////////////////////////////////////////////\n");
    printf("///                                                               ///\n");
    printf("///                           ***********                         ///\n");
    printf("///                           ** Conta **                         ///\n");
    printf("///                           ***********                         ///\n");
    printf("///                                                               ///\n");
    printf("///                       1 - Criar Conta                         ///\n");
    printf("///                       2 - Entrar em conta                     ///\n");
    printf("///                                                               ///\n");
    printf("///                     Pressione 0 para voltar                   ///\n");
    scanf("%i", &op3);
    getchar();
    printf("///                                                               ///\n");
    printf("/////////////////////////////////////////////////////////////////////\n");
    printf("\n");
  return op3;
}


