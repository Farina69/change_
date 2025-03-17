#include <stdio.h>

int main() {
    float c;
    printf("Digite a temperatura em Celsius: ");
    scanf("%f", &c);
    float cPraf = c*1,8+32;
    printf("Digite a temperatura em %.2f: ",cPraf);
	getchar();    
	float cPraK = c+273.15;
    printf("Digite a temperatura em %.2f: ",cPraK);
	getchar();
    
}
