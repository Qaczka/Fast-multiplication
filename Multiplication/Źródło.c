#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
	int a, b, c, i, m, n, a_bitowe[60], potega[60], binarnie[60], mnozenie, q;



	printf("Prosze wpisac a: \n");

	scanf("%i", &a);// PONIZEJ 32 000
					//a=1897;

	printf("\n");

	printf("Prosze wpisac b: \n");

	scanf("%i", &b);// PONIZEJ 2 000 000 000 ~32 bity binarne
					//b=50498;

	printf("\n");

	printf("Prosze wpisac c: \n");

	scanf("%i", &c);// PONIZEJ 32 000 ~Starczy 15 bitow binarnych
					//c=16112;

	printf("\n");

	printf("Program wyliczy teraz %i^%i mod %i\n", a, b, c);

	potega[0] = 1;

	a_bitowe[0] = a % c;
	i = 1;
	mnozenie = 1;


	while (potega[i - 1]<(b))
	{
		a_bitowe[i] = (a_bitowe[i - 1] * a_bitowe[i - 1]) % c;
		potega[i] = potega[i - 1] * 2;
		printf("A to: %i\n", a_bitowe[i]);
		i++;

		printf("Potega %i Liczba i %i\n", potega[i - 1], i);

	}

	while (i >= 0)
	{
		if (b - potega[i] >= 0)
		{
			b = b - potega[i];
			mnozenie = (mnozenie*a_bitowe[i]) % c;
			// printf("Mnozenie to: %i\n",mnozenie);

		}
		i--;

	}


	printf("Mnozenie to: %i", mnozenie);


	/*
	printf("Prosze wpisac q: \n");

	//q=105532;
	scanf("%i",&q);

	printf("Prosze wpisac n: \n");

	//n=280001;
	scanf("%i",&n);

	int ciag[80],d, mnoznik, koniec;

	mnoznik=0;
	koniec=0;

	//oblicze d
	d=n-1;

	while(koniec==0)
	{
	if((d%2)==0)
	{
	d=d/2;
	mnoznik++;
	}
	else{
	koniec=1;
	}
	}

	printf("%i\n",d);

	//---------------------------------------------------------------//

	long long int a_bitowe2[80], mnozenie2;

	b=d;
	c=n;

	potega[0]=1;

	a_bitowe2[0]=q%c;
	i=1;
	mnozenie2=1;


	while(potega[i-1]<(b))
	{
	a_bitowe2[i]=(a_bitowe2[i-1]*a_bitowe2[i-1])%c;
	potega[i]=potega[i-1]*2;
	printf("A to: %lli\n",a_bitowe2[i]);
	i++;

	printf("Potega %i Liczba i %i\n",potega[i-1],i);

	}

	while(i>=0)
	{
	if(b-potega[i]>=0)
	{
	b=b-potega[i];
	mnozenie2=(mnozenie2*a_bitowe2[i])%c;
	// printf("Mnozenie to: %i\n",mnozenie);


	}
	i--;
	}

	printf("%lli\n",mnozenie2);

	for(i=2;i<mnoznik+2;i++)
	{
	if(mnozenie2==(n-1))
	{
	mnozenie2=-1;
	i=mnoznik+2;
	}
	else{
	mnozenie2=(mnozenie2*mnozenie2)%c;
	printf("%lli\n",mnozenie2);
	}

	}

	if(mnozenie2==-1)
	{
	printf("n jest prawdopodobnie liczba pierwsza\n",mnozenie2);
	}
	else{
	printf("n jest liczba zlozona\n",mnozenie2);

	}
	*/


	return 0;
}
