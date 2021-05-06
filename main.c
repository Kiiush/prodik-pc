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
	int opcao, opcao2, opcao3, opcao4, opcao6, opcao0;
  char opcao5;
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
        if (strcmp(opcao5, "S") == 0){
          printf("Conta resetada");
        }else if (strcmp(opcao5, "N") == 0){
          printf("Conta nao resetada");
        }else{
          printf("Digite S ou N");
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