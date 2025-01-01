//belirlenen iki sayý arasýndaki asallarý ve ortalamasýný ekrana yazdýrýr.
#include <stdio.h>
#include <conio.h>
main(){
	int a=0,b=0,buyuk=0,kucuk=0,asaldegil=0;
	float topla=0,adet=0;
	printf ("1. sayiyi giriniz: ");
	scanf("%d",&a);
	printf("2. sayiyi giriniz: ");
	scanf ("%d",&b);

    if (a>b){
       buyuk=a;
       kucuk=b;
    }
    else{
       buyuk=b;
       kucuk=a;
    }
       
    for(int sayi=kucuk;sayi<buyuk;sayi++){               
		for(int i=2;i<sayi;i++){
			if(sayi%i==0)
            	asaldegil++;
    	}
		
		if (asaldegil==0&& sayi!=1){
			printf ("%d, ",sayi);
			topla+=sayi;
			adet++;
			/*if()
			printf(", ");
			else
			printf(". ");*/
		
		}
		
   		asaldegil=0;
    }
    
    printf("\n\nOrtalama= %.2f",topla/adet);
       
       getch();
}
