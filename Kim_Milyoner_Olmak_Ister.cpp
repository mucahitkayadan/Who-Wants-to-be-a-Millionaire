/*Öðrenci Bilgisi: Muhammed KAYADAN 150258039 EEM i.ö */
/*Programýn Amacý: Bu program bir oyundur.Sorularý doðru cevaplayarak fazla para kazanmaya çalýþmalýsýnýz.*/
//Cevap Anahtarý: B C D A C A B C A B D D A B C


#include <iostream> //Standart fonksiyonlarýmýzý kullanmak için tanýmladýk
#include <conio.h> // getch(); fonksiyonu için kullandýk
#include <windows.h> //SetConsoleTitle fonksiyonu için kullandýk
#include <locale.h> //setlocale fonksiyonu için kullandýk
#include <time.h>   //Sleep fonksiyonu için kullandýk
using namespace std;  //Her sefer std::cout vs yazmamak için ilk önce standart kütüphaneden kullanacaðýmýzý söyledik

void cizgi();   //Her seferinde ayný þeyi yazmamak için fonksiyon oluþturdum.

int main() {                                      //Ana fonksiyon
	setlocale(LC_ALL,"Turkish");                  //Türkçe karakter desteði saðladýk
	SetConsoleTitle("Kim Milyoner Olmak Ister");  //Konsol ekranýnýn baþlýðýný deðiþtirdik
	system("color 50");                           //Konsolun arkaplan rengini ve yazý rengini deðiþtirdim.
	char cevap;                                   //Bir cevap girileceði için char türünde bir deðiþken tanýmladým
	int jokersayisi = 3;
	
	cizgi(); 
	cout<<"        KÝM MÝLYONER OLMAK ÝSTER YARIÞMASINA HOÞ GELDÝNÝZ!"<<endl;
	cizgi();
   
    cout<<"\n3 tane joker hakkýnýz bulunmaktadýr.\nSeyirci jokeri için S, %50 jokeri için Y, Telefon jokeri için T tuþuna basýnýz!\n";
    Sleep(5000);
    system("cls");
   
    PlaySound("yenisoru.wav", NULL, SND_SYNC);   //Ses oynatma fonksiyonu
	cout<<"Ýstanbul'u kim fethetmiþtir?\n";
	Sleep(1000);                                //1 saniye bekler
	cout<<"A)Yavuz Sultan Selim\n"; 
	Sleep(1000);
	cout<<"B)Fatih Sultan Mehmet\n"; 
	Sleep(1000);
	cout<<"C)Kanuni Sultan Süleyman\n";  
	Sleep(1000); 
	cout<<"D)Kenan Komutan\n"; 
	cout<<"Kalan Süre: ";
	for(int i=10 ; i>=0 ; i--) {
		cout<<i<<" ";                   //Süre kýsmýný bu þekilde yaptým.10 dan sýfýra kadar birer birer sayacak ve her seferde 1 sn bekleyecek.
		Sleep(1000);
	}
	cevap1:
	cout<<"\nYanýtýnýz: ";
	cin>>cevap; cout<<endl;
	switch(cevap){
		case 'B' : cout<<"Doðru\n"; 
		PlaySound("alkis.wav", NULL, SND_SYNC);
		cout<<"Sýradaki soru 1000 TL\n";
		PlaySound("yenisoru.wav", NULL, SND_SYNC);           
		system("cls");           //Önceki tüm yazýlarý siler
		goto A;                //A noktasýna gider.
		break;
		
		case 'S' :
			cout<<"%7 A\n%50 B\n%13 C\n%30 D\n";
			jokersayisi--;
			goto cevap1; break;
		
		case 'T' :
			cout<<"\nTam emin deðilim ama cevap B gibi.\n";
			jokersayisi--;
			goto cevap1; break;
			
		case 'Y' :
			cout<<"Cevap B veya D";
		    jokersayisi--;
			goto cevap1; break;
		
		
		default: 
        cout<<"Oyun Bitti\nPara Kazanamadýnýz :("; 
		PlaySound("kaybet.wav", NULL, SND_SYNC);
		PlaySound("bitti.wav", NULL, SND_SYNC);  return 0;
	}
	
	
A:	cout<<"Ýran'ýn baþkenti neredir?\n";
	Sleep(1000);
	cout<<"A)Kahire\n"; 
	Sleep(1000);
	cout<<"B)Baðdat\n"; 
	Sleep(1000);
	cout<<"C)Tahran\n";  
	Sleep(1000); 
	cout<<"D)Riyad\n";
	cout<<"Kalan Süre: "; 
	for(int i=10 ; i>=0 ; i--) {
		cout<<i<<" ";
		Sleep(1000);
	}
	cevap2:
	cout<<"\nYanýtýnýz: ";
	cin>>cevap; cout<<endl;
	switch(cevap){
		case 'C' : 
		cout<<"Doðru\n"; 
		PlaySound("alkis.wav", NULL, SND_SYNC);
		cout<<"Sýradaki soru 2000 TL\n";
		PlaySound("yenisoru.wav", NULL, SND_SYNC);
		system("cls"); 
		goto B; 
		break;
		
		case 'S' :
			cout<<"%7 A\n%30 B\n%50 C\n%13 D\n";
			jokersayisi--;
			goto cevap2; break;
		
		case 'T' :
			cout<<"\nTam emin deðilim ama cevap C gibi.\n";
			jokersayisi--;
			goto cevap2; break;
			
		case 'Y' :
			cout<<"Cevap C veya D";
		    jokersayisi--;
			goto cevap2; break;
		
		default: cout<<"Oyun Bitti\n1000 TL kazandýnýz!";
		PlaySound("kaybet.wav", NULL, SND_SYNC);
		PlaySound("bitti.wav", NULL, SND_SYNC); return 0;
	}
	
B:	cout<<"Hangisi tarihteki Türk devletlerinden biri deðildir?\n";
	Sleep(1000);
	cout<<"A)Uygurlar\n"; 
	Sleep(1000);
	cout<<"B)Avar Kaðanlýðý\n"; 
	Sleep(1000);
	cout<<"C)Hun Ýmparatorluðu\n";  
	Sleep(1000); 
	cout<<"D)Emeviler\n"; 
	cout<<"Kalan Süre: ";
	for(int i=10 ; i>=0 ; i--) {
		cout<<i<<" ";
		Sleep(1000);
	}
	cevap3:
	cout<<"\nYanýtýnýz: ";
	cin>>cevap; cout<<endl; 
	switch(cevap){
		case 'D' : cout<<"Doðru\n";
		PlaySound("alkis.wav", NULL, SND_SYNC);
		cout<<"Sýradaki soru 3000 TL\n";
		PlaySound("yenisoru.wav", NULL, SND_SYNC);
		system("cls"); 
		goto C; 
		break;
		
		case 'S' :
			cout<<"%7 A\n%30 B\n%13 C\n%50 D\n";
			jokersayisi--;
			goto cevap3; break;
		
		case 'T' :
			cout<<"\nTam emin deðilim ama cevap D gibi.\n";
			jokersayisi--;
			goto cevap3; break;
			
		case 'Y' :
			cout<<"Cevap B veya D";
		    jokersayisi--;
			goto cevap3; break;
		
		
		default: cout<<"Oyun Bitti\n1000 TL kazandýnýz!";
		PlaySound("kaybet.wav", NULL, SND_SYNC);
		PlaySound("bitti.wav", NULL, SND_SYNC); return 0;
	}
	
	

C:	cout<<"Ülkemizde Latin alfabesi hangi tarihte kabul edilmiþtir?\n";
	Sleep(1000);
	cout<<"A)1 Kasým 1928\n"; 
	Sleep(1000);
	cout<<"B)24 Kasým 1928\n"; 
	Sleep(1000);
	cout<<"C)29 Ekim 1923\n";  
	Sleep(1000); 
	cout<<"D)6 Ocak 1930\n"; 
	cout<<"Kalan Süre: ";
	for(int i=10 ; i>=0 ; i--) {
		cout<<i<<" ";
		Sleep(1000);
	}
	cevap4:
	cout<<"\nYanýtýnýz: ";
	cin>>cevap; cout<<endl; 
	switch(cevap){
		case 'A' : cout<<"Doðru\n";
		PlaySound("alkis.wav", NULL, SND_SYNC); 
		cout<<"Sýradaki soru 5000 TL\n";
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
			cout<<"Joker hakkýnýz kalmadý :(\n"; goto cevap4;
		}	
		
		case 'T' :
			if (jokersayisi>0) {
				cout<<"\nTam emin deðilim ama cevap A gibi.\n";
			jokersayisi--;
			goto cevap4; break;
			}
		else {
			cout<<"Joker hakkýnýz kalmadý :(\n"; goto cevap4;
		}
			
		case 'Y' :
			if (jokersayisi>0) {
				cout<<"Cevap A veya D";
		    jokersayisi--;
			goto cevap4; break;
			}
		else {
			cout<<"Joker hakkýnýz kalmadý :(\n"; goto cevap4;
		}
		
		default: cout<<"Oyun Bitti\n1000 TL kazandýnýz!";
		PlaySound("kaybet.wav", NULL, SND_SYNC);
		PlaySound("bitti.wav", NULL, SND_SYNC); return 0;
	}
	

D:	cout<<"Güneþ sistemindeki en büyük gezegen hangisidir?\n";
	Sleep(1000);
	cout<<"A)Dünya\n"; 
	Sleep(1000);
	cout<<"B)Satürn\n"; 
	Sleep(1000);
	cout<<"C)Jüpiter\n";  
	Sleep(1000); 
	cout<<"D)Uranüs\n"; 
	cout<<"Kalan Süre: ";
	for(int i=10 ; i>=0 ; i--) {
		cout<<i<<" ";
		Sleep(1000);
	}
	cevap5:
	cout<<"\nYanýtýnýz: ";
	cin>>cevap; cout<<endl;
	switch(cevap){
		case 'C' : cout<<"Doðru\n"; 
		PlaySound("alkis.wav", NULL, SND_SYNC);
		cout<<"Sýradaki soru 7500 TL\n";
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
			cout<<"Joker hakkýnýz kalmadý :(\n"; goto cevap5;
		}	
		
		case 'T' :
			if (jokersayisi>0) {
				cout<<"\nTam emin deðilim ama cevap C gibi.\n";
			jokersayisi--;
			goto cevap5; break;
			}
		else {
			cout<<"Joker hakkýnýz kalmadý :(\n"; goto cevap5;
		}
			
		case 'Y' :
			if (jokersayisi>0) {
				cout<<"Cevap C veya D";
		    jokersayisi--;
			goto cevap5; break;
			}
		else {
			cout<<"Joker hakkýnýz kalmadý :(\n"; goto cevap5;
		}
			
		default: cout<<"Oyun Bitti\n1000 TL kazandýnýz!";
		PlaySound("kaybet.wav", NULL, SND_SYNC);
		PlaySound("bitti.wav", NULL, SND_SYNC); return 0;
	}	
	
	
	
E:	cout<<"Ýlk resmi gazete hangisidir?\n";
	Sleep(1000);
	cout<<"A)Takvim-i Vekayi\n"; 
	Sleep(1000);
	cout<<"B)Ceride-i Havadis\n"; 
	Sleep(1000);
	cout<<"C)Tercüman-ý Ahval\n";  
	Sleep(1000); 
	cout<<"D)Nizam-ý Cedid\n"; 
	cout<<"Kalan Süre: ";
	for(int i=10 ; i>=0 ; i--) {
		cout<<i<<" ";
		Sleep(1000);
	}
	cevap6:
	cout<<"\nYanýtýnýz: ";
	cin>>cevap; cout<<endl;
	switch(cevap){
		case 'A' : cout<<"Doðru\n"; 
		PlaySound("alkis.wav", NULL, SND_SYNC);
		cout<<"Sýradaki soru 15000 TL deðerinde baraj sorusu ve sesli soru.\n";
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
			cout<<"Joker hakkýnýz kalmadý :(\n"; goto cevap6;
		}	
		
		case 'T' :
			if (jokersayisi>0) {
				cout<<"\nTam emin deðilim ama cevap A gibi.\n";                
			jokersayisi--;
			goto cevap6; break;
			}
		else {
			cout<<"Joker hakkýnýz kalmadý :(\n"; goto cevap6;
		}	
			
		case 'Y' :
			if (jokersayisi>0) {
				cout<<"Cevap A veya D";
		    jokersayisi--;
			goto cevap6; break;
			}
		else {
			cout<<"Joker hakkýnýz kalmadý :(\n"; goto cevap6;
		}	
			
		default: cout<<"Oyun Bitti\n1000 TL kazandýnýz!";
		PlaySound("kaybet.wav", NULL, SND_SYNC);
		PlaySound("bitti.wav", NULL, SND_SYNC); return 0;
	}
	
	
F:	cout<<"Þarkýyý dinleyiniz..\n";
    PlaySound("7475.wav", NULL, SND_SYNC);
    system("cls");
    cout<<"Dinlediðiniz The Connells - '74-'75 adlý parça hangi filmin final sahnesinde kullanýlmýþtýr?\n";
	Sleep(1000);
	cout<<"A)Die Antwoord\n"; 
	Sleep(1000);
	cout<<"B)Boy 7\n"; 
	Sleep(1000);
	cout<<"C)Cehennem Melekleri 3\n";  
	Sleep(1000); 
	cout<<"D)Yeþil Yol\n"; 
	cout<<"Kalan Süre: ";
	for(int i=10 ; i>=0 ; i--) {
		cout<<i<<" ";
		Sleep(1000);
	}
	cevap7:
	cout<<"\nYanýtýnýz: ";
	cin>>cevap; cout<<endl;
	switch(cevap){
		case 'B' : cout<<"Doðru\n"; 
		PlaySound("alkis.wav", NULL, SND_SYNC);
		cout<<"Sýradaki soru 30000 TL\n";
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
			cout<<"Joker hakkýnýz kalmadý :(\n"; goto cevap7;
		}	
		
		case 'T' :
			if (jokersayisi>0) {
				cout<<"\nTam emin deðilim ama cevap B gibi.\n";
			jokersayisi--;
			goto cevap7; break;
			}
		else {
			cout<<"Joker hakkýnýz kalmadý :(\n"; goto cevap7;
		}	
			
		case 'Y' :
			if (jokersayisi>0) {
				cout<<"Cevap B veya D";
		    jokersayisi--;
			goto cevap7; break;
			}
		else {
			cout<<"Joker hakkýnýz kalmadý :(\n"; goto cevap7;
		}
			
		default: cout<<"Oyun Bitti\n15000 TL kazandýnýz!";
		PlaySound("kaybet.wav", NULL, SND_SYNC);
		PlaySound("bitti.wav", NULL, SND_SYNC); return 0;
	}
	
	
	
	
G:	cout<<"Marvel kahramanlarýndan hangisi gama ýþýnlarýna maruz kalarak süper kahraman olmuþtur?\n";
	Sleep(1000);
	cout<<"A)The Flash\n"; 
	Sleep(1000);
	cout<<"B)Kaptan Amerika\n"; 
	Sleep(1000);
	cout<<"C)Spider Man\n";  
	Sleep(1000); 
	cout<<"D)Hulk\n"; 
	cout<<"Kalan Süre: ";
	for(int i=10 ; i>=0 ; i--) {
		cout<<i<<" ";
		Sleep(1000);
	}
	cevap8:
	cout<<"\nYanýtýnýz: ";
	cin>>cevap; cout<<endl;
	switch(cevap){
		case 'D' : cout<<"Doðru\n"; 
		PlaySound("alkis.wav", NULL, SND_SYNC);
		cout<<"Sýradaki soru 60000 TL\n";
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
			cout<<"Joker hakkýnýz kalmadý :(\n"; goto cevap8;
		}	
		
		case 'T' :
			if (jokersayisi>0) {
				cout<<"\nTam emin deðilim ama cevap D gibi.\n";
			jokersayisi--;
			goto cevap8; break;
			}
		else {
			cout<<"Joker hakkýnýz kalmadý :(\n"; goto cevap8;
		}	
			
		case 'Y' :
			if (jokersayisi>0) {
				cout<<"Cevap B veya D";
		    jokersayisi--;
			goto cevap8; break;
			}
		else {
			cout<<"Joker hakkýnýz kalmadý :(\n"; goto cevap8;
		}
			
		default: cout<<"Oyun Bitti\n15000 TL kazandýnýz!";
		PlaySound("kaybet.wav", NULL, SND_SYNC);
		PlaySound("bitti.wav", NULL, SND_SYNC); return 0;
	}
	
	
	
H:	cout<<"2015 Nobel Kimya Ödülünü Kazanan Türk Bilim Ýnsaný Kimdir?\n";
	Sleep(1000);
	cout<<"A)Aziz Nesin\n"; 
	Sleep(1000);
	cout<<"B)Turgut Özakman\n"; 
	Sleep(1000);
	cout<<"C)Can Yücel\n";  
	Sleep(1000); 
	cout<<"D)Aziz Sancar\n"; 
	cout<<"Kalan Süre: ";
	for(int i=10 ; i>=0 ; i--) {
		cout<<i<<" ";
		Sleep(1000);
	}
	cevap9:
	cout<<"\nYanýtýnýz: ";
	cin>>cevap; cout<<endl;
	switch(cevap){
		case 'D' : cout<<"Doðru\n"; 
		PlaySound("alkis.wav", NULL, SND_SYNC);
		cout<<"Sýradaki soru 125000 TL\n";
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
			cout<<"Joker hakkýnýz kalmadý :(\n"; goto cevap9;
		}	
		
		case 'T' :
			if (jokersayisi>0) {
				cout<<"\nTam emin deðilim ama cevap D gibi.\n";
			jokersayisi--;
			goto cevap9; break;
			}
		else {
			cout<<"Joker hakkýnýz kalmadý :(\n"; goto cevap9;
		}	
			
		case 'Y' :
			if (jokersayisi>0) {
				cout<<"Cevap B veya D";
		    jokersayisi--;
			goto cevap9; break;
			}
		else {
			cout<<"Joker hakkýnýz kalmadý :(\n"; goto cevap9;
		}
			
		default: cout<<"Oyun Bitti\n15000 TL kazandýnýz!";
		PlaySound("kaybet.wav", NULL, SND_SYNC);
		PlaySound("bitti.wav", NULL, SND_SYNC); return 0;
	}
	
	
I:	cout<<"9/3+6-3*3+9/3+6/2-3*3+3 iþleminin sonucu nedir?\n";
	Sleep(1000);
	cout<<"A)0\n"; 
	Sleep(1000);
	cout<<"B)3\n"; 
	Sleep(1000);
	cout<<"C)6\n";  
	Sleep(1000); 
	cout<<"D)9\n"; 
	cout<<"Kalan Süre: ";
	for(int i=10 ; i>=0 ; i--) {
		cout<<i<<" ";
		Sleep(1000);
	}
	cevap10:
	cout<<"\nYanýtýnýz: ";
	cin>>cevap; cout<<endl;
	switch(cevap){
		case 'A' : cout<<"Doðru\n"; 
		PlaySound("alkis.wav", NULL, SND_SYNC);
		cout<<"Sýradaki soru 250000 TL\n";
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
			cout<<"Joker hakkýnýz kalmadý :(\n"; goto cevap10;
		}	
		
		case 'T' :
			if (jokersayisi>0) {
				cout<<"\nTam emin deðilim ama cevap A gibi.\n";
			jokersayisi--;
			goto cevap10; break;
			}
		else {
			cout<<"Joker hakkýnýz kalmadý :(\n"; goto cevap10;
		}	
			
		case 'Y' :
			if (jokersayisi>0) {
				cout<<"Cevap A veya D";
		    jokersayisi--;
			goto cevap10; break;
			}
		else {
			cout<<"Joker hakkýnýz kalmadý :(\n"; goto cevap10;
		}
			
		default: cout<<"Oyun Bitti\n15000 TL kazandýnýz!";
		PlaySound("kaybet.wav", NULL, SND_SYNC);
		PlaySound("bitti.wav", NULL, SND_SYNC); return 0;
	}
	
	


J:	cout<<"2015 yýlýnda hayatýný kaybeden BABA lakaplý Türk arabesk sanatçýsý kimdir?\n";
	Sleep(1000);
	cout<<"A)Ferdi Tayfur\n"; 
	Sleep(1000);
	cout<<"B)Müslüm Gürses\n"; 
	Sleep(1000);
	cout<<"C)Orhan Gencebay\n";  
	Sleep(1000); 
	cout<<"D)Hakan Taþýyan\n"; 
	cout<<"Kalan Süre: ";
	for(int i=10 ; i>=0 ; i--) {
		cout<<i<<" ";
		Sleep(1000);
	}
	cevap11:
	cout<<"\nYanýtýnýz: ";
	cin>>cevap; cout<<endl;
	switch(cevap){
		case 'B' : cout<<"Doðru\n"; 
		PlaySound("alkis.wav", NULL, SND_SYNC);
		cout<<"Sýradaki soru 1 milyon TL\n";
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
			cout<<"Joker hakkýnýz kalmadý :(\n"; goto cevap11;
		}	
		
		case 'T' :
			if (jokersayisi>0) {
				cout<<"\nTam emin deðilim ama cevap B gibi.\n";
			jokersayisi--;
			goto cevap11; break;
			}
		else {
			cout<<"Joker hakkýnýz kalmadý :(\n"; goto cevap11;
		}	
			
		case 'Y' :
			if (jokersayisi>0) {
				cout<<"Cevap B veya D";
		    jokersayisi--;
			goto cevap11; break;
			}
		else {
			cout<<"Joker hakkýnýz kalmadý :(\n"; goto cevap11;
		}
			
		default: cout<<"Oyun Bitti\n15000 TL kazandýnýz!";
		PlaySound("kaybet.wav", NULL, SND_SYNC);
		PlaySound("bitti.wav", NULL, SND_SYNC); return 0;
	}
	
	
	
	
K:	cout<<"Adanalý dizisindeki Yavuz Komiser karakterini kim canlandýrmýþtýr?\n";
	Sleep(1000);
	cout<<"A)Tamer Karadaðlý\n"; 
	Sleep(1000);
	cout<<"B)Mehmet Akif Alakurt\n"; 
	Sleep(1000);
	cout<<"C)Oktay Kaynarca\n";  
	Sleep(1000); 
	cout<<"D)Ayhan Eroðlu\n"; 
	cout<<"Kalan Süre: ";
	for(int i=10 ; i>=0 ; i--) {
		cout<<i<<" ";
		Sleep(1000);
	}
	cevap12:
	cout<<"\nYanýtýnýz: ";
	cin>>cevap; cout<<endl;
	switch(cevap){
		case 'C' : cout<<"Doðru\n"; 
		PlaySound("alkis.wav", NULL, SND_SYNC);
		
		cizgi();
		cout<<"             1 Milyon TL Kazandýnýz!";
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
			cout<<"Joker hakkýnýz kalmadý :(\n"; goto cevap12;
		}	
		
		case 'T' :
			if (jokersayisi>0) {
				cout<<"\nTam emin deðilim ama cevap C gibi.\n";
			jokersayisi--;
			
			goto cevap12; break;
			}
		else {
			cout<<"Joker hakkýnýz kalmadý :(\n"; goto cevap12;
		}	
			
		case 'Y' :
			if (jokersayisi>0) {
				cout<<"Cevap C veya D";
		    jokersayisi--;
		    goto cevap12; break;
			}
		else {
			cout<<"Joker hakkýnýz kalmadý :(\n"; goto cevap12;
		}
			
		default: cout<<"Oyun Bitti\n15000 TL kazandýnýz!";
		PlaySound("kaybet.wav", NULL, SND_SYNC);
		PlaySound("bitti.wav", NULL, SND_SYNC); return 0;
	}
	
	
    PlaySound("bravo.wav", NULL, SND_SYNC);
    cizgi();
    cout<<"                KAZANDINIZ!";
    cizgi();
   	PlaySound("müzik.wav", NULL, SND_SYNC);
   	
   	getch();
}

void cizgi() {
	cout<<"==================================================================="<<endl;
}


























