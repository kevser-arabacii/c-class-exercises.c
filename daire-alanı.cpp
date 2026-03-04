#include <stdio.h>
int main () {
    int yaricap;
	float alan ; 
     const  float PI = 3.14;
     
/*kullanýcýdan yaricap deðeri al*/
printf("yaricap degeri giriniz:" );
scanf("%d",&yaricap);

/*dairenin alanýný hesapla*/
alan = PI *  yaricap * yaricap;
 
 /*alaný yazdýr*/
 printf("Dairenin alani:%f", alan);

return 0;
}
