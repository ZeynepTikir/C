#include <stdio.h>
#include <conio.h>
#include <locale.h>

main() {
	setlocale(LC_ALL, "Turkish");
	double x;
	int n;
	char str1[20], str2[30], ad[20];
	
	printf("Ad-Soyad: ");
	gets(ad);
	printf("Ad�n�z: %s dir.\n \n", ad);
	
	printf("L�tfen giriniz bir integer: ");
	scanf("%d", &n);
	printf("�nteger karekterimiz %d dir.\n\n", n);
	printf("L�tfen giriniz bir double: ");
	scanf("%lf", &x);
	printf("Double karekterimiz %g idi.\n\n", x);
	printf("L�tfen giriniz bir integer ve bir floating-point say�: ");
	scanf("%d%lf", &n, &x);
	printf("Say�lar�m�z %d ve %g idi.\n", n, x);
	
	printf("�sim gir: ");
	scanf("%s", &str1);
	
	printf("Web adresini gir: ");
	scanf("%s", &str2);
	
	printf("Girilen isim: %s\n", str1);
	printf("Girilen Web site: %s\n ", str2);
	
	getch ();
	
}
