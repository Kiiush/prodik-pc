#include <stdio.h>
#include <time.h>

int menuSobre(void);
int menuPrincipal(void);
int menuConfig(void);
int menuConta(void);
int menuReset(void);
int menuCriarConta(void);
int menuEntrarConta(void);
int menuPlacar(void);

int main(void) {
	int opcao, opcao2, opcao3, opcao4, opcao5, opcao0;
	do{
		opcao = menuPrincipal();
		switch (opcao){
			case 1:
			printf("jogos ainda nao criados");
			break;
      case 2:
      opcao2 = menuConfig();
      switch (opcao2){
        case 1:
        opcao3 = menuConta();
        switch (opcao3){
          case 1:
          menuCriarConta();
          break;
          case 2:
          menuEntrarConta();
          break;
          case 0:
          break;
        }
        case 2:
        opcao5 = menuReset();
        if (opcao5 == "S"){
          printf("Conta resetada");
        }else if (opcao5 == "N"){
          printf("Conta nao resetada");
        }else{
          printf("Digite Sim ou Nao");
        }
        break;

        case 0:
        break;
      }
      break;
      case 3:
      opcao0 = menuSobre();
      switch (opcao0){
        case 0:
        break;
      }
      break;

      case 4:
      menuPlacar;
      break;
		}
  }while (opcao != 0);
	return 0;
}



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
    printf("///                       1 - Conta                               ///\n");
    printf("///                       2 - Resetar Dados                       ///\n");
    printf("///                                                               ///\n");
    printf("///                    Pressione 0 para voltar                    ///\n");
    scanf("%i", &op2);
    getchar();
    printf("///                                                               ///\n");
    printf("/////////////////////////////////////////////////////////////////////\n");
    printf("\n");
  return op2;
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
    printf("///                                                               ///\n");
    printf("/////////////////////////////////////////////////////////////////////\n");
    printf("\n");
  return 0;
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
    printf("///                 (Sim)                   (Nao)                 ///\n");
    printf("///                                                               ///\n");
    printf("///                                                               ///\n");
    printf("///                    Pressione 0 para voltar                    ///\n");
    scanf("%char", &op5);
    getchar();
    printf("///                                                               ///\n");
    printf("/////////////////////////////////////////////////////////////////////\n");
    printf("\n");
  return 0;
}

//menu que mostra os placares (relatorios)
int menuPlacar (void) {
  char op6;
    printf("\n");
    printf("/////////////////////////////////////////////////////////////////////\n");
    printf("///                                                               ///\n");
    printf("///                          ************                         ///\n");
    printf("///                          ** Placar **                         ///\n");
    printf("///                          ************                         ///\n");
    printf("///                                                               ///\n");
    printf("///       Tem certeza que deseja resetar os dados da conta?       ///\n");
    printf("///                                                               ///\n");
    printf("///                 (Sim)                   (Nao)                 ///\n");
    printf("///                                                               ///\n");
    printf("///                                                               ///\n");
    printf("///                    Pressione 0 para voltar                    ///\n");
    scanf("%char", &op6);
    getchar();
    printf("///                                                               ///\n");
    printf("/////////////////////////////////////////////////////////////////////\n");
    printf("\n");
  return 0;
}
