#include <stdio.h>
#include <math.h>
#include <stdlib.h>

// AMPLITUDE DO SINAL 

double amplitude(int x, float b) {
	double a0; 
	a0 = 348.11;
	double a1; 
	a1 = -278.007;
	double a2;
	a2 = 64.9146;
	double a3; 
	a3 = -6.62433;
	double a4;
	a4 = 0.346464;
	double a5; 
	a5 = -0.0097146;
	double a6; 
	a6 = 0.000138889;
	double a7;
	a7 = -7.94637 * pow(10, -7);
	
	return a0 + (a1 + b) * x + (a2 * pow(x, 2)) + (a3 * pow(x, 3)) + (a4 * pow(x, 4)) + (a5 * pow(x, 5)) + (a6 * pow(x, 6)) + (a7 * pow(x, 7));
	
}


int main(){
    char cripto[100];
    int i, j, k;
    double m;
    float var_agente;
    
    printf("digite o tanto de mensagens: ");
    scanf("%d", &j);

    if (j >= 1) {
    	for(k = 0; k < j; k++){
    		printf("Digite o valor da variavel b: ");
    		scanf("%f", &var_agente);
    		printf("Digite a mesagem codificada: ");
    		for (i = 0; i < 50; i++){
        		scanf("%2x", &cripto[i]);
    		} 
    		printf("resultado: \n");
    		for(i = 1; i < 51; i++){
        	m = amplitude(i, var_agente);
        	if (cripto[i - 1] == 0){
        		break;
			} else if(m > 0) {
				printf("%c", cripto[i - 1]);
				}
    		}
    		printf("\n");
		}
    
	}
    
    return 0;
}
