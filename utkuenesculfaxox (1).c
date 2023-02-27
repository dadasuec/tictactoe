#include <stdio.h>

int main()
{
	//De�i�kenleri  ve dizileri tan�mlad�m.	
    int oyuncu = 1, i = 0, secim;
	
	char kutu[10] = { '0', '1', '2', '3', '4', '5', '6', '7', '8', '9' };
    
	char sonuc;
    
    //(printf) koduyla oyunun ba�l���n� tan�mlad�m.
    printf("\n\n\t/--------///-----*** Tic Tac Toe ***-----///--------/\n\n");
	
	//Kulan�c� isimlerini tutan (char) koduyla tan�mlad�m.
	char birincioyuncu[10],ikincioyuncu[10];
	
	//Oyun ekran�n� ve kullan�c�n�n se�im yapabilmesi i�in kutular�n i�ini say� ile tan�mlad�m.
	
	printf("\t\t  %c  |  %c  |  %c \n", kutu[1], kutu[2], kutu[3]);
	printf("\t\t_____|_____|_____\n");
	printf("\t\t     |     |     \n");
	printf("\t\t  %c  |  %c  |  %c \n", kutu[4], kutu[5], kutu[6]);
	printf("\t\t_____|_____|_____\n");
	printf("\t\t     |     |     \n");
	printf("\t\t  %c  |  %c  |  %c \n", kutu[7], kutu[8], kutu[9]);
	printf("\t\t     |     |     \n\n");
	
	//Oyuncular�n  isimlerini ald�m.
	printf("birincioyuncu ismini giriniz (X): ");
	scanf("%s",birincioyuncu);
	printf("ikincioyuncu ismini giriniz (O) : ");
	scanf("%s",ikincioyuncu);
	
	//Ekran� temizlemek i�in cmd kodunu kulland�m.
	system("cls");
	
	/*
	Oyun i�i se�imler olsun diye ( do while) d�ng�s�n� kulland�m.
	S�rekli olsun diye ko�ulu 5 yaparak yani 0 d���nda  int bir de�eri yazarak sonsuz d�ng�ye koyduk.  
	*/
    do
    {
    	//Oyun do�ru devam etti�i s�rece ekran� ye�il tutmak istedim.
    	system ("color A");
    	//Oyun ekran�.
        printf("\n\t\t   %s(X)  -  %s(O)\n\n",birincioyuncu,ikincioyuncu);
	    
		
		printf("\t\t  %c  |  %c  |  %c \n", kutu[1], kutu[2], kutu[3]);
		printf("\t\t_____|_____|_____\n");
		printf("\t\t     |     |     \n");
		printf("\t\t  %c  |  %c  |  %c \n", kutu[4], kutu[5], kutu[6]);
		printf("\t\t_____|_____|_____\n");
		printf("\t\t     |     |     \n");
		printf("\t\t  %c  |  %c  |  %c \n", kutu[7], kutu[8], kutu[9]);
		printf("\t\t     |     |     \n\n");
		
		//Oyuncu se�imlerini ald�m.

		
        oyuncu = (oyuncu % 2) ? 1 : 2;
        printf("oyuncu %s, hangi kutuyu oynamak istiyorsaniz kutunun icindeki sayiyi girin:  ",oyuncu%2?birincioyuncu:ikincioyuncu);
        scanf("%d", &secim);
		// Sonu� de�i�keni i�erisine kullan�c� s�ras�na g�re X veya O atad�m. 
        sonuc = (oyuncu == 1) ? 'X' : 'O';
		
		//Oyuncu se�imlerini kontrol etti�imiz ayn� zamanda oyuncu se�im yapt��� kutunun bo� oldu�unu kontrol etti�imiz bir  (if) yap�s� kulland�m. 	
        if (secim == 1 && kutu[1] == '1')
            kutu[1] = sonuc;
            
        else if (secim == 2 && kutu[2] == '2')
            kutu[2] = sonuc;
            
        else if (secim == 3 && kutu[3] == '3')
            kutu[3] = sonuc;
            
        else if (secim == 4 && kutu[4] == '4')
            kutu[4] = sonuc;
            
        else if (secim == 5 && kutu[5] == '5')
            kutu[5] = sonuc;
            
        else if (secim == 6 && kutu[6] == '6')
            kutu[6] = sonuc;
            
        else if (secim == 7 && kutu[7] == '7')
            kutu[7] = sonuc;
            
        else if (secim == 8 && kutu[8] == '8')
            kutu[8] = sonuc;
            
        else if (secim == 9 && kutu[9] == '9')
            kutu[9] = sonuc;
            
        else
        {
        	
        	//else blo�unu oyuncu default bir de�er girdi�inde  yaz�s�n� yazd�rd�m.
            printf("----*** Hatali islem ***---- \n");
            oyuncu--;
            //Hatal� say� yazd���n�zda her �eyin k�rm�z� olarak hatal� oldu�unu yapmak istedim.
            system ("color 4");
            
            //Konsol ekran�nda tutarak enter tu�unun komutunu bekleyerek kodun �al��mas�n� sa�l�yor.
            getch();
            
        }
        
        //Ekran� temizlemek i�in cmd kodunu kulland�m.
		system("cls");
		
		
		//Oyunun kazanma durumlar�n� (if) yap�s�yla kontrol ettim ve kazanma durumu varsa (break) anahtar kelimesiyle d�ng�y� k�rd�m. 
		
	    if (kutu[1] == kutu[2] && kutu[2] == kutu[3]){
	    	printf("\n\nTebrikler %s Kazandiniz!",oyuncu%2?birincioyuncu:ikincioyuncu);	
	    	break;
		}
	    else if (kutu[4] == kutu[5] && kutu[5] == kutu[6]){
	    	printf("\n\nTebrikler %s Kazandiniz!",oyuncu%2?birincioyuncu:ikincioyuncu);	
	    	break;
		}
	    else if (kutu[7] == kutu[8] && kutu[8] == kutu[9]){
	    	printf("\n\nTebrikler %s Kazandiniz!",oyuncu%2?birincioyuncu:ikincioyuncu);	
	    	break;
		}
	    else if (kutu[1] == kutu[4] && kutu[4] == kutu[7]){
	    	printf("\n\nTebrikler %s Kazandiniz!",oyuncu%2?birincioyuncu:ikincioyuncu);	
	    	break;
		}    
	    else if (kutu[2] == kutu[5] && kutu[5] == kutu[8]){
	    	printf("\n\nTebrikler %s Kazandiniz!",oyuncu%2?birincioyuncu:ikincioyuncu);	
	    	break;
		}   
	    else if (kutu[3] == kutu[6] && kutu[6] == kutu[9]){
	    	printf("\n\nTebrikler %s Kazandiniz!",oyuncu%2?birincioyuncu:ikincioyuncu);	
	    	break;
		}
	    else if (kutu[1] == kutu[5] && kutu[5] == kutu[9]){
	    	printf("\n\nTebrikler %s Kazandiniz!",oyuncu%2?birincioyuncu:ikincioyuncu);	
	    	break;
		}    
	    else if (kutu[3] == kutu[5] && kutu[5] == kutu[7]){
	    	printf("\n\nTebrikler %s Kazandiniz!",oyuncu%2?birincioyuncu:ikincioyuncu);	
	    	break;
	    }
	    
	    //Oyunun beraberlik durumunu (else if) blo�uyla kutular�n dolu oldu�unu anlay�p ve kazanma durumu da olmad���ndan beraberlik durumunu bu yap�yla anl�yoruz. 
	    
		else if (kutu[1] != '1' && kutu[2] != '2' && kutu[3] != '3' && kutu[4] != '4' 
		&& kutu[5] != '5' && kutu[6] != '6' && kutu[7]  != '7' && kutu[8] != '8'&& kutu[9] != '9')
		{
			i++;
			
			//Oyun iki defa beraberlik oldu�unda oyunu bitiriyor.
			if(i==2){
				printf("\n\nOyun Berabere Bitti");
				break;
			}
			//Beraberlik durumunda tic tac toe oyun tablosunun s�f�rlayarak yeni oyununa yeni bir tabloyla ba�lamam�z� sa�l�yor.
			kutu[1] = '1';kutu[2] = '2';kutu[3] = '3';kutu[4] = '4';kutu[5] = '5';kutu[6] = '6';kutu[7] = '7';kutu[8] = '8';kutu[9] = '9';	
			printf("\n\nBerabere Tekrar Oynayin");
			
			//Konsol ekran�nda tutarak enter tu�unun komutunu bekleyerek kodun �al��mas�n� sa�l�yor.
			getch();
			
			//Ekran� temizlemek i�in cmd kodunu kulland�m.
			system("cls");
		}
		//Oyuncu s�ras� de�i�sin diye bu kodu kulland�m.
        oyuncu++;
        
    }while (5);
}
