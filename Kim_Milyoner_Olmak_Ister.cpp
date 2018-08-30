/*��renci Bilgisi: Muhammed KAYADAN 150258039 EEM i.� */
/*Program�n Amac�: Bu program bir oyundur.Sorular� do�ru cevaplayarak fazla para kazanmaya �al��mal�s�n�z.*/
//Cevap Anahtar�: B C D A C A B C A B D D A B C


#include <iostream> //Standart fonksiyonlar�m�z� kullanmak i�in tan�mlad�k
#include <conio.h> // getch(); fonksiyonu i�in kulland�k
#include <windows.h> //SetConsoleTitle fonksiyonu i�in kulland�k
#include <locale.h> //setlocale fonksiyonu i�in kulland�k
#include <time.h>   //Sleep fonksiyonu i�in kulland�k
using namespace std;  //Her sefer std::cout vs yazmamak i�in ilk �nce standart k�t�phaneden kullanaca��m�z� s�yledik

void cizgi();   //Her seferinde ayn� �eyi yazmamak i�in fonksiyon olu�turdum.

int main() {                                      //Ana fonksiyon
	setlocale(LC_ALL,"Turkish");                  //T�rk�e karakter deste�i sa�lad�k
	SetConsoleTitle("Kim Milyoner Olmak Ister");  //Konsol ekran�n�n ba�l���n� de�i�tirdik
	system("color 50");                           //Konsolun arkaplan rengini ve yaz� rengini de�i�tirdim.
	char cevap;                                   //Bir cevap girilece�i i�in char t�r�nde bir de�i�ken tan�mlad�m
	int jokersayisi = 3;
	
	cizgi(); 
	cout<<"        K�M M�LYONER OLMAK �STER YARI�MASINA HO� GELD�N�Z!"<<endl;
	cizgi();
   
    cout<<"\n3 tane joker hakk�n�z bulunmaktad�r.\nSeyirci jokeri i�in S, %50 jokeri i�in Y, Telefon jokeri i�in T tu�una bas�n�z!\n";
    Sleep(5000);
    system("cls");
   
    PlaySound("yenisoru.wav", NULL, SND_SYNC);   //Ses oynatma fonksiyonu
	cout<<"�stanbul'u kim fethetmi�tir?\n";
	Sleep(1000);                                //1 saniye bekler
	cout<<"A)Yavuz Sultan Selim\n"; 
	Sleep(1000);
	cout<<"B)Fatih Sultan Mehmet\n"; 
	Sleep(1000);
	cout<<"C)Kanuni Sultan S�leyman\n";  
	Sleep(1000); 
	cout<<"D)Kenan Komutan\n"; 
	cout<<"Kalan S�re: ";
	for(int i=10 ; i>=0 ; i--) {
		cout<<i<<" ";                   //S�re k�sm�n� bu �ekilde yapt�m.10 dan s�f�ra kadar birer birer sayacak ve her seferde 1 sn bekleyecek.
		Sleep(1000);
	}
	cevap1:
	cout<<"\nYan�t�n�z: ";
	cin>>cevap; cout<<endl;
	switch(cevap){
		case 'B' : cout<<"Do�ru\n"; 
		PlaySound("alkis.wav", NULL, SND_SYNC);
		cout<<"S�radaki soru 1000 TL\n";
		PlaySound("yenisoru.wav", NULL, SND_SYNC);           
		system("cls");           //�nceki t�m yaz�lar� siler
		goto A;                //A noktas�na gider.
		break;
		
		case 'S' :
			cout<<"%7 A\n%50 B\n%13 C\n%30 D\n";
			jokersayisi--;
			goto cevap1; break;
		
		case 'T' :
			cout<<"\nTam emin de�ilim ama cevap B gibi.\n";
			jokersayisi--;
			goto cevap1; break;
			
		case 'Y' :
			cout<<"Cevap B veya D";
		    jokersayisi--;
			goto cevap1; break;
		
		
		default: 
        cout<<"Oyun Bitti\nPara Kazanamad�n�z :("; 
		PlaySound("kaybet.wav", NULL, SND_SYNC);
		PlaySound("bitti.wav", NULL, SND_SYNC);  return 0;
	}
	
	
A:	cout<<"�ran'�n ba�kenti neredir?\n";
	Sleep(1000);
	cout<<"A)Kahire\n"; 
	Sleep(1000);
	cout<<"B)Ba�dat\n"; 
	Sleep(1000);
	cout<<"C)Tahran\n";  
	Sleep(1000); 
	cout<<"D)Riyad\n";
	cout<<"Kalan S�re: "; 
	for(int i=10 ; i>=0 ; i--) {
		cout<<i<<" ";
		Sleep(1000);
	}
	cevap2:
	cout<<"\nYan�t�n�z: ";
	cin>>cevap; cout<<endl;
	switch(cevap){
		case 'C' : 
		cout<<"Do�ru\n"; 
		PlaySound("alkis.wav", NULL, SND_SYNC);
		cout<<"S�radaki soru 2000 TL\n";
		PlaySound("yenisoru.wav", NULL, SND_SYNC);
		system("cls"); 
		goto B; 
		break;
		
		case 'S' :
			cout<<"%7 A\n%30 B\n%50 C\n%13 D\n";
			jokersayisi--;
			goto cevap2; break;
		
		case 'T' :
			cout<<"\nTam emin de�ilim ama cevap C gibi.\n";
			jokersayisi--;
			goto cevap2; break;
			
		case 'Y' :
			cout<<"Cevap C veya D";
		    jokersayisi--;
			goto cevap2; break;
		
		default: cout<<"Oyun Bitti\n1000 TL kazand�n�z!";
		PlaySound("kaybet.wav", NULL, SND_SYNC);
		PlaySound("bitti.wav", NULL, SND_SYNC); return 0;
	}
	
B:	cout<<"Hangisi tarihteki T�rk devletlerinden biri de�ildir?\n";
	Sleep(1000);
	cout<<"A)Uygurlar\n"; 
	Sleep(1000);
	cout<<"B)Avar Ka�anl���\n"; 
	Sleep(1000);
	cout<<"C)Hun �mparatorlu�u\n";  
	Sleep(1000); 
	cout<<"D)Emeviler\n"; 
	cout<<"Kalan S�re: ";
	for(int i=10 ; i>=0 ; i--) {
		cout<<i<<" ";
		Sleep(1000);
	}
	cevap3:
	cout<<"\nYan�t�n�z: ";
	cin>>cevap; cout<<endl; 
	switch(cevap){
		case 'D' : cout<<"Do�ru\n";
		PlaySound("alkis.wav", NULL, SND_SYNC);
		cout<<"S�radaki soru 3000 TL\n";
		PlaySound("yenisoru.wav", NULL, SND_SYNC);
		system("cls"); 
		goto C; 
		break;
		
		case 'S' :
			cout<<"%7 A\n%30 B\n%13 C\n%50 D\n";
			jokersayisi--;
			goto cevap3; break;
		
		case 'T' :
			cout<<"\nTam emin de�ilim ama cevap D gibi.\n";
			jokersayisi--;
			goto cevap3; break;
			
		case 'Y' :
			cout<<"Cevap B veya D";
		    jokersayisi--;
			goto cevap3; break;
		
		
		default: cout<<"Oyun Bitti\n1000 TL kazand�n�z!";
		PlaySound("kaybet.wav", NULL, SND_SYNC);
		PlaySound("bitti.wav", NULL, SND_SYNC); return 0;
	}
	
	

C:	cout<<"�lkemizde Latin alfabesi hangi tarihte kabul edilmi�tir?\n";
	Sleep(1000);
	cout<<"A)1 Kas�m 1928\n"; 
	Sleep(1000);
	cout<<"B)24 Kas�m 1928\n"; 
	Sleep(1000);
	cout<<"C)29 Ekim 1923\n";  
	Sleep(1000); 
	cout<<"D)6 Ocak 1930\n"; 
	cout<<"Kalan S�re: ";
	for(int i=10 ; i>=0 ; i--) {
		cout<<i<<" ";
		Sleep(1000);
	}
	cevap4:
	cout<<"\nYan�t�n�z: ";
	cin>>cevap; cout<<endl; 
	switch(cevap){
		case 'A' : cout<<"Do�ru\n";
		PlaySound("alkis.wav", NULL, SND_SYNC); 
		cout<<"S�radaki soru 5000 TL\n";
		PlaySound("yenisoru.wav", NULL, SND_SYNC);
		system("cls"); 
		goto D; 
		break;
		case 'S' :
			if (jokersayisi>0) {
				cout<<"%50 A\n%7 B\n%13 C\n%30 D\n";
			jokersayisi--;
			goto cevap4; break;
			}
		else {
			cout<<"Joker hakk�n�z kalmad� :(\n"; goto cevap4;
		}	
		
		case 'T' :
			if (jokersayisi>0) {
				cout<<"\nTam emin de�ilim ama cevap A gibi.\n";
			jokersayisi--;
			goto cevap4; break;
			}
		else {
			cout<<"Joker hakk�n�z kalmad� :(\n"; goto cevap4;
		}
			
		case 'Y' :
			if (jokersayisi>0) {
				cout<<"Cevap A veya D";
		    jokersayisi--;
			goto cevap4; break;
			}
		else {
			cout<<"Joker hakk�n�z kalmad� :(\n"; goto cevap4;
		}
		
		default: cout<<"Oyun Bitti\n1000 TL kazand�n�z!";
		PlaySound("kaybet.wav", NULL, SND_SYNC);
		PlaySound("bitti.wav", NULL, SND_SYNC); return 0;
	}
	

D:	cout<<"G�ne� sistemindeki en b�y�k gezegen hangisidir?\n";
	Sleep(1000);
	cout<<"A)D�nya\n"; 
	Sleep(1000);
	cout<<"B)Sat�rn\n"; 
	Sleep(1000);
	cout<<"C)J�piter\n";  
	Sleep(1000); 
	cout<<"D)Uran�s\n"; 
	cout<<"Kalan S�re: ";
	for(int i=10 ; i>=0 ; i--) {
		cout<<i<<" ";
		Sleep(1000);
	}
	cevap5:
	cout<<"\nYan�t�n�z: ";
	cin>>cevap; cout<<endl;
	switch(cevap){
		case 'C' : cout<<"Do�ru\n"; 
		PlaySound("alkis.wav", NULL, SND_SYNC);
		cout<<"S�radaki soru 7500 TL\n";
		PlaySound("yenisoru.wav", NULL, SND_SYNC);
		system("cls"); 
		goto E; 
		break;
		case 'S' :
			if (jokersayisi>0) {
			cout<<"%7 A\n%13 B\n%50 C\n%30 D\n";
			jokersayisi--;
			goto cevap5; break;
			}
		else {
			cout<<"Joker hakk�n�z kalmad� :(\n"; goto cevap5;
		}	
		
		case 'T' :
			if (jokersayisi>0) {
				cout<<"\nTam emin de�ilim ama cevap C gibi.\n";
			jokersayisi--;
			goto cevap5; break;
			}
		else {
			cout<<"Joker hakk�n�z kalmad� :(\n"; goto cevap5;
		}
			
		case 'Y' :
			if (jokersayisi>0) {
				cout<<"Cevap C veya D";
		    jokersayisi--;
			goto cevap5; break;
			}
		else {
			cout<<"Joker hakk�n�z kalmad� :(\n"; goto cevap5;
		}
			
		default: cout<<"Oyun Bitti\n1000 TL kazand�n�z!";
		PlaySound("kaybet.wav", NULL, SND_SYNC);
		PlaySound("bitti.wav", NULL, SND_SYNC); return 0;
	}	
	
	
	
E:	cout<<"�lk resmi gazete hangisidir?\n";
	Sleep(1000);
	cout<<"A)Takvim-i Vekayi\n"; 
	Sleep(1000);
	cout<<"B)Ceride-i Havadis\n"; 
	Sleep(1000);
	cout<<"C)Terc�man-� Ahval\n";  
	Sleep(1000); 
	cout<<"D)Nizam-� Cedid\n"; 
	cout<<"Kalan S�re: ";
	for(int i=10 ; i>=0 ; i--) {
		cout<<i<<" ";
		Sleep(1000);
	}
	cevap6:
	cout<<"\nYan�t�n�z: ";
	cin>>cevap; cout<<endl;
	switch(cevap){
		case 'A' : cout<<"Do�ru\n"; 
		PlaySound("alkis.wav", NULL, SND_SYNC);
		cout<<"S�radaki soru 15000 TL de�erinde baraj sorusu ve sesli soru.\n";
		PlaySound("yenisoru.wav", NULL, SND_SYNC);
		system("cls"); 
		goto F; 
		break;
		case 'S' :
			if (jokersayisi>0) {
				cout<<"%50 A\n%7 B\n%13 C\n%30 D\n";
			jokersayisi--;
			goto cevap6; break;
			}
		else {
			cout<<"Joker hakk�n�z kalmad� :(\n"; goto cevap6;
		}	
		
		case 'T' :
			if (jokersayisi>0) {
				cout<<"\nTam emin de�ilim ama cevap A gibi.\n";                
			jokersayisi--;
			goto cevap6; break;
			}
		else {
			cout<<"Joker hakk�n�z kalmad� :(\n"; goto cevap6;
		}	
			
		case 'Y' :
			if (jokersayisi>0) {
				cout<<"Cevap A veya D";
		    jokersayisi--;
			goto cevap6; break;
			}
		else {
			cout<<"Joker hakk�n�z kalmad� :(\n"; goto cevap6;
		}	
			
		default: cout<<"Oyun Bitti\n1000 TL kazand�n�z!";
		PlaySound("kaybet.wav", NULL, SND_SYNC);
		PlaySound("bitti.wav", NULL, SND_SYNC); return 0;
	}
	
	
F:	cout<<"�ark�y� dinleyiniz..\n";
    PlaySound("7475.wav", NULL, SND_SYNC);
    system("cls");
    cout<<"Dinledi�iniz The Connells - '74-'75 adl� par�a hangi filmin final sahnesinde kullan�lm��t�r?\n";
	Sleep(1000);
	cout<<"A)Die Antwoord\n"; 
	Sleep(1000);
	cout<<"B)Boy 7\n"; 
	Sleep(1000);
	cout<<"C)Cehennem Melekleri 3\n";  
	Sleep(1000); 
	cout<<"D)Ye�il Yol\n"; 
	cout<<"Kalan S�re: ";
	for(int i=10 ; i>=0 ; i--) {
		cout<<i<<" ";
		Sleep(1000);
	}
	cevap7:
	cout<<"\nYan�t�n�z: ";
	cin>>cevap; cout<<endl;
	switch(cevap){
		case 'B' : cout<<"Do�ru\n"; 
		PlaySound("alkis.wav", NULL, SND_SYNC);
		cout<<"S�radaki soru 30000 TL\n";
		PlaySound("yenisoru.wav", NULL, SND_SYNC);
		system("cls"); 
		goto G; 
		break;
		case 'S' :
			if (jokersayisi>0) {
				cout<<"%7 A\n%50 B\n%13 C\n%30 D\n";
			jokersayisi--;
			goto cevap7; break;
			}
		else {
			cout<<"Joker hakk�n�z kalmad� :(\n"; goto cevap7;
		}	
		
		case 'T' :
			if (jokersayisi>0) {
				cout<<"\nTam emin de�ilim ama cevap B gibi.\n";
			jokersayisi--;
			goto cevap7; break;
			}
		else {
			cout<<"Joker hakk�n�z kalmad� :(\n"; goto cevap7;
		}	
			
		case 'Y' :
			if (jokersayisi>0) {
				cout<<"Cevap B veya D";
		    jokersayisi--;
			goto cevap7; break;
			}
		else {
			cout<<"Joker hakk�n�z kalmad� :(\n"; goto cevap7;
		}
			
		default: cout<<"Oyun Bitti\n15000 TL kazand�n�z!";
		PlaySound("kaybet.wav", NULL, SND_SYNC);
		PlaySound("bitti.wav", NULL, SND_SYNC); return 0;
	}
	
	
	
	
G:	cout<<"Marvel kahramanlar�ndan hangisi gama ���nlar�na maruz kalarak s�per kahraman olmu�tur?\n";
	Sleep(1000);
	cout<<"A)The Flash\n"; 
	Sleep(1000);
	cout<<"B)Kaptan Amerika\n"; 
	Sleep(1000);
	cout<<"C)Spider Man\n";  
	Sleep(1000); 
	cout<<"D)Hulk\n"; 
	cout<<"Kalan S�re: ";
	for(int i=10 ; i>=0 ; i--) {
		cout<<i<<" ";
		Sleep(1000);
	}
	cevap8:
	cout<<"\nYan�t�n�z: ";
	cin>>cevap; cout<<endl;
	switch(cevap){
		case 'D' : cout<<"Do�ru\n"; 
		PlaySound("alkis.wav", NULL, SND_SYNC);
		cout<<"S�radaki soru 60000 TL\n";
		PlaySound("yenisoru.wav", NULL, SND_SYNC);
		system("cls"); 
		goto H; 
		break;
		case 'S' :
			if (jokersayisi>0) {
				cout<<"%7 A\n%30 B\n%13 C\n%50 D\n";
			jokersayisi--;
			goto cevap8; break;
			}
		else {
			cout<<"Joker hakk�n�z kalmad� :(\n"; goto cevap8;
		}	
		
		case 'T' :
			if (jokersayisi>0) {
				cout<<"\nTam emin de�ilim ama cevap D gibi.\n";
			jokersayisi--;
			goto cevap8; break;
			}
		else {
			cout<<"Joker hakk�n�z kalmad� :(\n"; goto cevap8;
		}	
			
		case 'Y' :
			if (jokersayisi>0) {
				cout<<"Cevap B veya D";
		    jokersayisi--;
			goto cevap8; break;
			}
		else {
			cout<<"Joker hakk�n�z kalmad� :(\n"; goto cevap8;
		}
			
		default: cout<<"Oyun Bitti\n15000 TL kazand�n�z!";
		PlaySound("kaybet.wav", NULL, SND_SYNC);
		PlaySound("bitti.wav", NULL, SND_SYNC); return 0;
	}
	
	
	
H:	cout<<"2015 Nobel Kimya �d�l�n� Kazanan T�rk Bilim �nsan� Kimdir?\n";
	Sleep(1000);
	cout<<"A)Aziz Nesin\n"; 
	Sleep(1000);
	cout<<"B)Turgut �zakman\n"; 
	Sleep(1000);
	cout<<"C)Can Y�cel\n";  
	Sleep(1000); 
	cout<<"D)Aziz Sancar\n"; 
	cout<<"Kalan S�re: ";
	for(int i=10 ; i>=0 ; i--) {
		cout<<i<<" ";
		Sleep(1000);
	}
	cevap9:
	cout<<"\nYan�t�n�z: ";
	cin>>cevap; cout<<endl;
	switch(cevap){
		case 'D' : cout<<"Do�ru\n"; 
		PlaySound("alkis.wav", NULL, SND_SYNC);
		cout<<"S�radaki soru 125000 TL\n";
		PlaySound("yenisoru.wav", NULL, SND_SYNC);
		system("cls"); 
		goto I; 
		break;
		case 'S' :
			if (jokersayisi>0) {
				cout<<"%7 A\n%30 B\n%13 C\n%50 D\n";
			jokersayisi--;
			goto cevap9; break;
			}
		else {
			cout<<"Joker hakk�n�z kalmad� :(\n"; goto cevap9;
		}	
		
		case 'T' :
			if (jokersayisi>0) {
				cout<<"\nTam emin de�ilim ama cevap D gibi.\n";
			jokersayisi--;
			goto cevap9; break;
			}
		else {
			cout<<"Joker hakk�n�z kalmad� :(\n"; goto cevap9;
		}	
			
		case 'Y' :
			if (jokersayisi>0) {
				cout<<"Cevap B veya D";
		    jokersayisi--;
			goto cevap9; break;
			}
		else {
			cout<<"Joker hakk�n�z kalmad� :(\n"; goto cevap9;
		}
			
		default: cout<<"Oyun Bitti\n15000 TL kazand�n�z!";
		PlaySound("kaybet.wav", NULL, SND_SYNC);
		PlaySound("bitti.wav", NULL, SND_SYNC); return 0;
	}
	
	
I:	cout<<"9/3+6-3*3+9/3+6/2-3*3+3 i�leminin sonucu nedir?\n";
	Sleep(1000);
	cout<<"A)0\n"; 
	Sleep(1000);
	cout<<"B)3\n"; 
	Sleep(1000);
	cout<<"C)6\n";  
	Sleep(1000); 
	cout<<"D)9\n"; 
	cout<<"Kalan S�re: ";
	for(int i=10 ; i>=0 ; i--) {
		cout<<i<<" ";
		Sleep(1000);
	}
	cevap10:
	cout<<"\nYan�t�n�z: ";
	cin>>cevap; cout<<endl;
	switch(cevap){
		case 'A' : cout<<"Do�ru\n"; 
		PlaySound("alkis.wav", NULL, SND_SYNC);
		cout<<"S�radaki soru 250000 TL\n";
		PlaySound("yenisoru.wav", NULL, SND_SYNC);
		system("cls"); 
		goto J; 
		break;
		case 'S' :
			if (jokersayisi>0) {
				cout<<"%50 A\n%7 B\n%13 C\n%30 D\n";
			jokersayisi--;
			goto cevap10; break;
			}
		else {
			cout<<"Joker hakk�n�z kalmad� :(\n"; goto cevap10;
		}	
		
		case 'T' :
			if (jokersayisi>0) {
				cout<<"\nTam emin de�ilim ama cevap A gibi.\n";
			jokersayisi--;
			goto cevap10; break;
			}
		else {
			cout<<"Joker hakk�n�z kalmad� :(\n"; goto cevap10;
		}	
			
		case 'Y' :
			if (jokersayisi>0) {
				cout<<"Cevap A veya D";
		    jokersayisi--;
			goto cevap10; break;
			}
		else {
			cout<<"Joker hakk�n�z kalmad� :(\n"; goto cevap10;
		}
			
		default: cout<<"Oyun Bitti\n15000 TL kazand�n�z!";
		PlaySound("kaybet.wav", NULL, SND_SYNC);
		PlaySound("bitti.wav", NULL, SND_SYNC); return 0;
	}
	
	


J:	cout<<"2015 y�l�nda hayat�n� kaybeden BABA lakapl� T�rk arabesk sanat��s� kimdir?\n";
	Sleep(1000);
	cout<<"A)Ferdi Tayfur\n"; 
	Sleep(1000);
	cout<<"B)M�sl�m G�rses\n"; 
	Sleep(1000);
	cout<<"C)Orhan Gencebay\n";  
	Sleep(1000); 
	cout<<"D)Hakan Ta��yan\n"; 
	cout<<"Kalan S�re: ";
	for(int i=10 ; i>=0 ; i--) {
		cout<<i<<" ";
		Sleep(1000);
	}
	cevap11:
	cout<<"\nYan�t�n�z: ";
	cin>>cevap; cout<<endl;
	switch(cevap){
		case 'B' : cout<<"Do�ru\n"; 
		PlaySound("alkis.wav", NULL, SND_SYNC);
		cout<<"S�radaki soru 1 milyon TL\n";
		PlaySound("yenisoru.wav", NULL, SND_SYNC);
		system("cls"); 
		goto K; 
		break;
		case 'S' :
			if (jokersayisi>0) {
				cout<<"%7 A\n%50 B\n%13 C\n%30 D\n";
			jokersayisi--;
			goto cevap11; break;
			}
		else {
			cout<<"Joker hakk�n�z kalmad� :(\n"; goto cevap11;
		}	
		
		case 'T' :
			if (jokersayisi>0) {
				cout<<"\nTam emin de�ilim ama cevap B gibi.\n";
			jokersayisi--;
			goto cevap11; break;
			}
		else {
			cout<<"Joker hakk�n�z kalmad� :(\n"; goto cevap11;
		}	
			
		case 'Y' :
			if (jokersayisi>0) {
				cout<<"Cevap B veya D";
		    jokersayisi--;
			goto cevap11; break;
			}
		else {
			cout<<"Joker hakk�n�z kalmad� :(\n"; goto cevap11;
		}
			
		default: cout<<"Oyun Bitti\n15000 TL kazand�n�z!";
		PlaySound("kaybet.wav", NULL, SND_SYNC);
		PlaySound("bitti.wav", NULL, SND_SYNC); return 0;
	}
	
	
	
	
K:	cout<<"Adanal� dizisindeki Yavuz Komiser karakterini kim canland�rm��t�r?\n";
	Sleep(1000);
	cout<<"A)Tamer Karada�l�\n"; 
	Sleep(1000);
	cout<<"B)Mehmet Akif Alakurt\n"; 
	Sleep(1000);
	cout<<"C)Oktay Kaynarca\n";  
	Sleep(1000); 
	cout<<"D)Ayhan Ero�lu\n"; 
	cout<<"Kalan S�re: ";
	for(int i=10 ; i>=0 ; i--) {
		cout<<i<<" ";
		Sleep(1000);
	}
	cevap12:
	cout<<"\nYan�t�n�z: ";
	cin>>cevap; cout<<endl;
	switch(cevap){
		case 'C' : cout<<"Do�ru\n"; 
		PlaySound("alkis.wav", NULL, SND_SYNC);
		
		cizgi();
		cout<<"             1 Milyon TL Kazand�n�z!";
		cizgi();
		
		system("cls");  
		break;
		case 'S' :
			if (jokersayisi>0) {
				cout<<"%7 A\n%13 B\n%50 C\n%30 D\n";
			jokersayisi--;
			
			goto cevap12; break;
			}
		else {
			cout<<"Joker hakk�n�z kalmad� :(\n"; goto cevap12;
		}	
		
		case 'T' :
			if (jokersayisi>0) {
				cout<<"\nTam emin de�ilim ama cevap C gibi.\n";
			jokersayisi--;
			
			goto cevap12; break;
			}
		else {
			cout<<"Joker hakk�n�z kalmad� :(\n"; goto cevap12;
		}	
			
		case 'Y' :
			if (jokersayisi>0) {
				cout<<"Cevap C veya D";
		    jokersayisi--;
		    goto cevap12; break;
			}
		else {
			cout<<"Joker hakk�n�z kalmad� :(\n"; goto cevap12;
		}
			
		default: cout<<"Oyun Bitti\n15000 TL kazand�n�z!";
		PlaySound("kaybet.wav", NULL, SND_SYNC);
		PlaySound("bitti.wav", NULL, SND_SYNC); return 0;
	}
	
	
    PlaySound("bravo.wav", NULL, SND_SYNC);
    cizgi();
    cout<<"                KAZANDINIZ!";
    cizgi();
   	PlaySound("m�zik.wav", NULL, SND_SYNC);
   	
   	getch();
}

void cizgi() {
	cout<<"==================================================================="<<endl;
}


























