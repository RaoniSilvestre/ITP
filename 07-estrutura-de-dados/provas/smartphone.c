#include <stdio.h>
#include <string.h>

struct Smartphone {
	char modelo[40];
	int memoria;
	float processador;
	float camera;
	float bateria;
};

int cadastraSmartphone(int qnt_cadastrada, struct Smartphone phones[]) {
  scanf(" %[^\n]s", phones[qnt_cadastrada].modelo);

	scanf("%d", &phones[qnt_cadastrada].memoria);
	scanf("%f", &phones[qnt_cadastrada].processador);
	scanf("%f", &phones[qnt_cadastrada].camera);
	scanf("%f", &phones[qnt_cadastrada].bateria);
	return ++qnt_cadastrada;
}

int pesquisaSmartphone(int qnt_cadastrada, struct Smartphone reqMin, struct Smartphone phones[]) {
  
	int qnt_encontrada = 0;
	
	for (int i=0; i<qnt_cadastrada; i++) {
    if (phones[i].memoria >= reqMin.memoria && phones[i].processador >= reqMin.processador && phones[i].camera >= reqMin.camera && phones[i].bateria >= reqMin.bateria) {
      printf("Modelo: %s\nMemoria: %dGB\nProcessador: %.2fGhz\nCamera: %.2fMPixels\nBateria: %.2fmA\n\n", phones[i].modelo, phones[i].memoria, phones[i].processador, phones[i].camera, phones[i].bateria);
			qnt_encontrada++;
    
  }
	}
	return qnt_encontrada;
}

int main(void) {
  struct Smartphone phones[100];
  struct Smartphone reqMin;
	char newSmarphone = 's';
	int qntCadastrada = 0;
	int qntencontrada = 0;
	do {
    scanf(" %c", &newSmarphone); 
    if (newSmarphone == 's') {
		  qntCadastrada = cadastraSmartphone(qntCadastrada, phones);
		}
	} while (newSmarphone == 's');

	scanf("%d", &reqMin.memoria);
	scanf("%f", &reqMin.processador);
	scanf("%f", &reqMin.camera);
	scanf("%f", &reqMin.bateria);

	qntencontrada = pesquisaSmartphone(qntCadastrada, reqMin, phones);
	printf("%d smartphones encontrados.", qntencontrada);
  return 0;
}