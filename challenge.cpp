#include <iostream>
#include <stdlib.h>
#include <time.h>
using namespace std;
int main()
{
	// Parte dichiarativa
	srand(time(NULL));
	int carte, carte_computer, carta_utente;
	char nickname[100];
	char scopri, regolamento, pulizia;
	// Stampo le regole nel caso l'utente le vuole leggere
	cout << "BENVENUTO NEL GIOCO \2" << endl;
	cout << "Vuoi leggere il regolamento?[s/n] \t";
	cin >> regolamento;
	if (regolamento == 's')
	{
		cout << "Vince chi ha la carta piu' alta" << endl;
	}
	// Pulisco il terminale
	cout << "Vuoi pulire la schermata di gioco?[s/n] \t";
	cin >> pulizia;
	if (pulizia == 's')
	{
		system("cls");
	}
	cout << "Inserisci il nickname:\t";
	cin >> nickname;
	// Faccio scegliere una carta all'utente
	cout << "Scegli una carta da 1 a 5 \t";
	cin >> carta_utente;
	// Stampo la carta scelta dall'utente
	switch (carta_utente)
	{
	case 1:
		cout << "Ecco la tua carta" << endl;
		cout << " ---------\n"
				"|         |\n"
				"|         |\n"
				"|    "
			 << "1" << "    |\n"
					   "|         |\n"
					   "|         |\n"
					   " ---------"
			 << endl;
		break;
	case 2:
		cout << "Ecco la tua carta" << endl;
		cout << " ---------\n"
				"|         |\n"
				"|         |\n"
				"|    "
			 << "2" << "    |\n"
					   "|         |\n"
					   "|         |\n"
					   " ---------"
			 << endl;
		break;
	case 3:
		cout << "Ecco la tua carta" << endl;
		cout << " ---------\n"
				"|         |\n"
				"|         |\n"
				"|    "
			 << "3" << "    |\n"
					   "|         |\n"
					   "|         |\n"
					   " ---------"
			 << endl;
		break;
	case 4:
		cout << "Ecco la tua carta" << endl;
		cout << " ---------\n"
				"|         |\n"
				"|         |\n"
				"|    "
			 << "4" << "    |\n"
					   "|         |\n"
					   "|         |\n"
					   " ---------"
			 << endl;
		break;
	case 5:
		cout << "Ecco la tua carta" << endl;
		cout << " ---------\n"
				"|         |\n"
				"|         |\n"
				"|    "
			 << "5" << "    |\n"
					   "|         |\n"
					   "|         |\n"
					   " ---------"
			 << endl;
		break;
	default:
		cout << "ERRORE!!Riavviare il gioco" << endl;
		return 0;
	}
	// Do una carta random al computer
	carte_computer = rand() % 5 + 1;
	cout << "Vuoi vedere la carta del computer?[s/n]\t";
	cin >> scopri;
	// Stampo la carta del computer nel caso l'utente voglia
	if (scopri == 's')
	{
		cout << " ---------\n"
				"|         |\n"
				"|         |\n"
				"|    "
			 << carte_computer << "    |\n"
								  "|         |\n"
								  "|         |\n"
								  " ---------"
			 << endl;
		// Faccio il confronto tra la carte dell'utente e quella del computer per vedere gli esiti della partita
		if (carte_computer < carta_utente)
		{
			cout << "COMPLIMENTI!! Il giocatore " << nickname << " ha vinto \2" << endl;
		}
		else if (carte_computer > carta_utente)
		{
			cout << "Mi dispiace, ma ha vinto il computer" << endl;
		}
		else if (carta_utente == carte_computer)
		{
			cout << "Pareggio" << endl;
		}
		cout << "GIOCO FINITO! ALLA PROSSIMA SFIDA..... \2" << endl;
		return 0;
	}
}
