#include <stdio.h>
#include <conio.h>
#include <locale.h>

main() {
	setlocale(LC_ALL, "Turkish");
	char kelime[20]; //20 karakterli
	printf("\nBir kelime girin: ");
	scanf("%s", kelime);
	printf("\nGirilen deðer = %s ", kelime);
	getch();

}
