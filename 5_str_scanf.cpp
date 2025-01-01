#include <stdio.h>
#include <locale.h>

main() {
	setlocale(LC_ALL, "Turkish");
	
	double x;
	int n;
	char str1[20], str2[30], ad[20];
	
	printf("Ad-Soyad: ");

	//Whitespace iceren metin alma:
	gets(ad);
	
	printf("Adınız: %s dir.\n \n", ad);
	
	printf("Lütfen giriniz bir integer: ");
	scanf("%d", &n);
	printf("İnteger karekterimiz %d dir.\n\n", n);
	
	printf("Lütfen giriniz bir double: ");
	scanf("%lf", &x);
	printf("Double karekterimiz %g idi.\n\n", x);
	
	printf("Lütfen giriniz bir integer ve bir floating-point sayı: ");
	scanf("%d %lf", &n, &x);
	printf("Sayılarımız %d ve %g idi.\n", n, x);
	
	printf("İsim gir: ");
	scanf("%s", &str1);
	
	printf("Web adresini gir: ");
	scanf("%s", &str2);
	
	printf("Girilen isim: %s\n", str1);
	printf("Girilen Web site: %s\n ", str2);
	
	return 0;
}
