#include <stdio.h>
int main() {
	int su, result;
	printf("Á¤¼ö ÀÔ·Â : ");
	scanf("%d", &su);

	/*if (su % 2 == 0) {
		printf("%d´Â Â¦¼ö \n", su);
	}else {
		printf("%d´Â È¦¼ö \n", su);
	}*/

	//»ïÇ× ¿¬»êÀÚ (Á¶°Ç) ? true : false;
	(su % 2 == 0) ? printf("%d´Â Â¦¼ö \n", su) : printf("%d´Â È¦¼ö \n", su);

	/*switch (su%2)
	{
	case 0:
		printf("%d´Â Â¦¼ö \n", su);
		break;
	case 1: case -1:
		printf("%d´Â È¦¼ö \n", su);
		break;
	}*/
	
	




	getchar();
	return 0;
}

