#include <stdio.h>

void SystemPause()
{
	printf("Press Enter to continue...");
        while (getchar() != '\n');
}

main()
{
	printf("This is an example SystemPause()\n");
	SystemPause();
	
	return 0;	
}