#include <stdio.h>
#include <stdlib.h>

int main(){
	
	int hraInic = 0,
		minInic = 0,
		hraFim = 0,
		minFim = 0,
		duracaoHra = 0,
		duracaoMin = 0;
		
	scanf("%d %d", &hraInic, &minInic);
	scanf("%d %d", &hraFim, &minFim);
	
	if (hraInic < hraFim){
		duracaoHra = hraFim - hraInic;
		if (minInic < minFim){
			duracaoMin = minFim - minInic;
		}
		else{
			duracaoMin = (60 - minInic) + minFim;
			duracaoHra = duracaoHra - 1;
		}
	}
	if (hraInic > hraFim){
			duracaoHra = (24 - hraInic) + hraFim;
			if (minInic < minFim){
				duracaoMin = minFim - minInic;
			}
			else{
				duracaoMin = (60 - minInic) + minFim;
				duracaoHra = duracaoHra - 1;
			}
	}
	if ((hraInic == hraFim) && (minInic == minFim )){
		duracaoHra = 24;
		duracaoMin = 0;
	}
		
	printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n", duracaoHra, duracaoMin);
	
	return 0;
	
}
