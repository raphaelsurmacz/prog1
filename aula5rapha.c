#include <stdio.h>
#include <unistd.h>

int main(){
    int i;

	for(i = 30; i <= 100; i=i+9){
		if((i > 30) && (i < 40))
			printf("%d Placa de vídeo ociosa\n", i);

		if((i > 60) && (i < 85))
			printf("%d Placa sob carga\n", i);

		if((i > 83) && (i < 92))
			printf("%d Controle térmico em curso, limitando processamento\n", i);

		if((i > 92))
			printf("%d Temperatura crítica, desligando...\n", i);

		sleep(1);
    }
    
    return 0;
}
