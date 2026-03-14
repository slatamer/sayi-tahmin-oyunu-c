#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<conio.h>
#include<time.h>

void basligi_yaz() {
	printf("\n\n\n\n                                               ** SAYI TAHMIN OYUNU **");
}

int main() {
	int sayi;
	int girilen_sayi[6];
	int rastgele_sayi_hfz[6];
	int i;
	int tus;
	int dogru_tahminler[6];
	int dogru_thm_sayisi = 0;
	int skor = 0;

	system("color 17");

	while (1) {
		system("cls");
		basligi_yaz();
		printf("\n\n                                                    HOSGELDINIZ");
		printf("\n\n                             Bakalim 6 adet sayinin kacini dogru tahmin edebileceksiniz ?");
		printf("\n\n                         Nasil Oynanir ? ");
		printf("\n                         - Bilgisayar sizden gizli olacak sekilde 1 ile 10 arasinda 6 adet sayi turetir.");
		printf("\n                         - Daha sonra sizden 1 ile 10 arasinde 6 adet sayi girisi beklenir.");
		printf("\n                         - Her sayi sirasiyla kaydedilir.");
		printf("\n                         - Eger tahmin ettiginiz sayinin degeri ve sirasi dogru ise her dogru cevap icin \n\t\t\t  10 puan kazanilir.");
		printf("\n\n\n                         * Devam etmek icin D tusuna basiniz.");
		printf("\n\n\n                         * CIKIS icin ESC tusuna basiniz.");

		tus = _getch();

		if (tus == 37) {
			printf("\n\n\n\n\n                               ** Cikmak istediginizen emin misiniz? (E/H) **\n\n\t\t\t\t\t\t --> ");
			tus = _getch();

			if (tus == 101 || tus == 69) {   
				return 0;
			}
			else {
				continue;
			}
		}

		if (tus == 68 || tus == 100) {		// Koþul: D veya d tuþuna basýldýysa
			system("color 37");

			srand(time(0));
			for (i = 0; i < 6; i++) {
				rastgele_sayi_hfz[i] = (rand() % 10) + 1;		// 1-10 arasý sayý üretimi yapýldý.
			}

			dogru_thm_sayisi = 0;		// Her yeni oyunda sýfýrlanmalý.

			for (i = 0; i < 6; i++) {
				do {
					system("cls");		// Her denemede ekran temizlenir ve baþlýk tekrar yazýlýr.
					basligi_yaz();		

					printf("\n\n\t\t                1-10 arasinda sayilar giriniz ve ENTER tusuna basiniz.");
					printf("\n\n\t\t                %d. sayiyi giriniz: ", i + 1);

					if (scanf("%d", &sayi) != 1) {		// scanf, baþarýyla okunan öðe sayýsýný döndürür. Eðer geçerli giriþ yapýldýysa 1 döndürülür.
						
						while (getchar() != '\n');		// Eðer harf girildiyse tampon temizlenir.
						sayi = -1;					   //Döngüden çýkmak, programýn çökmesi veya hatalý veriyle devam etmemesi için -1 dödürülür.
					}

					if (sayi < 1 || sayi > 10) {
						printf("\n\n\t\t                HATA : Lutfen 1 ile 10 arasinda bir deger giriniz!");
						printf("\n\t\t                Devam etmek icin bir tusa basiniz...");
						_getch();
					}

				} while (sayi < 1 || sayi > 10);

				girilen_sayi[i] = sayi;

				if (sayi == rastgele_sayi_hfz[i]) {
					dogru_tahminler[dogru_thm_sayisi] = sayi;
					dogru_thm_sayisi++;
					skor = pow(10, dogru_thm_sayisi);
				}
			}

			printf("\n\n\n                                Girilen sayilar   : ");
			for (i = 0; i < 6; i++) {
				printf("%d ", girilen_sayi[i]);
			}

			printf("\n                                Uretilen sayilar  : ");
			for (i = 0; i < 6; i++) {
				printf("%d ", rastgele_sayi_hfz[i]);
			}

			if (dogru_thm_sayisi > 0) {
				printf("\n\n                                Tahmin sayisi : %d", dogru_thm_sayisi);
				printf("\n\n                                Tebrikler! %d sayi bildiniz. Skorunuz: %d", dogru_thm_sayisi, skor);
			}

			if (dogru_thm_sayisi == 6) {
				printf("\n                   BINGO! Tebrikler! Tum sayilari bildiniz. Skorunuz: %d", skor);
			}
			else if (dogru_thm_sayisi == 0) {
				printf("\n\n                                Maalesef hicbir sayiyi bilemediniz *_* Skorunuz: %d", skor);
			}

			printf("\n\n                                Ana sayfaya donmek ve yeniden denemek icin herhangi bir tusa basiniz.");
			printf("\n\n                                CIKIS icin ESC tusuna basiniz.");
			tus = _getch();

		}

		if (tus == 27) {
			system("cls");
			system("color 37");

			printf("\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t     ** Cikmak istediginizden emin misiniz? (E/H) **\n\n\t\t\t\t\t\t --> ");
			tus = _getch();

			if (tus == 101 || tus == 69) {
				return 0;
			}
		}
		system("color 17");

	}
	return 0;

}