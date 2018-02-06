#include "Header.h"

using namespace std ;

int main()
{
	int choixmenu(9);
	int choixchoix(8);
	int boucle(3);

	do
	{

		cout << "Bienvenue dans le programme de calcul de masse molaire" << endl;
		cout << "Combien d'Atome possede votre formule (ex H5 LI10 CA15 = Il y a Trois atome) ? Max 5" << endl;
		cin >> choixmenu;

		switch (choixmenu)
		{
		case 0:
			cout << "Tu dois faire un choix" << endl;
			break;
		case 1:
			cout << "Vous avez 1 Atome" << endl;
			Calcul1A(double Molecule1);
			break;
		case 2:
			cout << "Vous avez 2 Atome" << endl;
			Calcul2A(double Molecule1, double Molecule2);
			break;
		case 3:
			cout << "Vous avez 3 Atome" << endl
			Calcul3A(double Molecule1, double Molecule2, double Molecule3);
			break;
		case 4:
			cout << "Vous avez 4 Atome" << endl;
			Calcul4A(double Molecule1, double Molecule2, double Molecule3, double Molecule4);
			break;
		case 5:
			cout << "Vous avez 5 Atome" << endl;
			Calcul5A(double Molecule1, double Molecule2, double Molecule3, double Molecule4, double Molecule5);
			break;
		default:
			cout << "OHH Du calme, il faut attendre la prochaine maj !!" << endl;
			break;
		}
		cout << "Voulez vous refaire un autre calcul ? (1) Oui (0) Non" << endl;
		cin >> boucle;

	} while (boucle == 1);

	return 0;
}