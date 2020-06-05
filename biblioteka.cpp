#include<iostream>
#include<iomanip>
#include<string>
#include<algorithm>
#include <time.h> 
#include<fstream>

using namespace std;

//BRISANJE SADRZAJA NA EKRANU
void cls() {
	
	system("CLS");

}

void pocetni_displej() {

	cout << endl;

	cout << endl;
	cout << endl;

	cout << "\t\t\t               ______________________________________" << endl;
	cout << "\t\t\t              |                                      |" << endl;
	cout << "\t\t\t              |  DOBRO DOSLI U NASU-VASU BIBLIOTEKU  |" << endl;
	cout << "\t\t\t              |______________________________________|" << endl;

	cout << endl;
	cout << endl;

	cout << "\t\t\tProgarm koji cete u nastavku koristiti ima sljedece namjene ovisno o korisnickom rezimu: \n";

	cout << endl;
	cout << endl;

	cout << "\n\t\t\t\t     ----U slucaju da ste zaposleni---- \n\n";
	cout << "\t\t\t           1. Unosenje knjige od strane uposlenih\n";
	cout << "\t\t\t           2. Pregled knjiga u biblioteci\n";
	cout << "\t\t\t           3. Pretraga odredjene knjige\n";
	cout << "\t\t\t           4. Uclanjenje u biblioteku [sedmicno, mjesecno,godisnje]\n";
	cout << "\t\t\t           5. Pregled korisnika u sistemu\n";
	cout << "\t\t\t           6. Informacije o biblioteci\n";
	cout << "\t\t\t           7. Promjena korisnickog rezima\n";
	cout << "\t\t\t           10. Izlaz iz programa\n";

	cout << endl;
	cout << endl;

	cout << "\n\t\t\t\t    ----U slucaju da ste vanjski korisnik----\n\n";
	cout << "\t\t\t            1. Pregled knjiga u biblioteci\n";
	cout << "\t\t\t            2. Pretraga odredjene knjige\n";
	cout << "\t\t\t            3. Uclanjenje u biblioteku [sedmicno, mjesecno,godisnje]\n";
	cout << "\t\t\t            4. Informacije o biblioteci\n";
	cout << "\t\t\t            5. Mjesto za kritiku/pohvalu [ ocjenu sistema ]\n";
	cout << "\t\t\t            6. Promjena korisnickog rezima\n";
	cout << "\t\t\t            10. Izlaz iz programa\n";

	cout << endl;
	cout << endl;

	cout << "\t\t\t\t\t\t\t\t\t	  Nadamo se da cete uzivati! ";
	cout << "\t\t\t\t\t\t\t\t\t\t\t			Pritisnite ENTER za nastavak";

	cout << endl;

	system("PAUSE>null");
	system("CLS");
}

void feedback(string poruka, int ocjena, string potpis) {

	ofstream kritika_pohvala("feedback.txt", ios::app);

	kritika_pohvala << "__________________________________________________________________________________________________________________________\n\n";
	kritika_pohvala << endl;

	kritika_pohvala << "\t\t\t\t\t\t\t\tKritika/pohvala: " << poruka << endl;
	kritika_pohvala << "\t\t\t\t\t\t\t\tVasa ocjena: ";
	
	if (ocjena == 1) {

		kritika_pohvala << " 1 [ lose ] " << endl;

	}

	if (ocjena == 2) {

		kritika_pohvala << " 2 [ ispod prosjeka ] " << endl;

	}

	if (ocjena == 3) {

		kritika_pohvala << " 3 [ prosjecno ] " << endl;

	}

	if (ocjena == 4) {

		kritika_pohvala << " 4 [ Dobro ] " << endl;

	}

	if (ocjena == 5) {

		kritika_pohvala << " 5 [ Odlicno ] " << endl;

	}

	if (potpis != "") {

		kritika_pohvala << "\t\t\t\t\t\t\t\tPotpis: " << potpis << endl;

	}

	if (potpis == "") {

		kritika_pohvala << "\t\t\t\t\t\t\t\tKorisnik je odabrao ostati anoniman." << endl;

	}

	kritika_pohvala << endl;

	kritika_pohvala << "__________________________________________________________________________________________________________________________\n\n";

	kritika_pohvala.close();

}

void feedback_menu() {

		system("CLS");

		cout << endl;
		cout << endl;

		cout << "\t\t\t         ____________" << endl;
		cout << "\t\t\t        |            |" << endl;
		cout << "\t\t\t        |  FEEDBACK  |" << endl;
		cout << "\t\t\t        |____________|" << endl;

		cout << endl;
		cout << endl;
		cout << endl;

		cout << "\t\t\tOdlicno         ->  * * * * * [5]\n";
		cout << "\t\t\tDobro           ->  * * * *   [4]\n";
		cout << "\t\t\tProsjecno       ->  * * *     [3]\n";
		cout << "\t\t\tIspod prosjeka  ->  * *       [2]\n";
		cout << "\t\t\tLose            ->  *         [1]\n";


		cout << "\n\t\t	    Vasa ocjena za sistem? ";
		int ocjena;
		cin >> ocjena;
		cin.ignore();

		cout << "\n\t\t	  Ostavite kritiku/pohvalu...";

		string poruka;
		cout << "\n\t\t    ";  getline(cin, poruka);

		string potpis;
		cout << "\n\t        Zelite li potpisati feedback? [ 1 - DA; 0 - NE ]: ";
		int izbor;
		cin >> izbor;
		cin.ignore();

		if (izbor == 1) {

			cout << "\n\t\t          Mjesto za potpis: ";
			getline(cin, potpis);
		
		}

		cout << endl;
		cout << endl;

		feedback(poruka, ocjena, potpis);

		cout << "\t\t     ______________________________________\n";
		cout << "\t\t    |                                      |\n";
		cout << "\t\t    |    Hvala na ostavljenom feedback-u   |\n";
		cout << "\t\t    |                                      |\n";
		cout << "\t\t    |   ---USPJESNO POHRANJEN FEEDBACK---  |\n";
		cout << "\t\t    |______________________________________|";

		cout << "\n\n\n\t\t\t\t\t\t  Pritisnite ESC za izlazak iz programa\n";

		system("PAUSE>null");
		system("CLS");

		cout << endl;
		cout << endl;

		cout << "\t\t         _____________________________________" << endl;
		cout << "\t\t        |                                     |" << endl;
		cout << "\t\t        |  HVALA NA KORISTENJU NASEG SISTEMA  |" << endl;
		cout << "\t\t        |_____________________________________|" << endl;

		cout << endl;
		cout << endl;
		cout << endl;

		cout << "\n\n\n\t\t\t\t\t\t  Pritisnite ESC za izlazak iz programa\n";

		system("PAUSE>null");
		system("CLS");

	}

void glavni_meni() {

	cout << endl;

	cout << endl;
	cout << endl;

	cout << "\t\t\t         _______________ " << endl;
	cout << "\t\t\t        |               |" << endl;
	cout << "\t\t\t        |  GLAVNI MENI  |" << endl;
	cout << "\t\t\t        |_______________|" << endl;

	cout << endl;
	cout << endl;

	cout << "\t\t\t ODABERITE REDNI BROJ ZELJENE OPCIJE \n";

	cout << endl;

	cout << "\t\t\t          1. Unos knjige\n";
	cout << "\t\t\t          2. Pregled knjiga\n";
	cout << "\t\t\t          3. Pretraga knjige\n";
	cout << "\t\t\t          4. Uclanjenje\n";
	cout << "\t\t\t          5. Uclanjeni\n";
	cout << "\t\t\t          6. O nama\n";
	cout << "\t\t\t          9. Promjena nacina rada\n";
	cout << "\t\t\t          10. Izlaz\n";

	cout << endl;
	cout << endl;
	cout << endl;

	cout << "_____________________________________________________________________________________________\n\n";

}

void glavni_meni_korisnici() {

	cout << endl;

	cout << endl;
	cout << endl;

	cout << "\t\t\t         _______________ " << endl;
	cout << "\t\t\t        |               |" << endl;
	cout << "\t\t\t        |  GLAVNI MENI  |" << endl;
	cout << "\t\t\t        |_______________|" << endl;

	cout << endl;
	cout << endl;

	cout << "\t\t\t ODABERITE REDNI BROJ ZELJENE OPCIJE \n";

	cout << endl;

	cout << "\t\t\t          1. Pregled knjiga\n";
	cout << "\t\t\t          2. Pretraga knjige\n";
	cout << "\t\t\t          3. Uclanjenje\n";
	cout << "\t\t\t          4. O nama\n";
	cout << "\t\t\t          6. Promjena nacina rada\n";
	cout << "\t\t\t          10. Izlaz\n";

	cout << endl;
	cout << endl;
	cout << endl;

	cout << "_____________________________________________________________________________________________\n\n";

}

void meni_za_pregled_knjiga() {

	cout << endl;

	cout << endl;
	cout << endl;

	cout << "\t\t\t\t __________________________" << endl;
	cout << "\t\t\t\t|                          |" << endl;
	cout << "\t\t\t\t|  MENI ZA PREGLED KNJIGA  |" << endl;
	cout << "\t\t\t\t|__________________________|" << endl;

	cout << endl;
	cout << endl;

	cout << "\t\t\t   Pogledajte knjige u sistemu sortirane: \n";

	cout << endl;

	cout << "\t\t\t      1. Prema naslovu [ A - Z ]\n";
	cout << "\t\t\t      2. Prema imenu autora [ A - Z ]\n";
	cout << "\t\t\t      3. Prema prezimenu autora [ A - Z ]\n";
	cout << "\t\t\t      4. Prema godini izdavanja [ novija izdanja ka starijim ]\n";
	cout << "\t\t\t      5. Prema godini izdavanja [ starija izdanja ka novijim ]\n";
	cout << "\t\t\t      6. Prema broju stranica [ veci broj stranica ka manje ]\n";
	cout << "\t\t\t      7. Prema broju stranica [ manji broj stranica ka vecem ]\n";
	cout << "\t\t\t      8. Prema broju knjiga na stanju [ veci broj na stanju ka manjem ]\n";
	cout << "\t\t\t      9. Prema broju knjiga na stanju [ manji broj na stanju ka vecem ]\n";
	cout << "\t\t\t      10. Prema zanru\n";
	cout << "\t\t\t      11. Prema stilu pisanja\n";

	cout << endl;
	cout << endl;

	cout << "_______________________________________________________________________________________________________\n";

}

void meni_za_pretragu_zanrova() {

	cout << endl;

	cout << endl;
	cout << endl;

	cout << "\t\t\t\t\t _______________ \n ";
	cout << "\t\t\t\t\t|               |\n ";
	cout << "\t\t\t\t\t|  PREMA ZANRU  |\n";
	cout << "\t\t\t\t\t|_______________|\n ";

	cout << endl;
	cout << endl;

	cout << "\t\t\t\t   Pogledajte listu zanrova: \n";

	cout << endl;

	cout << "\t\t\t\t      1. Drama\n";
	cout << "\t\t\t\t      2. Djecije\n";
	cout << "\t\t\t\t      3. Kriminalisticki\n";
	cout << "\t\t\t\t      4. Triler\n";
	cout << "\t\t\t\t      5. Historijski\n";

	cout << endl;
	cout << endl;

	cout << "_______________________________________________________________________________________________________\n";

}

void meni_za_pretragu_stilova() {

	cout << endl;

	cout << endl;
	cout << endl;

	cout << "\t\t\t\t\t _______________ \n ";
	cout << "\t\t\t\t\t|               |\n ";
	cout << "\t\t\t\t\t|  PREMA STILU  |\n";
	cout << "\t\t\t\t\t|_______________|\n ";

	cout << endl;
	cout << endl;

	cout << "\t\t\t\t   Pogledajte listu stilova: \n";

	cout << endl;

	cout << "\t\t\t\t      1. Roman\n";
	cout << "\t\t\t\t      2. Pripovijetka\n";
	cout << "\t\t\t\t      3. Poezija\n";
	cout << "\t\t\t\t      4. Bajka\n";

	cout << endl;
	cout << endl;

	cout << "_______________________________________________________________________________________________________\n";

}

void meni_za_pretragu_knjiga() {

	cout << endl;

	cout << endl;
	cout << endl;

	cout << "\t\t\t\t ___________________________" << endl;
	cout << "\t\t\t\t|                           |" << endl;
	cout << "\t\t\t\t|  MENI ZA PRETRAGU KNJIGE  |" << endl;
	cout << "\t\t\t\t|___________________________|" << endl;


	cout << endl;
	cout << endl;

	cout << "\t\t\t  Pretrazite knjige u sistemu: \n";

	cout << endl;

	cout << "\t\t\t      1. Prema naslovu\n";
	cout << "\t\t\t      2. Prema imenu autora\n";
	cout << "\t\t\t      3. Prema prezimenu autora\n";
	cout << "\t\t\t      4. Prema izdavackoj kuci\n";
	cout << "\t\t\t      5. Prema godini izdavanja\n";

	cout << endl;
	cout << endl;

	cout << "_______________________________________________________________________________________________________\n";

}

void meni_za_pregled_korisnika() {

	cout << endl;

	cout << endl;
	cout << endl;

	cout << "\t\t\t ________________________________________" << endl;
	cout << "\t\t\t|                                        |" << endl;
	cout << "\t\t\t|  MENI ZA PREGLED KORISNIKA BIBLIOTEKE  |" << endl;
	cout << "\t\t\t|________________________________________|" << endl;

	cout << endl;
	cout << endl;

	cout << "\t\t\t  Pretrazite korisnike u sistemu: \n";

	cout << endl;

	cout << "\t\t\t      1. Prema imenu [ A - Z ]\n";
	cout << "\t\t\t      2. Prema prezimenu [ A - Z ]\n";
	cout << "\t\t\t      3. Prema broju godina [ mladji izdanja ka starijim ]\n";
	cout << "\t\t\t      4. Prema broju godina [ starija izdanja ka mladim ]\n";
	cout << "\t\t\t      5. Prema ID-u [ veci ka manjem ]\n";
	cout << "\t\t\t      6. Prema ID-u [ manji ka vecem ]\n";
	cout << "\t\t\t      7. Spisak zenskih osoba\n";
	cout << "\t\t\t      8. Spisak muskih osoba\n";

	cout << endl;
	cout << endl;

	cout << "_______________________________________________________________________________________________________\n";

}

//________________________________________________________________________________________________

								//ENUMERACIJE

enum Clanstvo { Sedmicno = 1, Mjesecno, Godisnje };

enum Zivotna_dob { Djetinjstvo = 1, Pubertet, Adolescencija, Zrelost, Starost };

enum Zanr { Drama = 1, Djecije, Kriminalisticki, Triler, Historijski };

enum Stil_pisanja { Roman = 1, Pripovijetka, Poezija, Bajka };

//________________________________________________________________________________________________

								//STRUKTURE

struct Datum {

	int dan;
	int mjesec;
	int godina;

	Datum() {

		dan = 0;
		mjesec = 0;
		godina = 0;

	}

};

struct Korisnik {

	string ime;
	string prezime;
	string spol;
	int godine;
	int ID;
	Clanstvo clanstvo_u_biblioteci;
	Zivotna_dob dob;
	Datum datum_uclanjenja;

	Korisnik() : ime(""), prezime(""), spol(""), godine(0), ID(0), clanstvo_u_biblioteci(Clanstvo(1)), dob(Zivotna_dob(1)) {}

	Korisnik unos_korisnika() {

		Korisnik k;

		cin.ignore();

		cout << "\t\t\t\t    Ime: ";

		getline(cin, k.ime);

		cout << endl;

		cout << "\t\t\t\t    Prezime: ";

		getline(cin, k.prezime);

		cout << endl;

		cout << "\t\t\t\t    Spol [ Z ili M ]: ";

		cin >> k.spol;

		while (k.spol != "Z" && k.spol != "z" && k.spol != "M" && k.spol != "m") {

			if (cin.fail()) {

				cin.clear();
				cin.ignore();

				cout << "\t\t\t\t    Pogresan unos...\n ";
				cout << "\t\t\t\t    Unijeli ste broj, a unos je u obliku slova.\n";
				cout << "\n\t\t\t\t    Molimo ponovo unesite spol: ";

			}

			else {

				cout << "\t\t\t\t    Pogresan unos...\n ";
				cout << "\t\t\t\t    Unijeli ste pogresno slovo.\n";
				cout << "\n\t\t\t\t    Molimo ponovo unesite spol: ";

			}

			cin >> k.spol;

		}

		cout << endl;

		cout << "\t\t\t\t    Godine: ";

		cin >> k.godine;

		while (k.godine < 1) {

			if (cin.fail()) {

				cin.clear();
				cin.ignore();

				cout << "\t\t\t\t    Pogresan unos...\n ";
				cout << "\t\t\t\t    Unijeli ste znak, a unos je u obliku broja.\n";
				cout << "\n\t\t\t\t    Molimo ponovo unesite broj godina: ";

				cin.get();
			}

			else {

				cout << "\t\t\t\t    Pogresan unos...\n ";
				cout << "\n\t\t\t\t    Molimo ponovo unesite broj godina: ";

			}

			cin >> k.godine;

		}

		cin.ignore();

		cout << endl;
		cout << endl;

		cout << "\t\t\t\t    | 1 - Sedmicno      |\n";
		cout << "\t\t\t\t    | 2 - Mjesecno      |\n";
		cout << "\t\t\t\t    | 3 - Godisnje      |\n";

		cout << "\n\t\t\t\t    Odaberite vremenski period clanstva: ";
		int odabir_clanstva;
		cin >> odabir_clanstva;

		while (odabir_clanstva < 1 || odabir_clanstva > 3) {
			
			if (cin.fail()) {

				cin.clear();
				cin.ignore();

				cout << "\t\t\t\t    Pogresan unos...\n ";
				cout << "\t\t\t\t    Unijeli ste znak, a unos je u obliku broja.\n";
				cout << "\n\t\t\t\t    Molimo ponovo unesite vremenski period clanstva: ";

				cin.get();
			}

			else {

				cout << "\t\t\t\t    Pogresan unos...\n ";
				cout << "\t\t\t\t    Vremenski period clanstva je u rasponu od 1 do 3!\n";
				cout << "\n\t\t\t\t    Molimo ponovo unesite vremenski period clanstva: ";
			
			}
			
			cin >> odabir_clanstva;

		}

		k.clanstvo_u_biblioteci = (Clanstvo)odabir_clanstva;

		cin.ignore();

		cout << endl;

		cout << "\n\t\t\t\t    Datum uclanjenja: \n";

		cout << "\n\t\t\t\t    Godina: ";
		cin >> k.datum_uclanjenja.godina;

		while (k.datum_uclanjenja.godina < 1) {

			if (cin.fail()) {

				cin.clear();
				cin.ignore();

				cout << "\t\t\t\t    Pogresan unos...\n ";
				cout << "\t\t\t\t    Unijeli ste znak, a unos je u obliku broja.\n";
				cout << "\n\t\t\t\t    Molimo ponovo unesite godinu: ";

			}

			else {

				cout << "\t\t\t\t    Pogresan unos...\n ";
				cout << "\n\t\t\t\t    Molimo ponovo unesite godinu: ";

			}

			cin >> k.datum_uclanjenja.godina;

		}


		cout << "\n\t\t\t\t    Mjesec: ";
		cin >> k.datum_uclanjenja.mjesec;

		while (k.datum_uclanjenja.mjesec < 1 || k.datum_uclanjenja.mjesec > 12) {

			if (cin.fail()) {

				cin.clear();
				cin.ignore();

				cout << "\t\t\t\t    Pogresan unos...\n ";
				cout << "\t\t\t\t    Unijeli ste znak, a unos je u obliku broja.\n";
				cout << "\n\t\t\t\t    Molimo ponovo unesite mjesec: ";

				cin.get();
			}

			else {

				cout << "\t\t\t\t    Pogresan unos...\n ";
				cout << "\t\t\t\t    Mjeseci su u rasponu od 1 do 12!\n";
				cout << "\n\t\t\t\t    Molimo ponovo unesite mjesec: ";

			}

			cin >> k.datum_uclanjenja.mjesec;

		}


		cout << "\n\t\t\t\t    Dan: ";
		cin >> k.datum_uclanjenja.dan;

		if (k.datum_uclanjenja.mjesec == 1 || k.datum_uclanjenja.mjesec == 3 ||
			k.datum_uclanjenja.mjesec == 5 || k.datum_uclanjenja.mjesec == 7 ||
			k.datum_uclanjenja.mjesec == 8 || k.datum_uclanjenja.mjesec == 10 ||
			k.datum_uclanjenja.mjesec == 12) {

			while (k.datum_uclanjenja.dan < 1 || k.datum_uclanjenja.dan > 31) {
				
				if (cin.fail()) {

					cin.clear();
					cin.ignore();

					cout << "\t\t\t\t    Pogresan unos...\n ";
					cout << "\t\t\t\t    Unijeli ste znak, a unos je u obliku broja.\n";
					cout << "\n\t\t\t\t    Molimo ponovo unesite mjesec: ";

					cin.get();

				}

				else {

					cout << "\t\t\t\t    Pogresan unos...\n ";
					cout << "\t\t\t\t    Dani za " << k.datum_uclanjenja.mjesec << ". mjesec su u rasponu od 1 do 31!\n";
					cout << "\n\t\t\t\t    Molimo ponovo unesite dan: ";

				}

				cin >> k.datum_uclanjenja.dan;
				
			}
			
		}


		if (k.datum_uclanjenja.mjesec == 4 ||
			k.datum_uclanjenja.mjesec == 6 || k.datum_uclanjenja.mjesec == 9 ||
			k.datum_uclanjenja.mjesec == 11) {

			while (k.datum_uclanjenja.dan < 1 || k.datum_uclanjenja.dan >30) {

				if (cin.fail()) {

					cin.clear();
					cin.ignore();

					cout << "\t\t\t\t    Pogresan unos...\n ";
					cout << "\t\t\t\t    Unijeli ste znak, a unos je u obliku broja.\n";
					cout << "\n\t\t\t\t    Molimo ponovo unesite dan: ";

					cin.get();
				}

				else {

					cin.clear();
					cin.ignore();

					cout << "\t\t\t\t    Pogresan unos...\n ";
					cout << "\t\t\t\t    Dani za " << k.datum_uclanjenja.mjesec << ". mjesec su u rasponu od 1 do 30<!\n";
					cout << "\n\t\t\t\t    Molimo ponovo unesite dan: ";

				}

				cin >> k.datum_uclanjenja.dan;

			}

		}

		if (k.datum_uclanjenja.mjesec == 2) {

			if (k.datum_uclanjenja.godina % 4 == 0) {

				while (k.datum_uclanjenja.dan < 1 || k.datum_uclanjenja.dan >29) {

					if (cin.fail()) {

						cin.clear();
						cin.ignore();

						cout << "\t\t\t\t    Pogresan unos...\n ";
						cout << "\t\t\t\t    Unijeli ste znak, a unos je u obliku broja.\n";
						cout << "\n\t\t\t\t    Molimo ponovo unesite dan: ";

						cin.get();
					}

					else {

						cin.clear();
						cin.ignore();

						cout << "\t\t\t\t    Pogresan unos...\n ";
						cout << "\t\t\t\t    Dani za " << k.datum_uclanjenja.mjesec << ". mjesec su u rasponu od 1 do 29!\n";
						cout << "\n\t\t\t\t    Molimo ponovo unesite dan: ";

					}

					cin >> k.datum_uclanjenja.dan;

				}

			}

			if (k.datum_uclanjenja.godina % 4 != 0) {

				while (k.datum_uclanjenja.dan < 1 || k.datum_uclanjenja.dan > 28) {

					if (cin.fail()) {

						cin.clear();
						cin.ignore();

						cout << "\t\t\t\t    Pogresan unos...\n ";
						cout << "\t\t\t\t    Unijeli ste znak, a unos je u obliku broja.\n";
						cout << "\n\t\t\t\t    Molimo ponovo unesite dan: ";

						cin.get();
					}

					else {

						cin.clear();
						cin.ignore();

						cout << "\t\t\t\t    Pogresan unos...\n ";
						cout << "\t\t\t\t    Dani za " << k.datum_uclanjenja.mjesec << ". mjesec su u rasponu od 1 do 28!\n";
						cout << "\n\t\t\t\t    Molimo ponovo unesite dan: ";

					}

					cin >> k.datum_uclanjenja.dan;

				}

			}

		}

		//RANDOM GENERISANJE ID-a KORISNIKA
		srand((unsigned)time(0));
		k.ID = rand() % 99 + 1;

		cin.ignore();

		cout << endl;

		return k;

		cout << "\n\n\n\t\t\t\t\t\t\t Pritisnite ENTER\n\t\t\t\t\t   za povrataka u glavni izbornik";

		system("PAUSE>null");
		system("CLS");

	}

	void lista_korisnika(Korisnik korisnik[], int brojac) {

		if (brojac < 1) {

			system("CLS");

			cout << endl;

			cout << "\t\t\t\t ___________________________________ \n";
			cout << "\t\t\t\t|                                   |\n";
			cout << "\t\t\t\t| U SISTEMU NEMA UNESENIH KORISNIKA |\n";
			cout << "\t\t\t\t|___________________________________|";

			cout << endl;

		}

		else {

			for (int i = 0; i < brojac; i++) {

				cout << endl;

				cout << "\n\t\t\t\t " << i + 1 << ". KORISNICA/KORISNIK\n\n";

				cout << "\t\t\t\tIme korisnika: " << korisnik[i].ime << endl;

				cout << "\t\t\t\tPrezime korisnika: " << korisnik[i].prezime << endl;

				cout << "\t\t\t\tSpol korisnika: " << korisnik[i].spol << endl;

				cout << "\t\t\t\tGodine korisnika: " << korisnik[i].godine << endl;

				cout << "\t\t\t\tVremenski period trajanja clanske kartice: ";

				if (korisnik[i].clanstvo_u_biblioteci == 1) {
					cout << "Sedmicno";
				}
				if (korisnik[i].clanstvo_u_biblioteci == 2) {
					cout << "Mjesecno";
				}
				if (korisnik[i].clanstvo_u_biblioteci == 3) {
					cout << "Godisnje";
				}

				cout << endl;

				cout << "\t\t\t\tStarosna dob kojoj korisnik pripada: ";

				if (korisnik[i].godine < 13) {
					korisnik[i].dob == 1;
					cout << "Djetinjstvo";
				}
				if (korisnik[i].godine > 12 && korisnik[i].godine < 18) {
					korisnik[i].dob == 2;
					cout << "Pubertet";
				}
				if (korisnik[i].godine > 17 && korisnik[i].godine < 25) {
					korisnik[i].dob == 3;
					cout << "Adolescencija";
				}
				if (korisnik[i].godine > 24 && korisnik[i].godine < 60) {
					korisnik[i].dob == 4;
					cout << "Zrelost";
				}
				if (korisnik[i].godine > 59) {
					korisnik[i].dob == 5;
					cout << "Starost";
				}
				cout << endl;

				cout << "\t\t\t\tDatum uclanjenja korisnika: ";

				switch (korisnik[i].datum_uclanjenja.mjesec) {

				case 1:
					cout << korisnik[i].datum_uclanjenja.dan << ". Januar " << korisnik[i].datum_uclanjenja.godina << ". godine.\n";
					break;

				case 2:
					cout << korisnik[i].datum_uclanjenja.dan << ". Feburar " << korisnik[i].datum_uclanjenja.godina << ". godine.\n";
					break;

				case 3:
					cout << korisnik[i].datum_uclanjenja.dan << ". Mart " << korisnik[i].datum_uclanjenja.godina << ". godine.\n";
					break;

				case 4:
					cout << korisnik[i].datum_uclanjenja.dan << ". April " << korisnik[i].datum_uclanjenja.godina << ". godine.\n";
					break;

				case 5:
					cout << korisnik[i].datum_uclanjenja.dan << ". Maj " << korisnik[i].datum_uclanjenja.godina << ". godine.\n";
					break;

				case 6:
					cout << korisnik[i].datum_uclanjenja.dan << ". Juni " << korisnik[i].datum_uclanjenja.godina << ". godine.\n";
					break;

				case 7:
					cout << korisnik[i].datum_uclanjenja.dan << ". Juli " << korisnik[i].datum_uclanjenja.godina << ". godine.\n";
					break;

				case 8:
					cout << korisnik[i].datum_uclanjenja.dan << ". August " << korisnik[i].datum_uclanjenja.godina << ". godine.\n";
					break;

				case 9:
					cout << korisnik[i].datum_uclanjenja.dan << ". Septembar " << korisnik[i].datum_uclanjenja.godina << ". godine.\n";
					break;

				case 10:
					cout << korisnik[i].datum_uclanjenja.dan << ". Oktobar " << korisnik[i].datum_uclanjenja.godina << ". godine.\n";
					break;

				case 11:
					cout << korisnik[i].datum_uclanjenja.dan << ". Novembar " << korisnik[i].datum_uclanjenja.godina << ". godine.\n";
					break;

				case 12:
					cout << korisnik[i].datum_uclanjenja.dan << ". Decembar " << korisnik[i].datum_uclanjenja.godina << ". godine.\n";
					break;

				default:
					cout << "\t\t\t\tPogresno unesen datum!\n";
				}

				cout << "\t\t\t\tID korisnika: " << korisnik[i].ID << endl;

			}

		}

	}

	void ispis_korisnika(Korisnik* knjige) {

		cout << "\t\t\t\tIme korisnika: " << knjige->ime << endl;

		cout << "\t\t\t\tPrezime korisnika: " << knjige->prezime << endl;

		cout << "\t\t\t\tSpol korisnika: " << knjige->spol << endl;

		cout << "\t\t\t\tGodine korisnika: " << knjige->godine << endl;

		cout << "\t\t\t\tVremenski period trajanja clanske kartice: ";

		if (knjige->clanstvo_u_biblioteci == 1) {
			cout << "Sedmicno";
		}
		if (knjige->clanstvo_u_biblioteci == 2) {
			cout << "Mjesecno";
		}
		if (knjige->clanstvo_u_biblioteci == 3) {
			cout << "Godisnje";
		}
		cout << endl;

		cout << "\t\t\t\tStarosna dob kojoj korisnik pripada: ";

		if (knjige->godine < 13) {
			knjige->dob == 1;
			cout << "Djetinjstvo";
		}
		if (knjige->godine > 12 && knjige->godine < 18) {
			knjige->dob == 2;
			cout << "Pubertet";
		}
		if (knjige->godine > 17 && knjige->godine < 25) {
			knjige->dob == 3;
			cout << "Adolescencija";
		}
		if (knjige->godine > 24 && knjige->godine < 60) {
			knjige->dob == 4;
			cout << "Zrelost";
		}
		if (knjige->godine > 59) {
			knjige->dob == 5;
			cout << "Starost";
		}
		cout << endl;

		cout << "\t\t\t\tDatum uclanjenja korisnika: ";

		switch (knjige->datum_uclanjenja.mjesec) {

		case 1:
			cout << knjige->datum_uclanjenja.dan << ". Januar " << knjige->datum_uclanjenja.godina << ". godine.\n";
			break;

		case 2:
			cout << knjige->datum_uclanjenja.dan << ". Feburar " << knjige->datum_uclanjenja.godina << ". godine.\n";
			break;

		case 3:
			cout << knjige->datum_uclanjenja.dan << ". Mart " << knjige->datum_uclanjenja.godina << ". godine.\n";
			break;

		case 4:
			cout << knjige->datum_uclanjenja.dan << ". April " << knjige->datum_uclanjenja.godina << ". godine.\n";
			break;

		case 5:
			cout << knjige->datum_uclanjenja.dan << ". Maj " << knjige->datum_uclanjenja.godina << ". godine.\n";
			break;

		case 6:
			cout << knjige->datum_uclanjenja.dan << ". Juni " << knjige->datum_uclanjenja.godina << ". godine.\n";
			break;

		case 7:
			cout << knjige->datum_uclanjenja.dan << ". Juli " << knjige->datum_uclanjenja.godina << ". godine.\n";
			break;

		case 8:
			cout << knjige->datum_uclanjenja.dan << ". August " << knjige->datum_uclanjenja.godina << ". godine.\n";
			break;

		case 9:
			cout << knjige->datum_uclanjenja.dan << ". Septembar " << knjige->datum_uclanjenja.godina << ". godine.\n";
			break;

		case 10:
			cout << knjige->datum_uclanjenja.dan << ". Oktobar " << knjige->datum_uclanjenja.godina << ". godine.\n";
			break;

		case 11:
			cout << knjige->datum_uclanjenja.dan << ". Novembar " << knjige->datum_uclanjenja.godina << ". godine.\n";
			break;

		case 12:
			cout << knjige->datum_uclanjenja.dan << ". Decembar " << knjige->datum_uclanjenja.godina << ". godine.\n";
			break;

		default:
			cout << "\t\t\t\tPogresno unesen datum!\n";
		}

		cout << "\t\t\t\tID korisnika: " << knjige->ID << endl;

	}

	void sortiranje_korisnika_po_imenu(Korisnik* k, int brojac) {

		for (int i = 0; i < brojac - 1; i++) {

			for (int j = i + 1; j < brojac; j++) {

				if (k[i].ime > k[j].ime) {

					Korisnik temp;
					temp = k[i];
					k[i] = k[j];
					k[j] = temp;

				}
			}
		}
	}

	void sortiranje_korisnika_po_prezimenu(Korisnik* k, int brojac) {

		for (int i = 0; i < brojac - 1; i++) {

			for (int j = i + 1; j < brojac; j++) {

				if (k[i].prezime > k[j].prezime) {

					Korisnik temp;
					temp = k[i];
					k[i] = k[j];
					k[j] = temp;

				}
			}
		}
	}

	void sortiranje_korisnika_po_broju_godina_mladji_ka_starijima(Korisnik* k, int brojac) {

		for (int i = 0; i < brojac - 1; i++) {

			for (int j = i + 1; j < brojac; j++) {

				if (k[i].godine > k[j].godine) {

					Korisnik temp;
					temp = k[i];
					k[i] = k[j];
					k[j] = temp;

				}
			}
		}
	}

	void sortiranje_korisnika_po_broju_godina_stariji_ka_mladjima(Korisnik* k, int brojac) {

		for (int i = 0; i < brojac - 1; i++) {

			for (int j = i + 1; j < brojac; j++) {

				if (k[i].godine < k[j].godine) {

					Korisnik temp;
					temp = k[i];
					k[i] = k[j];
					k[j] = temp;

				}
			}
		}
	}

	void sortiranje_korisnika_po_id_veci_ka_manjem(Korisnik* k, int brojac) {

		for (int i = 0; i < brojac - 1; i++) {

			for (int j = i + 1; j < brojac; j++) {

				if (k[i].ID < k[j].ID) {

					Korisnik temp;
					temp = k[i];
					k[i] = k[j];
					k[j] = temp;

				}
			}
		}
	}

	void sortiranje_korisnika_po_id_manji_ka_vecem(Korisnik* k, int brojac) {

		for (int i = 0; i < brojac - 1; i++) {

			for (int j = i + 1; j < brojac; j++) {

				if (k[i].ID > k[j].ID) {

					Korisnik temp;
					temp = k[i];
					k[i] = k[j];
					k[j] = temp;

				}
			}
		}
	}

};

struct Knjiga {

	string naziv;
	string ime_autora;
	string prezime_autora;
	int godina_izdavanja;
	string izdavacka_kuca;
	int broj_stranica;
	int na_stanju;
	Zanr zanr_knjige;
	Stil_pisanja stil;

	Knjiga() : naziv(""), ime_autora(""), prezime_autora(""), godina_izdavanja(0), izdavacka_kuca(""), broj_stranica(0), na_stanju(0), zanr_knjige(Zanr(1)), stil(Stil_pisanja(1)) {}

	Knjiga unosKnjige() {

		Knjiga k;

		cin.ignore();

		cout << "\t\t\t\t    Naziv knjige: ";			
		
		getline(cin, k.naziv);

		cout << endl;

		cout << "\t\t\t\t    Ime autora: ";				
		
		getline(cin, k.ime_autora);

		cout << endl;

		cout << "\t\t\t\t    Prezime autora: ";			
		
		getline(cin, k.prezime_autora);

		cout << endl;

		cout << "\t\t\t\t    Izdavacka kuca: ";			
		
		getline(cin, k.izdavacka_kuca);

		cout << endl;

		cout << "\t\t\t\t    Godina izdavanja: ";		
		
		cin >> k.godina_izdavanja;			
		
		while (k.godina_izdavanja < 1) {

			if (cin.fail()) {

				cin.clear();
				cin.ignore();

				cout << "\t\t\t\t    Pogresan unos...\n ";
				cout << "\t\t\t\t    Unijeli ste znak, a unos je u obliku broja.\n";
				cout << "\n\t\t\t\t    Molimo ponovo unesite godinu izdavanja knjige: ";

				cin.get();
			}

			else {

				cout << "\t\t\t\t    Pogresan unos...\n ";
				cout << "\n\t\t\t\t    Molimo ponovo unesite godinu izdavanja knjige: ";

			}

			cin >> k.godina_izdavanja;

		}

		cin.ignore();

		cout << endl;

		cout << "\t\t\t\t    Broj stranica: ";			
		
		cin >> k.broj_stranica;

		while (k.broj_stranica < 1) {

			if (cin.fail()) {

				cin.clear();
				cin.ignore();

				cout << "\t\t\t\t    Pogresan unos...\n ";
				cout << "\t\t\t\t    Unijeli ste znak, a unos je u obliku broja.\n";
				cout << "\n\t\t\t\t    Molimo ponovo unesite broj stranica: ";

				cin.get();
			}

			else {

				cout << "\t\t\t\t    Pogresan unos...\n ";
				cout << "\n\t\t\t\t    Molimo ponovo unesite broj stranica: ";

			}

			cin >> k.broj_stranica;

		}
		
		cin.ignore();

		cout << endl;
		cout << endl;

		cout << "\t\t\t\t     ----Lista zanrova----\n";
		cout << "\t\t\t\t    | 1 - Drama           |\n";
		cout << "\t\t\t\t    | 2 - Djecije         |\n";
		cout << "\t\t\t\t    | 3 - Kriminalisticki |\n";
		cout << "\t\t\t\t    | 4 - Triler          |\n";
		cout << "\t\t\t\t    | 5 - Historijski     |\n";

		cout << "\n\t\t\t\t    Odabir zanra: ";
		int odabir_zanra;
		cin >> odabir_zanra;
		

		while (odabir_zanra < 1 || odabir_zanra > 5) {

			if (cin.fail()) {

				cin.clear();
				cin.ignore();

				cout << "\t\t\t\t    Pogresan unos...\n ";
				cout << "\t\t\t\t    Unijeli ste znak, a unos je u obliku broja.\n";
				cout << "\n\t\t\t\t    Molimo ponovo unesite redni broj zanra: ";

				cin.get();
			}

			else {

				cout << "\t\t\t\t    Pogresan unos...\n ";
				cout << "\t\t\t\t    Vremenski period clanstva je u rasponu od 1 do 5!\n";
				cout << "\n\t\t\t\t    Molimo ponovo unesite redni broj zanra: ";

			}

			cin >> odabir_zanra;

		}

		k.zanr_knjige = (Zanr)odabir_zanra;

		cout << endl;
		cout << endl;

		cout << "\t\t\t\t     ----Lista stilova----\n";
		cout << "\t\t\t\t    | 1 - Roman           |\n";
		cout << "\t\t\t\t    | 2 - Pripovijetka    |\n";
		cout << "\t\t\t\t    | 3 - Poezija         |\n";
		cout << "\t\t\t\t    | 4 - Bajka           |\n";

		cout << "\n\t\t\t\t    Odabir stila pisanja: ";
		int odabir_stila;
		cin >> odabir_stila;

		while (odabir_stila < 1 || odabir_stila > 4) {

			if (cin.fail()) {

				cin.clear();
				cin.ignore();

				cout << "\t\t\t\t    Pogresan unos...\n ";
				cout << "\t\t\t\t    Unijeli ste znak, a unos je u obliku broja.\n";
				cout << "\n\t\t\t\t    Molimo ponovo unesite redni broj stila pisanja: ";

				cin.get();
			}

			else {

				cout << "\t\t\t\t    Pogresan unos...\n ";
				cout << "\t\t\t\t    Vremenski period clanstva je u rasponu od 1 do 4!\n";
				cout << "\n\t\t\t\t    Molimo ponovo unesite redni broj stila pisanja: ";

			}

			cin >> odabir_stila;

		}

		k.stil = (Stil_pisanja)odabir_stila;

		cout << endl;

		cout << "\t\t\t\t    Kolicina na stanju: ";		
		
		cin >> k.na_stanju;					
		
		while (k.na_stanju < 1) {

			if (cin.fail()) {

				cin.clear();
				cin.ignore();

				cout << "\t\t\t\t    Pogresan unos...\n ";
				cout << "\t\t\t\t    Unijeli ste znak, a unos je u obliku broja.\n";
				cout << "\n\t\t\t\t    Molimo ponovo unesite broj knjiga na stanju: ";

				cin.get();
			}

			else {

				cout << "\t\t\t\t    Pogresan unos...\n ";
				cout << "\n\t\t\t\t    Molimo ponovo unesite broj knjiga na stanju: ";

			}

			cin >> k.na_stanju;

		}

		cin.ignore();

		cout << endl;

		return k;

		cout << "\n\n\n\t\t\t\t\t\t\t Pritisnite ENTER\n\t\t\t\t\t   za povrataka u glavni izbornik";

		system("PAUSE");
		system("CLS");
	}

	void lista_knjiga(Knjiga knjige[], int brojac) {

		if (brojac < 1) {

			system("CLS");

			cout << endl;

			cout << "\t\t\t\t ________________________________ \n";
			cout << "\t\t\t\t|                                |\n";
			cout << "\t\t\t\t| U SISTEMU NEMA UNESENIH KNJIGA |\n";
			cout << "\t\t\t\t|________________________________|";

			cout << endl;

		}

		else {

			for (int i = 0; i < brojac; i++) {

				cout << endl;

				cout << "\n\t\t\t\t " << i + 1 << ". KNJIGA\n\n";

				cout << "\t\t\t\tNaziv knjige: " << knjige[i].naziv << endl;

				cout << "\t\t\t\tIme autora knjige: " << knjige[i].ime_autora << endl;

				cout << "\t\t\t\tPrezime autora knjige: " << knjige[i].prezime_autora << endl;

				cout << "\t\t\t\tIzdavacka kuca: " << knjige[i].izdavacka_kuca << endl;

				cout << "\t\t\t\tGodina izdavanja knjige: " << knjige[i].godina_izdavanja << endl;

				cout << "\t\t\t\tBroj stranica knjige: " << knjige[i].broj_stranica << endl;

				cout << "\t\t\t\tZanr: ";

				if (knjige[i].zanr_knjige == 1) {

					cout << "Drama";

				}

				if (knjige[i].zanr_knjige == 2) {

					cout << "Djecije";

				}

				if (knjige[i].zanr_knjige == 3) {

					cout << "Kriminalisticki";

				}

				if (knjige[i].zanr_knjige == 4) {

					cout << "Triler";

				}

				if (knjige[i].zanr_knjige == 5) {

					cout << "Historijski";

				}

				cout << endl;

				cout << "\t\t\t\tStil pisanja: ";

				if (knjige[i].stil == 1) {

					cout << "Roman";

				}

				if (knjige[i].stil == 2) {

					cout << "Pripovijetka";

				}

				if (knjige[i].stil == 3) {

					cout << "Poezija";

				}

				if (knjige[i].stil == 4) {

					cout << "Bajka";

				}
				cout << endl;

				cout << "\t\t\t\tNa stanju se nalaze/nalazi " << knjige[i].na_stanju << " knjige/knjiga pod ovim nazivom!" << endl;

			}

		}

	}

	void ispis(Knjiga* knjige) {

		cout << endl;

		cout << "\t\t\t\tNaziv knjige: " << knjige->naziv << endl;

		cout << "\t\t\t\tIme autora knjige: " << knjige->ime_autora << endl;

		cout << "\t\t\t\tPrezime autora knjige: " << knjige->prezime_autora << endl;

		cout << "\t\t\t\tIzdavacka kuca: " << knjige->izdavacka_kuca << endl;

		cout << "\t\t\t\tGodina izdavanja knjige: " << knjige->godina_izdavanja << endl;

		cout << "\t\t\t\tBroj stranica knjige: " << knjige->broj_stranica << endl;


		cout << "\t\t\t\tZanr: ";

		if (knjige->zanr_knjige == 1) {
			cout << "Drama";
		}
		if (knjige->zanr_knjige == 2) {
			cout << "Fantastika";
		}
		if (knjige->zanr_knjige == 3) {
			cout << "Kriminalisticki";
		}
		if (knjige->zanr_knjige == 4) {
			cout << "Triler";
		}
		if (knjige->zanr_knjige == 5) {
			cout << "Historijski";
		}
		cout << endl;

		cout << "\t\t\t\tStil pisanja: ";

		if (knjige->stil == 1) {
			cout << "Roman";
		}
		if (knjige->stil == 2) {
			cout << "Pripovijetka";
		}
		if (knjige->stil == 3) {
			cout << "Poezija";
		}
		if (knjige->stil == 4) {
			cout << "Bajka";
		}
		cout << endl;

		cout << "\t\t\t\tNa stanju se nalaze/nalazi " << knjige->na_stanju << " knjige/knjiga pod ovim nazivom!";

	}

	void pretraga_knjige_po_nazivu(Knjiga knjige[], int brojac, string naziv) {

		system("CLS");

		Knjiga* pretraga_po_nazivu = new Knjiga[brojac];
		int brojac_po_nazivu = 0;

		for (int i = 0; i < brojac; i++) {

			if (knjige[i].naziv == naziv) {

				pretraga_po_nazivu[brojac_po_nazivu++] = knjige[i];

			}
		}

		cout << endl;
		cout << endl;

		cout << "\n\t\t    Spisak knjiga sa nazivom " << naziv << " sacuvanih u sistemu: \n\n";

		knjige->lista_knjiga(pretraga_po_nazivu, brojac_po_nazivu);

		cout << "\n\n\n\t\t\t\t\t\t\t Pritisnite ENTER\n\t\t\t\t\t   za povrataka u glavni izbornik";

		system("PAUSE>null");
		system("CLS");

		delete[]pretraga_po_nazivu;

	}

	void pretraga_knjige_po_imenu_autora(Knjiga knjige[], int brojac, string naziv) {

		system("CLS");

		Knjiga* pretraga_po_imenu_autora = new Knjiga[brojac];
		int brojac_po_imenu_autora = 0;

		for (int i = 0; i < brojac; i++) {

			if (knjige[i].ime_autora == naziv) {

				pretraga_po_imenu_autora[brojac_po_imenu_autora++] = knjige[i];

			}
		}

		cout << endl;
		cout << endl;

		cout << "\n\t\t    Spisak knjiga autora sa imenom " << naziv << " sacuvanih u sistemu: \n\n";

		knjige->lista_knjiga(pretraga_po_imenu_autora, brojac_po_imenu_autora);

		cout << "\n\n\n\t\t\t\t\t\t\t Pritisnite ENTER\n\t\t\t\t\t   za povrataka u glavni izbornik";

		system("PAUSE>null");
		system("CLS");

		delete[]pretraga_po_imenu_autora;

	}

	void pretraga_knjige_po_prezimenu_autora(Knjiga knjige[], int brojac, string naziv) {

		system("CLS");

		Knjiga* pretraga_po_prezimenu_autora = new Knjiga[brojac];
		int brojac_po_prezimenu_autora = 0;

		for (int i = 0; i < brojac; i++) {

			if (knjige[i].prezime_autora == naziv) {

				pretraga_po_prezimenu_autora[brojac_po_prezimenu_autora++] = knjige[i];

			}
		}

		cout << endl;
		cout << endl;

		cout << "\n\t\t    Spisak knjiga autora sa prezimenom " << naziv << " sacuvanih u sistemu: \n\n";

		knjige->lista_knjiga(pretraga_po_prezimenu_autora, brojac_po_prezimenu_autora);

		cout << "\n\n\n\t\t\t\t\t\t\t Pritisnite ENTER\n\t\t\t\t\t   za povrataka u glavni izbornik";

		system("PAUSE>null");
		system("CLS");

		delete[]pretraga_po_prezimenu_autora;

	}

	void pretraga_knjige_po_izdavackoj_kuci(Knjiga knjige[], int brojac, string naziv) {

		system("CLS");

		Knjiga* pretraga_po_izdavackoj_kuci = new Knjiga[brojac];
		int brojac_po_izdavackoj_kuci = 0;

		for (int i = 0; i < brojac; i++) {

			if (knjige[i].izdavacka_kuca == naziv) {

				pretraga_po_izdavackoj_kuci[brojac_po_izdavackoj_kuci++] = knjige[i];

			}
		}

		cout << endl;
		cout << endl;

		cout << "\n\t\t    Spisak knjiga izdavacke kuce " << naziv << " sacuvanih u sistemu: \n\n";

		knjige->lista_knjiga(pretraga_po_izdavackoj_kuci, brojac_po_izdavackoj_kuci);

		cout << "\n\n\n\t\t\t\t\t\t\t Pritisnite ENTER\n\t\t\t\t\t   za povrataka u glavni izbornik";

		system("PAUSE>null");
		system("CLS");

		delete[]pretraga_po_izdavackoj_kuci;

	}

	void pretraga_knjige_po_godini_izdavanja(Knjiga knjige[], int brojac, int godina) {

		system("CLS");

		Knjiga* pretraga_po_godini_izdavanja = new Knjiga[brojac];
		int brojac_po_godini_izdavanja = 0;

		for (int i = 0; i < brojac; i++) {

			if (knjige[i].godina_izdavanja == godina) {

				pretraga_po_godini_izdavanja[brojac_po_godini_izdavanja++] = knjige[i];

			}
		}

		cout << endl;
		cout << endl;

		cout << "\n\t\t    Spisak knjiga koje su izdate " << godina << " . godine sacuvanih u sistemu: \n\n";

		knjige->lista_knjiga(pretraga_po_godini_izdavanja, brojac_po_godini_izdavanja);

		cout << "\n\n\n\t\t\t\t\t\t\t Pritisnite ENTER\n\t\t\t\t\t   za povrataka u glavni izbornik";

		system("PAUSE>null");
		system("CLS");

		delete[]pretraga_po_godini_izdavanja;

	}

	void sortiranje_po_naslovu(Knjiga* k, int brojac) {

		for (int i = 0; i < brojac - 1; i++) {

			for (int j = i + 1; j < brojac; j++) {

				if (k[i].naziv > k[j].naziv) {

					Knjiga temp;
					temp = k[i];
					k[i] = k[j];
					k[j] = temp;

				}
			}
		}

	}

	void sortiranje_po_imenu_autora(Knjiga* k, int brojac) {

		for (int i = 0; i < brojac - 1; i++) {

			for (int j = i + 1; j < brojac; j++) {

				if (k[i].ime_autora > k[j].ime_autora) {

					Knjiga temp;
					temp = k[i];
					k[i] = k[j];
					k[j] = temp;

				}
			}
		}
	}

	void sortiranje_po_prezimenu_autora(Knjiga* k, int brojac) {

		for (int i = 0; i < brojac - 1; i++) {

			for (int j = i + 1; j < brojac; j++) {

				if (k[i].prezime_autora > k[j].prezime_autora) {

					Knjiga temp;
					temp = k[i];
					k[i] = k[j];
					k[j] = temp;

				}
			}
		}
	}

	void sortiranje_po_godini_izdanja_novija_ka_starijim(Knjiga* k, int brojac) {

		for (int i = 0; i < brojac - 1; i++) {

			for (int j = i + 1; j < brojac; j++) {

				if (k[i].godina_izdavanja < k[j].godina_izdavanja) {

					Knjiga temp;
					temp = k[i];
					k[i] = k[j];
					k[j] = temp;

				}
			}
		}
	}

	void sortiranje_po_godini_izdanja_starija_ka_novijim(Knjiga* k, int brojac) {

		for (int i = 0; i < brojac - 1; i++) {

			for (int j = i + 1; j < brojac; j++) {

				if (k[i].godina_izdavanja > k[j].godina_izdavanja) {

					Knjiga temp;
					temp = k[i];
					k[i] = k[j];
					k[j] = temp;

				}
			}
		}
	}

	void sortiranje_po_broju_stranica_vise_ka_manje(Knjiga* k, int brojac) {

		for (int i = 0; i < brojac - 1; i++) {

			for (int j = i + 1; j < brojac; j++) {

				if (k[i].broj_stranica < k[j].broj_stranica) {

					Knjiga temp;
					temp = k[i];
					k[i] = k[j];
					k[j] = temp;

				}
			}
		}
	}

	void sortiranje_po_broju_stranica_manje_ka_vise(Knjiga* k, int brojac) {

		for (int i = 0; i < brojac - 1; i++) {

			for (int j = i + 1; j < brojac; j++) {

				if (k[i].broj_stranica > k[j].broj_stranica) {

					Knjiga temp;
					temp = k[i];
					k[i] = k[j];
					k[j] = temp;

				}
			}
		}
	}

	void sortiranje_po_broju_knjiga_na_stanju_vise_ka_manje(Knjiga* k, int brojac) {

		for (int i = 0; i < brojac - 1; i++) {

			for (int j = i + 1; j < brojac; j++) {

				if (k[i].na_stanju < k[j].na_stanju) {

					Knjiga temp;
					temp = k[i];
					k[i] = k[j];
					k[j] = temp;

				}
			}
		}
	}

	void sortiranje_po_broju_knjiga_nastanju_manje_ka_vise(Knjiga* k, int brojac) {

		for (int i = 0; i < brojac - 1; i++) {

			for (int j = i + 1; j < brojac; j++) {

				if (k[i].na_stanju > k[j].na_stanju) {

					Knjiga temp;
					temp = k[i];
					k[i] = k[j];
					k[j] = temp;

				}
			}
		}
	}

};

struct Login {

	string username_uposlenika;
	string sifra_uposlenika;
	bool login_uspjesan = false;

	void login_uposlenika() {

		Login l;

		cout << endl;

		cout << endl;
		cout << endl;

		cout << "\t\t\t         ____________________ " << endl;
		cout << "\t\t\t        |                    |" << endl;
		cout << "\t\t\t        |  LOGIN UPOSLENIKA  |" << endl;
		cout << "\t\t\t        |____________________|" << endl;

		cout << endl;
		cout << endl;

	}

};

//________________________________________________________________________________________________

							//RAD SA DATOTEKAMA

//ISPIS UCLANJENIH OSOBA U BIBLIOTEKU

void clanska_karta(Korisnik korisnik[], int brojac_korisnika) {

	ofstream clanskaKarta("clanska_karta.txt");

	for (int i = 0; i < brojac_korisnika; i++) {

		clanskaKarta << "__________________________________________________________________________________________________________________________\n\n";
		clanskaKarta << endl;

		clanskaKarta << "\t\t\t\t\t\tIme: " << korisnik[i].ime << endl;
		clanskaKarta << "\t\t\t\t\t\tPrezime: " << korisnik[i].prezime << endl;
		clanskaKarta << "\t\t\t\t\t\tID: " << korisnik[i].ID << endl;
		clanskaKarta << "\t\t\t\t\t\tDatum uclanjenja: " << korisnik[i].datum_uclanjenja.dan << "/" << korisnik[i].datum_uclanjenja.mjesec << "/" << korisnik[i].datum_uclanjenja.godina << endl;

		clanskaKarta << endl;

	}

	clanskaKarta << "__________________________________________________________________________________________________________________________\n\n";

	clanskaKarta.close();

}

//ISPIS KNJIGA UNESENIH U SISTEM

void knjige_u_sistemu(Knjiga knjige[], int brojac) {

	ofstream dostupne_knjige("spisak_knjiga_u_sistemu.txt");

	for (int i = 0; i < brojac; i++) {

		dostupne_knjige << "__________________________________________________________________________________________________________________________\n\n";
		dostupne_knjige << endl;

		dostupne_knjige << "\t\t\t\t\t\tNaslov: " << knjige[i].naziv << endl;
		dostupne_knjige << "\t\t\t\t\t\tAutor: " << knjige[i].ime_autora << " " << knjige[i].prezime_autora << endl;
		dostupne_knjige << "\t\t\t\t\t\tIzdavacka kuca: " << knjige[i].izdavacka_kuca << endl;
		dostupne_knjige << "\t\t\t\t\t\tGodina izdavanja: " << knjige[i].godina_izdavanja << endl;
		dostupne_knjige << "\t\t\t\t\t\tNa stanju: " << knjige[i].na_stanju << " knjiga pod ovim naslovom. " << endl;

		dostupne_knjige << endl;

	}

	dostupne_knjige << "__________________________________________________________________________________________________________________________\n\n";

	dostupne_knjige.close();

}

//________________________________________________________________________________________________

							//PODJELA PO ZANROVIMA

void pretraga_knjiga_po_zanru_drama(Knjiga* k, int brojac) {

	Knjiga* drama = new Knjiga[brojac];
	int brojac_drama = 0;

	for (int i = 0; i < brojac; i++) {

		if (k[i].zanr_knjige == (Zanr)1) {

			drama[brojac_drama++] = k[i];

		}

	}

	system("CLS");

	cout << endl;
	cout << endl;

	cout << "\t\t\t         _________" << endl;
	cout << "\t\t\t        |         |" << endl;
	cout << "\t\t\t        |  DRAMA  |" << endl;
	cout << "\t\t\t        |_________|" << endl;

	cout << endl;
	cout << endl;

	k->lista_knjiga(drama, brojac_drama);

	cout << "\n\n\n\t\t\t\t\t\t\t Pritisnite ENTER\n\t\t\t\t\t   za povrataka u glavni izbornik";

	system("PAUSE>null");
	system("CLS");

	delete[]drama;
}

void pretraga_knjiga_po_zanru_djecije(Knjiga* k, int brojac) {

	Knjiga* djecije = new Knjiga[brojac];
	int brojac_djecije = 0;

	for (int i = 0; i < brojac; i++) {

		if (k[i].zanr_knjige == (Zanr)2) {

			djecije[brojac_djecije++] = k[i];

		}

	}

	system("CLS");

	cout << endl;
	cout << endl;

	cout << "\t\t\t         ___________" << endl;
	cout << "\t\t\t        |           |" << endl;
	cout << "\t\t\t        |  DJECIJE  |" << endl;
	cout << "\t\t\t        |___________|" << endl;

	cout << endl;
	cout << endl;

	k->lista_knjiga(djecije, brojac_djecije);

	cout << "\n\n\n\t\t\t\t\t\t\t Pritisnite ENTER\n\t\t\t\t\t   za povrataka u glavni izbornik";

	system("PAUSE>null");
	system("CLS");

	delete[]djecije;

}

void pretraga_knjiga_po_zanru_kriminalisticki(Knjiga* k, int brojac) {

	Knjiga* kriminalisticki = new Knjiga[brojac];
	int brojac_kriminalisticki = 0;

	for (int i = 0; i < brojac; i++) {

		if (k[i].zanr_knjige == (Zanr)3) {

			kriminalisticki[brojac_kriminalisticki++] = k[i];

		}

	}

	system("CLS");

	cout << endl;
	cout << endl;

	cout << "\t\t\t         ___________________" << endl;
	cout << "\t\t\t        |                   |" << endl;
	cout << "\t\t\t        |  KRIMINALISTICKI  |" << endl;
	cout << "\t\t\t        |___________________|" << endl;

	cout << endl;
	cout << endl;

	k->lista_knjiga(kriminalisticki, brojac_kriminalisticki);

	cout << "\n\n\n\t\t\t\t\t\t\t Pritisnite ENTER\n\t\t\t\t\t   za povrataka u glavni izbornik";

	system("PAUSE>null");
	system("CLS");

	delete[]kriminalisticki;

}

void pretraga_knjiga_po_zanru_triler(Knjiga* k, int brojac) {

	Knjiga* triler = new Knjiga[brojac];
	int brojac_triler = 0;

	for (int i = 0; i < brojac; i++) {

		if (k[i].zanr_knjige == (Zanr)4) {

			triler[brojac_triler++] = k[i];

		}

	}

	system("CLS");

	cout << endl;
	cout << endl;

	cout << "\t\t\t         __________" << endl;
	cout << "\t\t\t        |          |" << endl;
	cout << "\t\t\t        |  TRILER  |" << endl;
	cout << "\t\t\t        |__________|" << endl;

	cout << endl;
	cout << endl;

	k->lista_knjiga(triler, brojac_triler);

	cout << "\n\n\n\t\t\t\t\t\t\t Pritisnite ENTER\n\t\t\t\t\t   za povrataka u glavni izbornik";

	system("PAUSE>null");
	system("CLS");

	delete[]triler;

}

void pretraga_knjiga_po_zanru_historijski(Knjiga* k, int brojac) {

	Knjiga* historijski = new Knjiga[brojac];
	int brojac_historijski = 0;

	for (int i = 0; i < brojac; i++) {

		if (k[i].zanr_knjige == (Zanr)5) {

			historijski[brojac_historijski++] = k[i];

		}

	}

	system("CLS");

	cout << endl;
	cout << endl;

	cout << "\t\t\t         _______________" << endl;
	cout << "\t\t\t        |               |" << endl;
	cout << "\t\t\t        |  HISTORIJSKI  |" << endl;
	cout << "\t\t\t        |_______________|" << endl;

	cout << endl;
	cout << endl;

	k->lista_knjiga(historijski, brojac_historijski);

	cout << "\n\n\n\t\t\t\t\t\t\t Pritisnite ENTER\n\t\t\t\t\t   za povrataka u glavni izbornik";

	system("PAUSE>null");
	system("CLS");

	delete[]historijski;
}

//________________________________________________________________________________________________

							//PODJELA PO STILU PISANJA

void pretraga_knjiga_po_stilu_roman(Knjiga* k, int brojac) {

	Knjiga* roman = new Knjiga[brojac];
	int brojac_roman = 0;

	for (int i = 0; i < brojac; i++) {

		if (k[i].stil == (Stil_pisanja)1) {

			roman[brojac_roman++] = k[i];

		}

	}

	system("CLS");

	cout << endl;
	cout << endl;

	cout << "\t\t\t         _________" << endl;
	cout << "\t\t\t        |         |" << endl;
	cout << "\t\t\t        |  ROMAN  |" << endl;
	cout << "\t\t\t        |_________|" << endl;

	cout << endl;
	cout << endl;

	k->lista_knjiga(roman, brojac_roman);

	cout << "\n\n\n\t\t\t\t\t\t\t Pritisnite ENTER\n\t\t\t\t\t   za povrataka u glavni izbornik";

	system("PAUSE>null");
	system("CLS");

	delete[]roman;

}

void pretraga_knjiga_po_stilu_pripovijetka(Knjiga* k, int brojac) {

	Knjiga* pripovijetka = new Knjiga[brojac];
	int brojac_pripovijetka = 0;

	for (int i = 0; i < brojac; i++) {

		if (k[i].stil == (Stil_pisanja)2) {

			pripovijetka[brojac_pripovijetka++] = k[i];

		}

	}

	system("CLS");

	cout << endl;
	cout << endl;

	cout << "\t\t\t         ________________" << endl;
	cout << "\t\t\t        |                |" << endl;
	cout << "\t\t\t        |  PRIPOVIJETKA  |" << endl;
	cout << "\t\t\t        |________________|" << endl;

	cout << endl;
	cout << endl;

	k->lista_knjiga(pripovijetka, brojac_pripovijetka);

	cout << "\n\n\n\t\t\t\t\t\t\t Pritisnite ENTER\n\t\t\t\t\t   za povrataka u glavni izbornik";

	system("PAUSE>null");
	system("CLS");

	delete[]pripovijetka;

}

void pretraga_knjiga_po_stilu_poezija(Knjiga* k, int brojac) {

	Knjiga* poezija = new Knjiga[brojac];
	int brojac_poezija = 0;

	for (int i = 0; i < brojac; i++) {

		if (k[i].stil == (Stil_pisanja)3) {

			poezija[brojac_poezija++] = k[i];

		}

	}

	system("CLS");

	cout << endl;
	cout << endl;

	cout << "\t\t\t         ___________" << endl;
	cout << "\t\t\t        |           |" << endl;
	cout << "\t\t\t        |  POEZIJA  |" << endl;
	cout << "\t\t\t        |___________|" << endl;

	cout << endl;
	cout << endl;

	k->lista_knjiga(poezija, brojac_poezija);

	cout << "\n\n\n\t\t\t\t\t\t\t Pritisnite ENTER\n\t\t\t\t\t   za povrataka u glavni izbornik";

	system("PAUSE>null");
	system("CLS");

	delete[]poezija
		;
}

void pretraga_knjiga_po_stilu_bajka(Knjiga* k, int brojac) {

	Knjiga* bajka = new Knjiga[brojac];
	int brojac_bajka = 0;

	for (int i = 0; i < brojac; i++) {

		if (k[i].stil == (Stil_pisanja)4) {

			bajka[brojac_bajka++] = k[i];

		}

	}

	system("CLS");

	cout << endl;
	cout << endl;

	cout << "\t\t\t         _________" << endl;
	cout << "\t\t\t        |         |" << endl;
	cout << "\t\t\t        |  BAJKA  |" << endl;
	cout << "\t\t\t        |_________|" << endl;

	cout << endl;
	cout << endl;

	k->lista_knjiga(bajka, brojac_bajka);

	cout << "\n\n\n\t\t\t\t\t\t\t Pritisnite ENTER\n\t\t\t\t\t   za povrataka u glavni izbornik";

	system("PAUSE>null");
	system("CLS");

	delete[]bajka;

}

//________________________________________________________________________________________________

void pretraga_zenskih_osoba(Korisnik* k, int brojac) {

	Korisnik* zenske_osobe = new Korisnik[brojac];
	int brojac_zena = 0;

	for (int i = 0; i < brojac; i++) {

		if (k[i].spol == "Z" || k[i].spol == "z") {

			zenske_osobe[brojac_zena++] = k[i];

		}

	}

	system("CLS");

	cout << endl;
	cout << endl;

	cout << "\t\t\t         ____________________________" << endl;
	cout << "\t\t\t        |                            |" << endl;
	cout << "\t\t\t        |  PRIPADNICE LJEPSEG SPOLA  |" << endl;
	cout << "\t\t\t        |____________________________|" << endl;

	cout << endl;
	cout << endl;

	k->lista_korisnika(zenske_osobe, brojac_zena);

	cout << "\n\n\n\t\t\t\t\t\t\t Pritisnite ENTER\n\t\t\t\t\t   za povrataka u glavni izbornik";

	system("PAUSE>null");
	system("CLS");

	delete[]zenske_osobe;
}

void pretraga_muskih_osoba(Korisnik* k, int brojac) {

	Korisnik* muske_osobe = new Korisnik[brojac];
	int brojac_muskaraca = 0;

	for (int i = 0; i < brojac; i++) {

		if (k[i].spol == "M" || k[i].spol == "m") {

			muske_osobe[brojac_muskaraca++] = k[i];

		}

	}

	system("CLS");

	cout << endl;
	cout << endl;

	cout << "\t\t\t         __________________________" << endl;
	cout << "\t\t\t        |                          |" << endl;
	cout << "\t\t\t        |  PRIPADNICI JACEG SPOLA  |" << endl;
	cout << "\t\t\t        |__________________________|" << endl;

	cout << endl;
	cout << endl;

	k->lista_korisnika(muske_osobe, brojac_muskaraca);

	cout << "\n\n\n\t\t\t\t\t\t\t Pritisnite ENTER\n\t\t\t\t\t   za povrataka u glavni izbornik";

	system("PAUSE>null");
	system("CLS");

	delete[]muske_osobe;

}

int main() {

	setlocale(LC_ALL, "");

	Knjiga k;
	Korisnik ko;
	Login l;

	pocetni_displej();

	Knjiga* knjige = new Knjiga[100];
	Korisnik* korisnici = new Korisnik[100];

	int RB_opcije;
	int brojac = 0;
	int brojac_korisnika = 0;

	cout << endl;

	cout << "\t\t\t  _________________________\n";
	cout << "\t\t\t |                         |\n";
	cout << "\t\t\t |  ZAPOSLENIK / KORISNIK  |\n";
	cout << "\t\t\t |_________________________|\n";

	cout << "\n\t\t\t        1 - Uposlenik ";
	cout << "\n\t\t\t        2 - Korisnik ";

	cout << "\n\n\t\t\t Unesite redni broj opcije: ";
	int login;
	cin >> login;
	cin.ignore();

	if (login == 1) {

	za_uposlene:

		system("CLS");

		bool login_uspjesan = false;

		do {

			l.login_uposlenika();

			cout << "\t\t\t    Unesite korisnicko ime: ";
			cin >> l.username_uposlenika;

			cout << "\n\t\t\t        Unesite sifru: ";
			cin >> l.sifra_uposlenika;

			if (l.username_uposlenika == "Osoblje" && l.sifra_uposlenika == "Osoblje") {

				cout << "\n\n\n\n\t\t\t     ---Uspjesno ste prijavljeni---";

				l.login_uspjesan == true;

				cout << "\n\n\n\n\t\t\t\t\t\t\t Pritisnite ENTER\n\t\t\t\t\t   za nastavak";

				system("PAUSE");

				break;

			}

			else {

				cout << "\n\n\n\t\t\t   Pogresno korisnicko ime ili lozinka.\n";
				cout << "\t\t\    Molimo pokusajte ponovo ili promijenite nacin rada...\n";

				cout << "\n\t\t\t        1 - Nacin rada za uposlene ";
				cout << "\n\t\t\t        2 - Nacin rada za korisnike ";
				cout << "\n\t\t\t        10 - Izlaz ";
				cout << "\n\n\t\t\t      Unesite redni broj zeljene opcije: ";

				int redni_broj_opcije;
				cin >> redni_broj_opcije;
				cin.ignore();

				if (redni_broj_opcije == 1) {

					goto za_uposlene;

				}

				if (redni_broj_opcije == 2) {

					goto za_korisnike;

				}

				else {
					EXIT_SUCCESS;
				}

			}

		} while (!l.login_uspjesan);

		do {

			system("CLS");

			glavni_meni();

			cout << endl;

			cout << "\t\t\t  _____________________________________\n";
			cout << "\t\t\t |                                     |\n";
			cout << "\t\t\t |  UNESITE REDNI BROJ ZELJENE OPCIJE  |\n";
			cout << "\t\t\t |_____________________________________|\n";

			cout << "\n\n\t\t\t    Birate opciju pod rednim brojem: ";

			cin >> RB_opcije;

			system("CLS");

			cout << endl;
			cout << endl;

			//UNOS NOVE KNJIGE U SISTEM
			if (RB_opcije == 1) {

				cout << "\t\t\t         ______________________________" << endl;
				cout << "\t\t\t        |                              |" << endl;
				cout << "\t\t\t        |  UNOSENJE PODATAKA O KNJIZI  |" << endl;
				cout << "\t\t\t        |______________________________|" << endl;

				cout << endl;
				cout << endl;

				knjige[brojac++] = k.unosKnjige();

				cout << "\n\n\t\t\t             ---USPJESNO POHRANJENI PODACI---\n";


				//SPREMANJE U "spisak_knjiga_u_sistemu.txt"
				knjige_u_sistemu(knjige, brojac);

				cout << "\n\n\n\t\t\t\t\t\t\t Pritisnite ENTER\n\t\t\t\t\t   za povrataka u glavni izbornik";

				system("PAUSE>null");
				system("CLS");
			}

			//LISTA KNJIGA KOJE SE NALAZE U SISTEMU
			if (RB_opcije == 2) {

				system("CLS");

				meni_za_pregled_knjiga();

				cout << endl;
				cout << endl;

				cout << "\t\t\t   _________________________________________________ \n ";
				cout << "\t\t\t  |                                                 |\n ";
				cout << "\t\t\t  |  UNESITE REDNI BROJ JEDNE OD METODE SORTIRANJA  |\n";
				cout << "\t\t\t  |_________________________________________________|\n ";

				cout << "\n\t\t\t\t  Birate metodu pod rednim brojem: ";
				int vas_odabir;
				cin >> vas_odabir;
				cin.ignore();

				if (vas_odabir == 1) {

					system("CLS");

					cout << "\t\t\t   ______________________________________\n ";
					cout << "\t\t\t  |                                      |\n ";
					cout << "\t\t\t  |  SORTIRANJE PREMA NASLOVU [ A - Z ]  |\n";
					cout << "\t\t\t  |______________________________________|\n ";


					k.sortiranje_po_naslovu(knjige, brojac);

					k.lista_knjiga(knjige, brojac);

					cout << "\n\n\n\t\t\t\t\t\t\t Pritisnite ENTER\n\t\t\t\t\t   za povrataka u glavni izbornik";

					system("PAUSE>null");
					system("CLS");

				}

				if (vas_odabir == 2) {

					system("CLS");

					cout << "\t\t\t   ________________________________\n ";
					cout << "\t\t\t  |                                |\n ";
					cout << "\t\t\t  |  PREMA IMENU AUTORA [ A - Z ]  |\n";
					cout << "\t\t\t  |________________________________|\n ";

					k.sortiranje_po_imenu_autora(knjige, brojac);

					k.lista_knjiga(knjige, brojac);

					cout << "\n\n\n\t\t\t\t\t\t\t Pritisnite ENTER\n\t\t\t\t\t   za povrataka u glavni izbornik";

					system("PAUSE>null");
					system("CLS");

				}

				if (vas_odabir == 3) {

					system("CLS");

					cout << "\t\t\t   ____________________________________\n ";
					cout << "\t\t\t  |                                    |\n ";
					cout << "\t\t\t  |  PREMA PREZIMENU AUTORA [ A - Z ]  |\n";
					cout << "\t\t\t  |____________________________________|\n ";

					k.sortiranje_po_prezimenu_autora(knjige, brojac);

					k.lista_knjiga(knjige, brojac);

					cout << "\n\n\n\t\t\t\t\t\t\t Pritisnite ENTER\n\t\t\t\t\t   za povrataka u glavni izbornik";

					system("PAUSE>null");
					system("CLS");

				}

				if (vas_odabir == 4) {

					system("CLS");

					cout << "\t\t\t   _________________________________________________________\n ";
					cout << "\t\t\t  |                                                         |\n ";
					cout << "\t\t\t  |  PREMA GODINI IZDAVANJA [ NOVIJA IZDANJA KA STARIJIM ]  |\n";
					cout << "\t\t\t  |_________________________________________________________|\n ";

					k.sortiranje_po_godini_izdanja_novija_ka_starijim(knjige, brojac);

					k.lista_knjiga(knjige, brojac);

					cout << "\n\n\n\t\t\t\t\t\t\t Pritisnite ENTER\n\t\t\t\t\t   za povrataka u glavni izbornik";

					system("PAUSE>null");
					system("CLS");

				}

				if (vas_odabir == 5) {

					system("CLS");

					cout << "\t\t\t   _________________________________________________________\n ";
					cout << "\t\t\t  |                                                         |\n ";
					cout << "\t\t\t  |  PREMA GODINI IZDAVANJA [ STARIJA IZDANJA KA NOVIJIM ]  |\n";
					cout << "\t\t\t  |_________________________________________________________|\n ";

					k.sortiranje_po_godini_izdanja_starija_ka_novijim(knjige, brojac);

					k.lista_knjiga(knjige, brojac);

					cout << "\n\n\n\t\t\t\t\t\t\t Pritisnite ENTER\n\t\t\t\t\t   za povrataka u glavni izbornik";

					system("PAUSE>null");
					system("CLS");

				}

				if (vas_odabir == 6) {

					system("CLS");

					cout << "\t\t\t   ________________________________________________________\n ";
					cout << "\t\t\t  |                                                        |\n ";
					cout << "\t\t\t  |  PREMA BROJU STRANICA [ VECI BROJ STRANICA KA MANJE ]  |\n";
					cout << "\t\t\t  |________________________________________________________|\n ";

					k.sortiranje_po_broju_stranica_vise_ka_manje(knjige, brojac);

					k.lista_knjiga(knjige, brojac);

					cout << "\n\n\n\t\t\t\t\t\t\t Pritisnite ENTER\n\t\t\t\t\t   za povrataka u glavni izbornik";

					system("PAUSE>null");
					system("CLS");

				}

				if (vas_odabir == 7) {

					system("CLS");

					cout << "\t\t\t   _________________________________________________________ \n ";
					cout << "\t\t\t  |                                                         |\n ";
					cout << "\t\t\t  |  PREMA BROJU STRANICA [ MANJI BROJ STRANICA KA VECEM ]  |\n";
					cout << "\t\t\t  |_________________________________________________________|\n ";

					k.sortiranje_po_broju_stranica_manje_ka_vise(knjige, brojac);

					k.lista_knjiga(knjige, brojac);

					cout << "\n\n\n\t\t\t\t\t\t\t Pritisnite ENTER\n\t\t\t\t\t   za povrataka u glavni izbornik";

					system("PAUSE>null");
					system("CLS");

				}

				if (vas_odabir == 8) {

					system("CLS");

					cout << "\t\t\t   _______________________________________________________________ \n ";
					cout << "\t\t\t  |                                                               |\n ";
					cout << "\t\t\t  |  PREMA BROJU KNJIGA NA STANJU[VECI BROJ NA STANJU KA MANJEM]  |\n";
					cout << "\t\t\t  |_______________________________________________________________|\n ";

					k.sortiranje_po_broju_knjiga_na_stanju_vise_ka_manje(knjige, brojac);

					k.lista_knjiga(knjige, brojac);

					cout << "\n\n\n\t\t\t\t\t\t\t Pritisnite ENTER\n\t\t\t\t\t   za povrataka u glavni izbornik";

					system("PAUSE>null");
					system("CLS");

				}

				if (vas_odabir == 9) {

					system("CLS");

					cout << "\t\t\t   __________________________________________________________________ \n ";
					cout << "\t\t\t  |                                                                  |\n ";
					cout << "\t\t\t  |  PREMA BROJU KNJIGA NA STANJU [ MANJI BROJ NA STANJU KA VECEM ]  |\n";
					cout << "\t\t\t  |__________________________________________________________________|\n ";

					k.sortiranje_po_broju_knjiga_nastanju_manje_ka_vise(knjige, brojac);

					k.lista_knjiga(knjige, brojac);

					cout << "\n\n\n\t\t\t\t\t\t\t Pritisnite ENTER\n\t\t\t\t\t   za povrataka u glavni izbornik";

					system("PAUSE>null");
					system("CLS");

				}

				if (vas_odabir == 10) {

					system("cls");

					meni_za_pretragu_zanrova();

					cout << endl;
					cout << endl;

					cout << "\t\t\t   ___________________________________________________ \n ";
					cout << "\t\t\t  |                                                   |\n ";
					cout << "\t\t\t  |  UNESITE REDNI BROJ JEDNOG OD PONUDJENIH ZANROVA  |\n";
					cout << "\t\t\t  |___________________________________________________|\n ";

					cout << "\n\t\t\t\t  Birate zanr pod rednim brojem: ";
					int zanr;			cin >> zanr;			cin.ignore();

					if (zanr == 1) {

						pretraga_knjiga_po_zanru_drama(knjige, brojac);

					}

					if (zanr == 2) {

						pretraga_knjiga_po_zanru_djecije(knjige, brojac);

					}

					if (zanr == 3) {

						pretraga_knjiga_po_zanru_kriminalisticki(knjige, brojac);

					}

					if (zanr == 4) {

						pretraga_knjiga_po_zanru_triler(knjige, brojac);

					}

					if (zanr == 5) {

						pretraga_knjiga_po_zanru_historijski(knjige, brojac);

					}

				}

				if (vas_odabir == 11) {

					system("cls");

					meni_za_pretragu_stilova();

					cout << endl;
					cout << endl;

					cout << "\t\t\t   ___________________________________________________ \n ";
					cout << "\t\t\t  |                                                   |\n ";
					cout << "\t\t\t  |  UNESITE REDNI BROJ JEDNOG OD PONUDJENIH STILOVA  |\n";
					cout << "\t\t\t  |___________________________________________________|\n ";

					cout << "\n\t\t\t\t  Birate stil pod rednim brojem: ";
					int stil;			cin >> stil;		cin.ignore();

					if (stil == 1) {

						pretraga_knjiga_po_stilu_roman(knjige, brojac);

					}

					if (stil == 2) {

						pretraga_knjiga_po_stilu_pripovijetka(knjige, brojac);

					}

					if (stil == 3) {

						pretraga_knjiga_po_stilu_poezija(knjige, brojac);

					}

					if (stil == 4) {

						pretraga_knjiga_po_stilu_bajka(knjige, brojac);

					}

				}

			}

			//PRETRAGA KNJIGE PO NAZIVU/NASLOVU
			if (RB_opcije == 3) {

				system("CLS");

				meni_za_pretragu_knjiga();

				cout << endl;
				cout << endl;

				cout << "\t\t\t   _______________________________________________ \n ";
				cout << "\t\t\t  |                                               |\n ";
				cout << "\t\t\t  |  UNESITE REDNI BROJ JEDNE OD METODE PRETRAGE  |\n";
				cout << "\t\t\t  |_______________________________________________|\n ";

				cout << "\n\t\t\t\t  Birate metodu pod rednim brojem: ";
				int vas_odabir;
				cin >> vas_odabir;
				cin.ignore();

				if (vas_odabir == 1) {

					system("CLS");

					cout << "\t\t\t   __________________________\n ";
					cout << "\t\t\t  |                          |\n ";
					cout << "\t\t\t  |  PRETRAGA PREMA NASLOVU  |\n";
					cout << "\t\t\t  |__________________________|\n ";


					cout << "\n\n\t\t     Unesite naslov knjige koju zelite pronaci: ";
					string naslov;
					getline(cin, naslov);

					k.pretraga_knjige_po_nazivu(knjige, brojac, naslov);

				}

				if (vas_odabir == 2) {

					system("CLS");

					cout << "\t\t\t   _______________________________\n ";
					cout << "\t\t\t  |                               |\n ";
					cout << "\t\t\t  |  PRETRAGA PREMA IMENU AUTORA  |\n";
					cout << "\t\t\t  |_______________________________|\n ";


					cout << "\n\n\t\t     Unesite ima autora kojeg zelite pronaci: ";
					string naslov;
					getline(cin, naslov);

					k.pretraga_knjige_po_imenu_autora(knjige, brojac, naslov);

				}

				if (vas_odabir == 3) {

					system("CLS");

					cout << "\t\t\t   ___________________________________\n ";
					cout << "\t\t\t  |                                   |\n ";
					cout << "\t\t\t  |  PRETRAGA PREMA PREZIMENU AUTORA  |\n";
					cout << "\t\t\t  |___________________________________|\n ";


					cout << "\n\n\t\t     Unesite prezima autora kojeg zelite pronaci: ";
					string naslov;
					getline(cin, naslov);

					k.pretraga_knjige_po_prezimenu_autora(knjige, brojac, naslov);

				}

				if (vas_odabir == 4) {

					system("CLS");

					cout << "\t\t\t   __________________________________\n ";
					cout << "\t\t\t  |                                  |\n ";
					cout << "\t\t\t  |  PRETRAGA PREMA IZDAVACKOJ KUCI  |\n";
					cout << "\t\t\t  |__________________________________|\n ";


					cout << "\n\n\t\t\tUnesite izdavacku kucu koju zelite pronaci: ";
					string naslov;
					getline(cin, naslov);

					k.pretraga_knjige_po_izdavackoj_kuci(knjige, brojac, naslov);

				}

				if (vas_odabir == 5) {

					system("CLS");

					cout << "\t\t\t   ___________________________________\n ";
					cout << "\t\t\t  |                                   |\n ";
					cout << "\t\t\t  |  PRETRAGA PREMA GODINI IZDAVANJA  |\n";
					cout << "\t\t\t  |___________________________________|\n ";


					cout << "\n\n\t\t\tUnesite godinu izdavanja: ";
					int godina;
					cin >> godina;
					cin.ignore();

					k.pretraga_knjige_po_godini_izdavanja(knjige, brojac, godina);

				}

			}

			//UNOS PODATAKA PRI UCLANJENJU
			if (RB_opcije == 4) {

				cout << "\t\t         __________________________________________" << endl;
				cout << "\t\t        |                                          |" << endl;
				cout << "\t\t        |  UNOSENJE PODATAKA O KORISNICI/KORISNIKU |" << endl;
				cout << "\t\t        |__________________________________________|" << endl;

				cout << endl;
				cout << endl;

				korisnici[brojac_korisnika++] = ko.unos_korisnika();

				cout << "\n\n\t\t\t        ---USPJESNO POHRANJENI PODACI---\n";

				//Spremanje u "clanska_karta.txt"
				clanska_karta(korisnici, brojac_korisnika);

				cout << "\n\n\n\t\t\t\t\t\t\t Pritisnite ENTER\n\t\t\t\t\t   za povrataka u glavni izbornik";

				system("PAUSE>null");
				system("CLS");

			}

			//LISTA UCLANJENIH KOJI SE NALAZE U SISTEMU
			if (RB_opcije == 5) {

				system("CLS");

				meni_za_pregled_korisnika();

				cout << endl;
				cout << endl;

				cout << "\t\t\t   _________________________________________________________ \n ";
				cout << "\t\t\t  |                                                         |\n ";
				cout << "\t\t\t  |  UNESITE REDNI BROJ JEDNE OD METODE PRETRAGE KORISNIKA  |\n";
				cout << "\t\t\t  |_________________________________________________________|\n ";


				cout << "\n\t\t\t\t  Birate metodu pretrage korisnika biblioteke: ";
				int vas_odabir;
				cin >> vas_odabir;
				cin.ignore();

				if (vas_odabir == 1) {

					system("CLS");

					cout << "\t\t\t   ____________________________________\n ";
					cout << "\t\t\t  |                                    |\n ";
					cout << "\t\t\t  |  SORTIRANJE PREMA IMENU [ A - Z ]  |\n";
					cout << "\t\t\t  |____________________________________|\n ";

					ko.sortiranje_korisnika_po_imenu(korisnici, brojac_korisnika);

					ko.lista_korisnika(korisnici, brojac_korisnika);

					cout << "\n\n\n\t\t\t\t\t\t\t Pritisnite ENTER\n\t\t\t\t\t   za povrataka u glavni izbornik";

					system("PAUSE>null");
					system("CLS");

				}

				if (vas_odabir == 2) {

					system("CLS");

					cout << "\t\t\t   ________________________________________\n ";
					cout << "\t\t\t  |                                        |\n ";
					cout << "\t\t\t  |  SORTIRANJE PREMA PREZIMENU [ A - Z ]  |\n";
					cout << "\t\t\t  |________________________________________|\n ";

					ko.sortiranje_korisnika_po_prezimenu(korisnici, brojac_korisnika);

					ko.lista_korisnika(korisnici, brojac_korisnika);

					cout << "\n\n\n\t\t\t\t\t\t\t Pritisnite ENTER\n\t\t\t\t\t   za povrataka u glavni izbornik";

					system("PAUSE>null");
					system("CLS");

				}

				if (vas_odabir == 3) {

					system("CLS");

					cout << "\t\t\t   ________________________________________________________________\n ";
					cout << "\t\t\t  |                                                                |\n ";
					cout << "\t\t\t  |  SORTIRANJE PREMA BROJU GODINA [ MLADJI IZDANJA KA STARIJIM ]  |\n";
					cout << "\t\t\t  |________________________________________________________________|\n ";

					ko.sortiranje_korisnika_po_broju_godina_mladji_ka_starijima(korisnici, brojac_korisnika);

					ko.lista_korisnika(korisnici, brojac_korisnika);

					cout << "\n\n\n\t\t\t\t\t\t\t Pritisnite ENTER\n\t\t\t\t\t   za povrataka u glavni izbornik";

					system("PAUSE>null");
					system("CLS");

				}

				if (vas_odabir == 4) {

					system("CLS");

					cout << "\t\t\t   _______________________________________________________________\n ";
					cout << "\t\t\t  |                                                               |\n ";
					cout << "\t\t\t  |  SORTIRANJE PREMA BROJU GODINA [ STARIJA IZDANJA KA MLADIM ]  |\n";
					cout << "\t\t\t  |_______________________________________________________________|\n ";

					ko.sortiranje_korisnika_po_broju_godina_stariji_ka_mladjima(korisnici, brojac_korisnika);

					ko.lista_korisnika(korisnici, brojac_korisnika);

					cout << "\n\n\n\t\t\t\t\t\t\t Pritisnite ENTER\n\t\t\t\t\t   za povrataka u glavni izbornik";

					system("PAUSE>null");
					system("CLS");

				}

				if (vas_odabir == 5) {

					system("CLS");

					cout << "\t\t\t   _________________________________\n ";
					cout << "\t\t\t  |                                 |\n ";
					cout << "\t\t\t  |  PREMA ID-u [ VECI KA MANJEM ]  |\n";
					cout << "\t\t\t  |_________________________________|\n ";

					ko.sortiranje_korisnika_po_id_veci_ka_manjem(korisnici, brojac_korisnika);

					ko.lista_korisnika(korisnici, brojac_korisnika);

					cout << "\n\n\n\t\t\t\t\t\t\t Pritisnite ENTER\n\t\t\t\t\t   za povrataka u glavni izbornik";

					system("PAUSE>null");
					system("CLS");

				}

				if (vas_odabir == 6) {

					system("CLS");

					cout << "\t\t\t   _________________________________\n ";
					cout << "\t\t\t  |                                 |\n ";
					cout << "\t\t\t  |  PREMA ID-u [ MANJI KA VECEM ]  |\n";
					cout << "\t\t\t  |_________________________________|\n ";

					ko.sortiranje_korisnika_po_id_manji_ka_vecem(korisnici, brojac_korisnika);

					ko.lista_korisnika(korisnici, brojac_korisnika);

					cout << "\n\n\n\t\t\t\t\t\t\t Pritisnite ENTER\n\t\t\t\t\t   za povrataka u glavni izbornik";

					system("PAUSE>null");
					system("CLS");

				}

				if (vas_odabir == 7) {

					pretraga_zenskih_osoba(korisnici, brojac_korisnika);

				}

				if (vas_odabir == 8) {

					pretraga_muskih_osoba(korisnici, brojac_korisnika);

				}

			}

			if (RB_opcije == 6);

			if (RB_opcije == 7) {

				cout << endl;

				cout << "\n\n\t\t\t Zelite li promijeniti nacin rada? \n";
				cout << "\n\t\t\t        1 - Nacin rada za uposlene ";
				cout << "\n\t\t\t        2 - Nacin rada za korisnike ";
				cout << "\n\t\t\t        10 - Izlaz ";
				cout << "\n\n\t\t\t Unesite redni broj zeljene opcije: ";
				int redni_broj_opcije;
				cin >> redni_broj_opcije;
				cin.ignore();

				if (redni_broj_opcije == 1) {

					goto za_uposlene;

				}

				if (redni_broj_opcije == 2) {

					goto za_korisnike;

				}

				else {

					system("CLS");

					cout << endl;
					cout << endl;

					cout << "\t\t         _____________________________________" << endl;
					cout << "\t\t        |                                     |" << endl;
					cout << "\t\t        |  HVALA NA KORISTENJU NASEG SISTEMA  |" << endl;
					cout << "\t\t        |_____________________________________|" << endl;

					cout << endl;
					cout << endl;
					cout << endl;

					cout << "\n\n\n\t\t\t\t\t\t  Pritisnite ESC za izlazak iz programa\n";

					system("PAUSE>null");
					system("CLS");

					EXIT_SUCCESS;
				}

			}

			//PREKID PROGRAMA
			if (RB_opcije == 10) {

				system("CLS");

				cout << endl;
				cout << endl;

				cout << "\t\t         _____________________________________" << endl;
				cout << "\t\t        |                                     |" << endl;
				cout << "\t\t        |  HVALA NA KORISTENJU NASEG SISTEMA  |" << endl;
				cout << "\t\t        |_____________________________________|" << endl;

				cout << endl;
				cout << endl;
				cout << endl;

				cout << "\n\n\n\t\t\t\t\t\t  Pritisnite ESC za izlazak iz programa\n";

				system("PAUSE>null");
				system("CLS");

				EXIT_SUCCESS;

			}

		} while (RB_opcije >= 1 && RB_opcije <= 7 && RB_opcije != 10);

	}

	if (login == 2) {
		
		do {

		za_korisnike:

			system("CLS");

			glavni_meni_korisnici();

			cout << endl;

			cout << "\t\t\t  _____________________________________\n";
			cout << "\t\t\t |                                     |\n";
			cout << "\t\t\t |  UNESITE REDNI BROJ ZELJENE OPCIJE  |\n";
			cout << "\t\t\t |_____________________________________|\n";

			cout << "\n\n\t\t\t    Birate opciju pod rednim brojem: ";

			cin >> RB_opcije;

			system("CLS");

			cout << endl;
			cout << endl;
		
				//LISTA KNJIGA KOJE SE NALAZE U SISTEMU
				if (RB_opcije == 1) {

					system("CLS");

					meni_za_pregled_knjiga();

					cout << endl;
					cout << endl;

					cout << "\t\t\t   _________________________________________________ \n ";
					cout << "\t\t\t  |                                                 |\n ";
					cout << "\t\t\t  |  UNESITE REDNI BROJ JEDNE OD METODE SORTIRANJA  |\n";
					cout << "\t\t\t  |_________________________________________________|\n ";

					cout << "\n\t\t\t\t  Birate metodu pod rednim brojem: ";
					int vas_odabir;
					cin >> vas_odabir;
					cin.ignore();

					if (vas_odabir == 1) {

						system("CLS");

						cout << "\t\t\t   ______________________________________\n ";
						cout << "\t\t\t  |                                      |\n ";
						cout << "\t\t\t  |  SORTIRANJE PREMA NASLOVU [ A - Z ]  |\n";
						cout << "\t\t\t  |______________________________________|\n ";


						k.sortiranje_po_naslovu(knjige, brojac);

						k.lista_knjiga(knjige, brojac);

						cout << "\n\n\n\t\t\t\t\t\t\t Pritisnite ENTER\n\t\t\t\t\t   za povrataka u glavni izbornik";

						system("PAUSE>null");
						system("CLS");

					}

					if (vas_odabir == 2) {

						system("CLS");

						cout << "\t\t\t   ________________________________\n ";
						cout << "\t\t\t  |                                |\n ";
						cout << "\t\t\t  |  PREMA IMENU AUTORA [ A - Z ]  |\n";
						cout << "\t\t\t  |________________________________|\n ";

						k.sortiranje_po_imenu_autora(knjige, brojac);

						k.lista_knjiga(knjige, brojac);

						cout << "\n\n\n\t\t\t\t\t\t\t Pritisnite ENTER\n\t\t\t\t\t   za povrataka u glavni izbornik";

						system("PAUSE>null");
						system("CLS");

					}

					if (vas_odabir == 3) {

						system("CLS");

						cout << "\t\t\t   ____________________________________\n ";
						cout << "\t\t\t  |                                    |\n ";
						cout << "\t\t\t  |  PREMA PREZIMENU AUTORA [ A - Z ]  |\n";
						cout << "\t\t\t  |____________________________________|\n ";

						k.sortiranje_po_prezimenu_autora(knjige, brojac);

						k.lista_knjiga(knjige, brojac);

						cout << "\n\n\n\t\t\t\t\t\t\t Pritisnite ENTER\n\t\t\t\t\t   za povrataka u glavni izbornik";

						system("PAUSE>null");
						system("CLS");

					}

					if (vas_odabir == 4) {

						system("CLS");

						cout << "\t\t\t   _________________________________________________________\n ";
						cout << "\t\t\t  |                                                         |\n ";
						cout << "\t\t\t  |  PREMA GODINI IZDAVANJA [ NOVIJA IZDANJA KA STARIJIM ]  |\n";
						cout << "\t\t\t  |_________________________________________________________|\n ";

						k.sortiranje_po_godini_izdanja_novija_ka_starijim(knjige, brojac);

						k.lista_knjiga(knjige, brojac);

						cout << "\n\n\n\t\t\t\t\t\t\t Pritisnite ENTER\n\t\t\t\t\t   za povrataka u glavni izbornik";

						system("PAUSE>null");
						system("CLS");

					}

					if (vas_odabir == 5) {

						system("CLS");

						cout << "\t\t\t   _________________________________________________________\n ";
						cout << "\t\t\t  |                                                         |\n ";
						cout << "\t\t\t  |  PREMA GODINI IZDAVANJA [ STARIJA IZDANJA KA NOVIJIM ]  |\n";
						cout << "\t\t\t  |_________________________________________________________|\n ";

						k.sortiranje_po_godini_izdanja_starija_ka_novijim(knjige, brojac);

						k.lista_knjiga(knjige, brojac);

						cout << "\n\n\n\t\t\t\t\t\t\t Pritisnite ENTER\n\t\t\t\t\t   za povrataka u glavni izbornik";

						system("PAUSE>null");
						system("CLS");

					}

					if (vas_odabir == 6) {

						system("CLS");

						cout << "\t\t\t   ________________________________________________________\n ";
						cout << "\t\t\t  |                                                        |\n ";
						cout << "\t\t\t  |  PREMA BROJU STRANICA [ VECI BROJ STRANICA KA MANJE ]  |\n";
						cout << "\t\t\t  |________________________________________________________|\n ";

						k.sortiranje_po_broju_stranica_vise_ka_manje(knjige, brojac);

						k.lista_knjiga(knjige, brojac);

						cout << "\n\n\n\t\t\t\t\t\t\t Pritisnite ENTER\n\t\t\t\t\t   za povrataka u glavni izbornik";

						system("PAUSE>null");
						system("CLS");

					}

					if (vas_odabir == 7) {

						system("CLS");

						cout << "\t\t\t   _________________________________________________________ \n ";
						cout << "\t\t\t  |                                                         |\n ";
						cout << "\t\t\t  |  PREMA BROJU STRANICA [ MANJI BROJ STRANICA KA VECEM ]  |\n";
						cout << "\t\t\t  |_________________________________________________________|\n ";

						k.sortiranje_po_broju_stranica_manje_ka_vise(knjige, brojac);

						k.lista_knjiga(knjige, brojac);

						cout << "\n\n\n\t\t\t\t\t\t\t Pritisnite ENTER\n\t\t\t\t\t   za povrataka u glavni izbornik";

						system("PAUSE>null");
						system("CLS");

					}

					if (vas_odabir == 8) {

						system("CLS");

						cout << "\t\t\t   _______________________________________________________________ \n ";
						cout << "\t\t\t  |                                                               |\n ";
						cout << "\t\t\t  |  PREMA BROJU KNJIGA NA STANJU[VECI BROJ NA STANJU KA MANJEM]  |\n";
						cout << "\t\t\t  |_______________________________________________________________|\n ";

						k.sortiranje_po_broju_knjiga_na_stanju_vise_ka_manje(knjige, brojac);

						k.lista_knjiga(knjige, brojac);

						cout << "\n\n\n\t\t\t\t\t\t\t Pritisnite ENTER\n\t\t\t\t\t   za povrataka u glavni izbornik";

						system("PAUSE>null");
						system("CLS");

					}

					if (vas_odabir == 9) {

						system("CLS");

						cout << "\t\t\t   __________________________________________________________________ \n ";
						cout << "\t\t\t  |                                                                  |\n ";
						cout << "\t\t\t  |  PREMA BROJU KNJIGA NA STANJU [ MANJI BROJ NA STANJU KA VECEM ]  |\n";
						cout << "\t\t\t  |__________________________________________________________________|\n ";

						k.sortiranje_po_broju_knjiga_nastanju_manje_ka_vise(knjige, brojac);

						k.lista_knjiga(knjige, brojac);

						cout << "\n\n\n\t\t\t\t\t\t\t Pritisnite ENTER\n\t\t\t\t\t   za povrataka u glavni izbornik";

						system("PAUSE>null");
						system("CLS");

					}

					if (vas_odabir == 10) {

						system("cls");

						meni_za_pretragu_zanrova();

						cout << endl;
						cout << endl;

						cout << "\t\t\t   ___________________________________________________ \n ";
						cout << "\t\t\t  |                                                   |\n ";
						cout << "\t\t\t  |  UNESITE REDNI BROJ JEDNOG OD PONUDJENIH ZANROVA  |\n";
						cout << "\t\t\t  |___________________________________________________|\n ";

						cout << "\n\t\t\t\t  Birate zanr pod rednim brojem: ";
						int zanr;			cin >> zanr;			cin.ignore();

						if (zanr == 1) {

							pretraga_knjiga_po_zanru_drama(knjige, brojac);

						}

						if (zanr == 2) {

							pretraga_knjiga_po_zanru_djecije(knjige, brojac);

						}

						if (zanr == 3) {

							pretraga_knjiga_po_zanru_kriminalisticki(knjige, brojac);

						}

						if (zanr == 4) {

							pretraga_knjiga_po_zanru_triler(knjige, brojac);

						}

						if (zanr == 5) {

							pretraga_knjiga_po_zanru_historijski(knjige, brojac);

						}

					}

					if (vas_odabir == 11) {

						system("cls");

						meni_za_pretragu_stilova();

						cout << endl;
						cout << endl;

						cout << "\t\t\t   ___________________________________________________ \n ";
						cout << "\t\t\t  |                                                   |\n ";
						cout << "\t\t\t  |  UNESITE REDNI BROJ JEDNOG OD PONUDJENIH STILOVA  |\n";
						cout << "\t\t\t  |___________________________________________________|\n ";

						cout << "\n\t\t\t\t  Birate stil pod rednim brojem: ";
						int stil;			cin >> stil;		cin.ignore();

						if (stil == 1) {

							pretraga_knjiga_po_stilu_roman(knjige, brojac);

						}

						if (stil == 2) {

							pretraga_knjiga_po_stilu_pripovijetka(knjige, brojac);

						}

						if (stil == 3) {

							pretraga_knjiga_po_stilu_poezija(knjige, brojac);

						}

						if (stil == 4) {

							pretraga_knjiga_po_stilu_bajka(knjige, brojac);

						}

					}

				}

				//PRETRAGA KNJIGE PO NAZIVU/NASLOVU
				if (RB_opcije == 2) {

					system("CLS");

					meni_za_pretragu_knjiga();

					cout << endl;
					cout << endl;

					cout << "\t\t\t   _______________________________________________ \n ";
					cout << "\t\t\t  |                                               |\n ";
					cout << "\t\t\t  |  UNESITE REDNI BROJ JEDNE OD METODE PRETRAGE  |\n";
					cout << "\t\t\t  |_______________________________________________|\n ";

					cout << "\n\t\t\t\t  Birate metodu pod rednim brojem: ";
					int vas_odabir;
					cin >> vas_odabir;
					cin.ignore();

					if (vas_odabir == 1) {

						system("CLS");

						cout << "\t\t\t   __________________________\n ";
						cout << "\t\t\t  |                          |\n ";
						cout << "\t\t\t  |  PRETRAGA PREMA NASLOVU  |\n";
						cout << "\t\t\t  |__________________________|\n ";


						cout << "\n\n\t\t     Unesite naslov knjige koju zelite pronaci: ";
						string naslov;
						getline(cin, naslov);

						k.pretraga_knjige_po_nazivu(knjige, brojac, naslov);

					}

					if (vas_odabir == 2) {

						system("CLS");

						cout << "\t\t\t   _______________________________\n ";
						cout << "\t\t\t  |                               |\n ";
						cout << "\t\t\t  |  PRETRAGA PREMA IMENU AUTORA  |\n";
						cout << "\t\t\t  |_______________________________|\n ";


						cout << "\n\n\t\t     Unesite ima autora kojeg zelite pronaci: ";
						string naslov;
						getline(cin, naslov);

						k.pretraga_knjige_po_imenu_autora(knjige, brojac, naslov);

					}

					if (vas_odabir == 3) {

						system("CLS");

						cout << "\t\t\t   ___________________________________\n ";
						cout << "\t\t\t  |                                   |\n ";
						cout << "\t\t\t  |  PRETRAGA PREMA PREZIMENU AUTORA  |\n";
						cout << "\t\t\t  |___________________________________|\n ";


						cout << "\n\n\t\t     Unesite prezima autora kojeg zelite pronaci: ";
						string naslov;
						getline(cin, naslov);

						k.pretraga_knjige_po_prezimenu_autora(knjige, brojac, naslov);

					}

					if (vas_odabir == 4) {

						system("CLS");

						cout << "\t\t\t   __________________________________\n ";
						cout << "\t\t\t  |                                  |\n ";
						cout << "\t\t\t  |  PRETRAGA PREMA IZDAVACKOJ KUCI  |\n";
						cout << "\t\t\t  |__________________________________|\n ";


						cout << "\n\n\t\t\tUnesite izdavacku kucu koju zelite pronaci: ";
						string naslov;
						getline(cin, naslov);

						k.pretraga_knjige_po_izdavackoj_kuci(knjige, brojac, naslov);

					}

					if (vas_odabir == 5) {

						system("CLS");

						cout << "\t\t\t   ___________________________________\n ";
						cout << "\t\t\t  |                                   |\n ";
						cout << "\t\t\t  |  PRETRAGA PREMA GODINI IZDAVANJA  |\n";
						cout << "\t\t\t  |___________________________________|\n ";


						cout << "\n\n\t\t\tUnesite godinu izdavanja: ";
						int godina;
						cin >> godina;
						cin.ignore();

						k.pretraga_knjige_po_godini_izdavanja(knjige, brojac, godina);

					}

				}

				//UNOS PODATAKA PRI UCLANJENJU
				if (RB_opcije == 3) {

					cout << "\t\t         __________________________________________" << endl;
					cout << "\t\t        |                                          |" << endl;
					cout << "\t\t        |  UNOSENJE PODATAKA O KORISNICI/KORISNIKU |" << endl;
					cout << "\t\t        |__________________________________________|" << endl;

					cout << endl;
					cout << endl;

					korisnici[brojac_korisnika++] = ko.unos_korisnika();

					cout << "\n\n\t\t\t        ---USPJESNO POHRANJENI PODACI---\n";

					//Spremanje u "clanska_karta.txt"
					clanska_karta(korisnici, brojac_korisnika);

					cout << "\n\n\n\t\t\t\t\t\t\t Pritisnite ENTER\n\t\t\t\t\t   za povrataka u glavni izbornik";

					system("PAUSE>null");
					system("CLS");

				}

				if (RB_opcije == 4) {};

				if (RB_opcije == 5) {

					feedback_menu();

				}

				if (RB_opcije == 6) {

					cout << endl;

					cout << "\n\n\t\t\t Zelite li promijeniti nacin rada? \n";
					cout << "\n\t\t\t        1 - Nacin rada za uposlene ";
					cout << "\n\t\t\t        2 - Nacin rada za korisnike ";
					cout << "\n\t\t\t        10 - Izlaz ";
					cout << "\n\n\t\t\t Unesite redni broj zeljene opcije: ";
					int redni_broj_opcije;
					cin >> redni_broj_opcije;
					cin.ignore();

					if (redni_broj_opcije == 1) {

						goto za_uposlene;

					}

					if (redni_broj_opcije == 2) {

						goto za_korisnike;

					}

					else {

						system("CLS");

						cout << endl;
						cout << endl;

						cout << "\t\t         _____________________________________" << endl;
						cout << "\t\t        |                                     |" << endl;
						cout << "\t\t        |  HVALA NA KORISTENJU NASEG SISTEMA  |" << endl;
						cout << "\t\t        |_____________________________________|" << endl;

						cout << endl;
						cout << endl;
						cout << endl;

						cout << "\n\n\n\t\t\t\t\t\t  Pritisnite ESC za izlazak iz programa\n";

						system("PAUSE>null");
						system("CLS");

						EXIT_SUCCESS;

					}

				}

				if (RB_opcije == 10) {

					system("CLS");

					cout << endl;
					cout << endl;

					cout << "\t\t         _____________________________________" << endl;
					cout << "\t\t        |                                     |" << endl;
					cout << "\t\t        |  HVALA NA KORISTENJU NASEG SISTEMA  |" << endl;
					cout << "\t\t        |_____________________________________|" << endl;

					cout << endl;
					cout << endl;
					cout << endl;

					cout << "\n\n\n\t\t\t\t\t\t  Pritisnite ESC za izlazak iz programa\n";

					system("PAUSE>null");
					system("CLS");

					EXIT_SUCCESS;

				}

			} while(RB_opcije >= 1 && RB_opcije <= 6 && RB_opcije != 10);

	}


	delete[]knjige;
	delete[]korisnici;

	cout << endl;
	cout << endl;
	cout << endl;
	cout << endl;
	cout << endl;
	cout << endl;
	cout << endl;
	cout << endl;
	cout << endl;
	cout << endl;
	cout << endl;
	cout << endl;

}
