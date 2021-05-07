#include <stdio.h>
#include <time.h>
#include <string.h>

int menuSobre(void);
int menuPrincipal(void);
int menuConfig(void);
int menuConta(void);
int menuReset(void);
int menuCriarConta(void);
int menuEntrarConta(void);
int menuPlacar(void);
int menuJogar(void);

int main(void) {
	int opcao, opcao2, opcao3, opcao0;
  // opcao4, opcao6, serão usadas posteriormente
  char opcao5;
	do{
		opcao = menuPrincipal();
		switch (opcao){
			case 1:
        menuJogar();
        break;
      case 2:
        menuConfig();
        break;
      case 3:
        menuSobre();
        break;
  }
}while (opcao != 0);
}
