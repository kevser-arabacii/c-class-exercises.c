//GÝRÝLEN ÝKÝ SAYIYI TOPLAMA
 #include <stdio.h>
  
  int main(){
	
	int say1, say2;
	int toplam;
	
	/*kullanýcýdan  toplanacak sayýlarý  al*/
	printf("lutfen 2 sayi degeri giriniz :");
	scanf("%d %d",&say1,&say2 );
	 
	 /*sayý deðerlerini topla*/
	 toplam= say1+say2;
	 
	 /* sonuçu yazdýr*/
	 printf("Toplam=%d",toplam);
	  
	  return 0;
    }
