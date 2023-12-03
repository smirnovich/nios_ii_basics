/*
main.c nios_load1 test
*/

#include "io.h"		   //low-level library to read and write registers
#include "alt_types.h" // Altera-specific types
#include "system.h"	   // Qsys/Platform Designer generated file with base addresses etc.

/*
wrapper for io read function
*/
void sw_get_command(alt_u32 sw_base, int *prd)
{
	*prd = IORD(sw_base, 0) & 0x000003ff;
}

/*
MAIN function body
*/
int main()
{
	int prd;
	int i = 0x1;
	unsigned long j, itr;

	while (1) // round-robin cycle
	{
		sw_get_command(SWITCH_BASE, &prd);
		itr = prd * 2500;
		for (j = 0; j < itr; j++) // simple pause by for-cycle
		{
		}
		if (i >= 0x800)
		{
			IOWR(LEDR_BASE, 0, 0x0);
			i = 0x1;
		}
		else
		{
			IOWR(LEDR_BASE, 0, i - 1);
			i = i << 1;
		}
	}

	return 0;
}
