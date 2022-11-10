#include <stdio.h>
#include <unistd.h>
#include <string.h>
#include <ctype.h>
#include <stdarg.h>




int	main(int argn, char **argv)
{
/* 	printf ("|%x|\n", 156);
	printf ("|%X|\n", 156);
	printf ("|%#x|\n", 156);
	printf ("|%#X|\n", 156);
	printf ("|%05x|\n", 156);
	printf ("|%05X|\n", 156);
	printf ("|%0#5x|\n", 156);
	printf ("|%+08X|\n", 156);
	printf ("|%+0#8x|\n", 156);
	printf ("|%0#5X|\n", 156);
	printf("|% 05d|\n",0);
	printf("|% 05d|\n",-7);
	printf("|%- 5d|\n",0);
	printf("|%- 5d|\n",-7);
	printf("|%5d|\n",-7);
	printf("% 05d\n",1560133635);
	printf("% 05d\n",-2035065302);
	printf("|%+#f|\n",7.); */
	

	printf("|%05s|\n", "hol");	//|00hol|
	printf("|%50s|\n", "hol");	//|00hol|
	printf("|%-5s|\n", "hol1");	//|hol1  |
	printf("|%-05s|\n", "hol1");//|hol1  |
	printf("|%0-5s|\n", "hol1");//|hol1  |
	
	printf("|%5s|\n", "hol");	//|  hol|
	printf("|%+5s|\n", "hol");	//|  hol|
	printf("|% 5s|\n", "hol");	//|  hol|
	printf("|%#5s|\n", "hol");	//|  hol|
	printf("|%5.s|\n", "hol");	//|     |
	printf("|%5.2s|\n", "hol");	//|   ho|
	printf("|%+5.2s|\n", "hol");
	printf("|%-5.2s|\n", "hol");
	printf("|% 5.2s|\n", "hol");
	printf("|%05.2s|\n", "hol");
	printf("|%#5.2s|\n", "hol");
	
/* 	double i = 2.7835;
	double j = -2.7835;
	printf("|%f|\n",i);
	printf("|%10.f|\n",i);
	printf("|%10.f|\n",j);
	printf("|%-10.1f|\n",i);
	printf("|%-10.1f|\n",j);
	printf("|%10.2f|\n",i);
	printf("|%10.2f|\n",j);
	printf("|%10.3f|\n",i);
	printf("|%10.3f|\n",j);
	printf("|%10.5f|\n",i);
	printf("|%10.5f|\n",j);
 */

}
