#include <stdio.h>
#include <string.h>
    
    
    int usHesaplama(int a, int b)
    {
    	int i,cevap=1;
    	for(i=0;i<b;i++)
    	{
    		a^b=cevap;
		}
		printf("\nGirdiginiz Sayinin Kuvvetinin Degeri: ",cevap);
	}
    
int main() {
	
	int sayi,us;
	
	printf("Lutfen Bir Sayi Giriniz: ");
	scanf("%d",&sayi);
	
	printf("\nSayinin Ussunu Giriniz: ");
	scanf("%d",&us);
	
	return 0;
}
