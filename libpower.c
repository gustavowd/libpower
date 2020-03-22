#include <stdio.h>

float power(float a, float b){
	int i = 0;
	int j = (int)b;
	float resp = a;

	//printf("Powerlib usada!\n\r");
	for(i=0;i<(b-1);i++){
		resp = resp*a;
	}

	return resp;
}
