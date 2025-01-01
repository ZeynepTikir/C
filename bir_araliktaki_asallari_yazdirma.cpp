//belirlenen iki sayi arasindaki asallari ve ortalamasini ekrana yazdirir.
#include <stdio.h>

main(){
	//Degiskenler tanimlandi.
	int a=0,b=0;
	int buyuk=0,kucuk=0;
	int asaldegil=0;
	float topla=0,adet=0;

	//Kullanicidan 2 sayi alinir
	printf ("1. sayiyi giriniz: ");
	scanf("%d",&a);
	printf("2. sayiyi giriniz: ");
	scanf ("%d",&b);

	//Kullanicinin girdigi hangi sayinin buyuk hangisinin kucuk oldugu belirlenir
   	if (a>b){
       		buyuk=a;
       		kucuk=b;
    	}
    	else{
       		buyuk=b;
       		kucuk=a;
    	}
       
    	for(int sayi=kucuk;sayi<buyuk;sayi++){    
		//kucuk sayidan baslayarak asallik kontrolu yapılacak.
		for(int i=2;i<sayi;i++){
			//kontrol edilen sayiyi bolebilen sayi var mi diye bakilir
			if(sayi%i==0)
            			asaldegil++;
    		}
		//eger asaldegil degiskeninin degeri 0 kalmissa asal oldugu anlasilir.
		if (asaldegil==0 && sayi!=1){
			//araliktaki asal sayilar alt alta yazdirilacak
			printf ("%d\n",sayi);
			//sayilarin adetleri ve toplamlari bulunacak.
			topla+=sayi;
			adet++;
		}
		//sonraki sayinin kontrolu icin kontrol degiskeninin degeri sifirlanir.
   		asaldegil=0;
    	}

	//ortalama ekrana yazdirilir.
    	printf("\n\nOrtalama= %.2f",topla/adet);

	return 0;
}
