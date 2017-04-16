
#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

unsigned long int next = 1;

int rand()
{
	next = next * 1103515245 + 12345;
	return (unsigned int)(next/65536) % 32768;
}

main()
{
	int j, i, line, code;
	char	f[10];
	FILE 	*out1;
	int n2, n3, n4;


	rand(); rand();
	f[0] = 'l'; f[1] = 'u';
	for (j = 1; j  <= 500; j++){
		if (j < 10) {
			f[2] = j + '0';
			f[3] = '\0';
			}
		if ( ( j >= 10) && ( j < 100) ) {
			n3 = j % 10;
			n2 = (j - n3)/10 % 10;
			f[2] = n2 + '0';
			f[3] = n3 + '0';
			f[4] = '\0';
			}
		if ( ( j >=100) && ( j < 1000) ){
			n4 = j % 10;
			n3 = ( j - n4) / 10 % 10;
			n2 = (j - n4 - 10 * n3)/100%10;
			f[2] = n2 + '0';
			f[3] = n3 + '0';
			f[4] = n4 + '0';
			f[5] = '\0';
			}

		out1 = fopen(f, "w");
		line = rand() %100;
		printf("\n line = %d\n", line);
		for (i = 1; i <= line; i++){
			code = rand()%7 + 1;
			fprintf(out1,"%d  ", code);
			switch (code) {
				case 1:fprintf(out1,"%d ", rand()%3 + 1);
					break;
				case 2: fprintf(out1,"%d ", rand()%2 + 1);
					break;
				}
			if ( (code == 2) || (code == 4))
			fprintf(out1,"%f ", (float) rand()/32678.0 );

			fprintf(out1,"\n");
		}    /* for i */

	fclose(out1);
	} /* for j */
	return 0;
}

