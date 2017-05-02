
#include <stdio.h>

FILE *out1;


main(){
	int i;
	int NUM = 112;

	out1= fopen("universe.lu", "w");

	for (i = 1; i <= NUM; i++){
	fprintf(out1, "%d  %d  %d  ", rand()%10 + 1, rand()%10+1, rand()%10+1);
	fprintf(out1, "< input/lu%d\n", i);
	}
	
	fclose(out1);
}


