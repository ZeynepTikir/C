#include <stdio.h>
#include <locale.h>	

main() {
	//Turkce harfleri de yazdırmak icin eklenmeli.
	setlocale(LC_ALL, "Turkish");	

	//20 karakterli bir kelime degiskeni olusturuldu.
	char kelime[20]; 
	
	printf("\nBir kelime girin: ");
	scanf("%s", kelime);
	
	printf("\nGirilen değer = %s ", kelime);

	return 0;
}
