#include <stdio.h>
#include <math.h>

main() {
	float x=2.7;
	printf("x=%f \n\n", x);

	//float sayiyi asagi yuvarlama
	x=floor(x);	
	printf("floor x: %f \n", x); 

	//float sayiyi yukari yuvarlama
	x=ceil(2.3);	
	printf("ceil x: %f \n\n", x);
	
	int a=16;

	//bir sayinin karesini alma
	int b=sqrt(a);
	printf("a=%d ve a'nin karekökü: %d dir.\n\n", a,b);
	
	int taban=3;
	int us=2;

	//Bir sayinin ussunu alma
	int sonuc=pow(taban,us);
	printf("%d^%d = %d dur. \n", taban,us,sonuc);
	
	return 0;
}
