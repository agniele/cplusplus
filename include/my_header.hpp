//  Copyright (c) 2017 Agniele et augustin
//

#ifndef MY_HEADER_HPP
#define MY_HEADER_HPP

#include <stdlib.h>
#include <time.h>


void exo1(void)
{
	long a = 2, b = 1, c = 0;
	while (a + b > 0)
	{
		a = a - 2;
		b = b + 1;
		c = c + 1;
	}
}
void exo2 (void)
{
	long n = 3, fac = 1, i = 1;
	if (n > 0)
		while (i <= n)
		{
			fac = fac * i;
			i = i + 1;
		}
	else
		if (n < 0)
			fac = 0;
}

int essayer_code(unsigned short code)
{
	srand(time(NULL));
	static unsigned short guess = rand() % 10000;

	return (code == guess);
}

void exo3(void)
{
	int z = 0
		
		if ( x != z)
		{
			while (z > 1000)
			{
				int y = essayer_code(z);
				z = z + 1
			}
			}
		}



#endif // MY_HEADER_HPP



