#include <stdio.h>


int main() {
/*	//iki sayýyý toplama 
 int a;
 
 a = 3 ;
 
 printf ("%d\n",a);
 
 float b;
 
 b = 3.9 ;
 
 printf ("%.2f\n",b);
 
 float toplam ;
 
 toplam = a+b ;
 
 printf ("%f",toplam) ; */ 
 
 /* //iki sayýnýn kontrolü
 printf ("birici sayi giriniz:");
 
 int sayi1 ;
 
 scanf ("%d",&sayi1);
 
 printf ("ikici sayi giriniz:");

 int sayi2 ;

 scanf ("%d",&sayi2);

 if (sayi1==sayi2  )   {
 	
 	printf ("sayilar esit");
 	 	
 }
 else if (sayi1>sayi2) {
 	
 	
 	printf ("sayi1 daha buyuk");
 	
 }  
 else {
 	
 	printf ("sayi2 daha buyuk");
 		
 } */
 
 // not kontrolü
	int not1 ;

	printf("notunuzu giriniz:");
	scanf ("%d",&not1);
	 
	if (not1<50) {
	 	
	 	printf ("kaldiniz");
	}
    else	if (not1>=50 && not1<60) {     //&& = ve 
	
		printf ("cc");
    }
    else if (not1>=60 && not1<70) {  
   		printf ("CA");
    }
    else if (not1>=70 && not1<80) {
   		printf ("BA");
    } 
	else {
    	printf("AA");   	
    }	
	
return 0	;	
}
