


#include "stdio.h"
#include "stdlib.h"
#include "stdbool.h"
#include "math.h"
#include "string.h"

double 
lookup(double _5ht,double xin)
{
	return (1-exp(-pow(xin/_5ht,_5ht)))*_5ht;

}


int
main()
{
	bool quit = false;

	char _5ht_in[4];
	char xin_in[4];
	char* qstr = "quit";

	double xin;
	double _5ht;

	printf("welcome to Alex's 5ht lookup program. Type \"quit\" to exit\n");

	while(!quit)
	{
		printf("enter a _5ht value:\n");

		fgets(_5ht_in, 5 ,stdin);

		if(strcmp(qstr,_5ht_in) == 0)
		{
			printf("quitting...");
			quit = true;
			printf("cheerio\n\n\n");
			break;
		}


		printf("enter an xin value:\n");

		fgets(xin_in, 5, stdin);

		if(strcmp(qstr,xin_in) == 0)
		{
			printf("quitting...");
			quit = true;
			printf("cheerio\n\n\n");
			break;
					
		}

		_5ht = atof(_5ht_in);
		xin = atof(xin_in);
		printf("5ht = %lf, xin= %lf\n", _5ht, xin);
		printf("\nresult is %lf\n\n\n", lookup(_5ht, xin));
	
		
	}
	return 0;
}


