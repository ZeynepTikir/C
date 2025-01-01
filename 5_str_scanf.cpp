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
	printf("Adýnýz: %s dir.\n \n", ad);
	
	printf("Lütfen giriniz bir integer: ");
	scanf("%d", &n);
	printf("Ýnteger karekterimiz %d dir.\n\n", n);
	printf("Lütfen giriniz bir double: ");
	scanf("%lf", &x);
	printf("Double karekterimiz %g idi.\n\n", x);
	printf("Lütfen giriniz bir integer ve bir floating-point sayý: ");
	scanf("%d%lf", &n, &x);
	printf("Sayýlarýmýz %d ve %g idi.\n", n, x);
	
	printf("Ýsim gir: ");
	scanf("%s", &str1);
	
	printf("Web adresini gir: ");
	scanf("%s", &str2);
	
	printf("Girilen isim: %s\n", str1);
	printf("Girilen Web site: %s\n ", str2);
	
	getch ();
	
}
