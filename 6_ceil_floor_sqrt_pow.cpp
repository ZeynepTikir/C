#include <stdio.h>
#include <conio.h>
#include <locale.h>
#include <math.h>

main() {
	setlocale(LC_ALL, "Turkish");
	float x=2.7;
	printf("x=%f \n\n", x);
	x=floor(x);	//a�a�� yuvarlama
	printf("floor x: %f \n", x); 
	x=ceil(2.3);	// yukaru yuvarlama
	printf("ceil x: %f \n\n", x);
	
	int a=16;
	int b=sqrt(a);
	printf("a=%d ve a'n�n karek�k�: ", a);
	printf("%d t�r.\n\n", b);
	
	int taban=3;
	int us=2;
	int sonuc=pow(taban,us);
	printf("%d^%d = ", taban,us);
	printf("%d dur. \n", sonuc);
	
	
	
	
	
	getch();
}
