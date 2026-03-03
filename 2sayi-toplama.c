//GİRİLEN İKİ SAYIYI TOPLAMA
 #include <stdio.h>
  
  int main(){
	
	int say1, say2;
	int toplam;
	
	/*kullanıcıdan  toplanacak sayıları  al*/
	printf("lutfen 2 sayi degeri giriniz :");
	scanf("%d %d",&say1,&say2 );
	 
	 /*sayı değerlerini topla*/
	 toplam= say1+say2;
	 
	 /* sonuçu yazdır*/
	 printf("Toplam=%d",toplam);
	  
	  return 0;
    }

