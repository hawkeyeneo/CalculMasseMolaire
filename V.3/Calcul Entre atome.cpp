#include "Header.h"

using namespace std;

int Calcul1A()
{
	int ligne(0);
	string buffeur;
	int compteur(0);
	double Choixmol1(1);
	double Molecule1(1);
	double Resultat1A(1);
	double MultiplicateurA1(4);
	ifstream Atomeflux("Atome.txt", ios::in);

	cout << "Quel est votre Atome ? (Numéro Atomique)" << endl;
	cin >> Choixmol1;

	for (int compteur = 0; compteur < Choixmol1; compteur++)
	{
		getline(Atomeflux, buffeur);
	}
	ligne = stoi(buffeur);
	Molecule1 = ligne;

	cout << "Quel est l'indice de l'atome ?" << endl;
	cin >> MultiplicateurA1;

	Resultat1A = Molecule1 * MultiplicateurA1;

	cout << "La masse Molaire de " << Molecule1 << MultiplicateurA1 << " est  " << Resultat1A << endl;

	return 0;
}

int Calcul2A()
{
	int ligne(0);
	int ligne1(0);
	string buffeur1;
	string buffeur;
	int compteur(0);
	int compt2eur(0);
	int Choixmol1(9);
	int Choixmol2(4);
	int Molecule1(0);
	int Molecule2(0);
	int ResultatFinal(0);
	int Resulatat1A(0);
	int Resulatat2A(0);
	int MultiplicateurA1(0);
	int MultiplicateurA2(0);
	ifstream Atomeflux("Atome.txt", ios::in);

	cout << "sa fonctionne" << endl;
	//Atome 1
	cout << "Quel est votre Atome ? (Numéro Atomique)" << endl;
	cin >> Choixmol1;

	for (int compteur = 0; compteur < Choixmol1; compteur++)
	{
		getline(Atomeflux, buffeur);
	}
	ligne = stoi (buffeur);
    Molecule1 = ligne;

	cout << "Quel est l'indice de l'atome ?" << endl;
	cin >> MultiplicateurA1; 
	
	Resulatat1A = Molecule1 * MultiplicateurA1;

	cout << "le resultat est " << Resulatat1A << endl;

	//Atome 2
	cout << "Quel est votre Atome ? (Numéro Atomique)" << endl;
	cin >> Choixmol2;

	Atomeflux.seekg(0, ios::beg);

	for (int compt2eur = 0; compt2eur < Choixmol2; compt2eur++)
	{
		getline(Atomeflux, buffeur1);
	}
	ligne1 = stoi (buffeur1);;
	Molecule2 = ligne1;
	
	cout << "Quel est l'indice de l'atome ?" << endl;
	cin >> MultiplicateurA2; 

	Resulatat2A = Molecule2 * MultiplicateurA2;

	cout << "Le resulat est " << Resulatat2A << endl;

	ResultatFinal = Resulatat1A + Resulatat2A;

	cout << "La masse molaire des deux atomes est " << ResultatFinal << endl;

	return 0;
}

int Calcul3A()
{
	int ligne(0);
	int ligne1(0);
	int ligne2(0);
	string buffeur2;
	string buffeur1;
	string buffeur;
	int compteur(0);
	int compt2eur(0);
	int compt3eur(0);
	int Choixmol1(1);
	int Choixmol2(1);
	int Choixmol3(1);
	int Molecule1(1);
	int Molecule2(1);
	int Molecule3(1);
	int ResultatFinal(6);
	int Resulatat1A(9);
	int Resulatat2A(2);
	int Resulatat3A(5);
	int MultiplicateurA1(3);
	int MultiplicateurA2(5);
	int MultiplicateurA3(9);
	ifstream Atomeflux("Atome.txt", ios::in);

	cout << "sa fonctionne" << endl;
	// Atome1
	cout << "Quel est votre Atome ? (Numéro Atomique)" << endl;
	cin >> Choixmol1;

	for (compteur = 0; compteur < Choixmol1; compteur++)
	{
		Atomeflux >> buffeur;
	}
	ligne = stoi(buffeur);
	Molecule1 = ligne;

	cout << "Quel est l'indice de l'atome ?" << endl;
	cin >> MultiplicateurA1;

	Resulatat1A = Molecule1 * MultiplicateurA1;

	cout << "le resultat est " << Resulatat1A << endl;

	// Atome2
	cout << "Quel est votre Atome ? (Numéro Atomique)" << endl;
	cin >> Choixmol2;

	Atomeflux.seekg(0, ios::beg);
	
	for (compt2eur = 0; compt2eur < Choixmol2; compt2eur++)
	{
		Atomeflux >> buffeur1;
	}
	ligne1 = stoi(buffeur1);
	Molecule2 = ligne1;

	cout << "Quel est l'indice de l'atome ?" << endl;

	cin >> MultiplicateurA2;

	Resulatat2A = Molecule2 * MultiplicateurA2;

	// Atome 3
	cout << "Quel est votre Atome ? (Numéro Atomique)" << endl;
	cin >> Choixmol3;

	Atomeflux.seekg(0, ios::beg);

	for (int compt3eur = 0; compt3eur <= Choixmol3; compt3eur++)
	{
		Atomeflux >> buffeur2;
	}
	ligne2 = stoi(buffeur2);
	Molecule3 = ligne2;

	cout << "Quel est l'indice de l'atome ?" << endl;
	cin >> MultiplicateurA3;

	Resulatat2A = Molecule3 * MultiplicateurA3;

	ResultatFinal = Resulatat1A + Resulatat2A + Resulatat3A;

	cout << "La masse molaire des trois atomes est " << ResultatFinal;

	return 0;
	
}

int Calcul4A()
{
	int ligne(0);
	int ligne1(0);
	int ligne2(0);
	int ligne3(0);
	string buffeur3;
	string buffeur2;
	string buffeur1;
	string buffeur;
	int compteur(0);
	int compt2eur(0);
	int compt3eur(0);
	int compt4eur(0);
	int Choixmol1(1);
	int Choixmol2(1);
	int Choixmol3(1);
	int Choixmol4(1);
	int Molecule1(1);
	int Molecule2(1);
	int Molecule3(1);
	int Molecule4(1);
	int ResultatFinal(6);
	int Resulatat1A(9);
	int Resulatat2A(2);
	int Resulatat3A(5);
	int Resulatat4A(9);
	int MultiplicateurA1(3);
	int MultiplicateurA2(5);
	int MultiplicateurA3(9);
	int MultiplicateurA4(4);
	ifstream Atomeflux("Atome.txt", ios::in);

	cout << "sa fonctionne" << endl;
	// Atome1
	cout << "Quel est votre Atome ? (Numéro Atomique)" << endl;
	cin >> Choixmol1;

	Atomeflux.seekg(0, ios::beg);

	for (int compteur = 0; compteur <= Choixmol1; compteur++)
	{
		Atomeflux >> buffeur;
	}
	ligne = stoi(buffeur);
	Molecule1 = ligne;

	cout << "Quel est l'indice de l'atome ?" << endl;
	cin >> MultiplicateurA1;

	Resulatat1A = Molecule1 * MultiplicateurA1;

	// Atome2
	cout << "Quel est votre Atome ? (Numéro Atomique)" << endl;
	cin >> Choixmol2;

	Atomeflux.seekg(0, ios::beg);

	for (int compt2eur = 0; compt2eur <= Choixmol2; compt2eur++)
	{
		Atomeflux >> buffeur1;
	}
	ligne1 = stoi(buffeur1);
	Molecule2 = ligne1;

	cout << "Quel est l'indice de l'atome ?" << endl;
	cin >> MultiplicateurA2;

	Resulatat2A = Molecule2 * MultiplicateurA2;

	// Atome 3
	cout << "Quel est votre Atome ? (Numéro Atomique)" << endl;
	cin >> Choixmol3;

	Atomeflux.seekg(0, ios::beg);

	for (int compt3eur = 0; compt3eur <= Choixmol3; compt3eur++)
	{
		Atomeflux >> buffeur2;
	}
	ligne2 = stoi(buffeur2);
	Molecule3 = ligne2;

	cout << "Quel est l'indice de l'atome ?" << endl;
	cin >> MultiplicateurA3;

	Resulatat2A = Molecule3 * MultiplicateurA3;

	// Atome 4
	cout << "Quel est votre Atome ? (Numéro Atomique)" << endl;
	cin >> Choixmol4;

	Atomeflux.seekg(0, ios::beg);

	for (int compt4eur = 0; compt4eur <= Choixmol4; compt4eur++)
	{
		Atomeflux >> buffeur3;
	}
	ligne3 = stoi(buffeur3);
	Molecule4 = ligne3;

	cout << "Quel est l'indice de l'atome ?" << endl;
	cin >> MultiplicateurA4;

	Resulatat2A = Molecule4 * MultiplicateurA4;

	ResultatFinal = Resulatat1A + Resulatat2A + Resulatat3A + Resulatat4A;

	cout << "La masse molaire des quatre atomes est " << ResultatFinal;

	return 0;
	
}

int Calcul5A()
{
	int ligne(0);
	int ligne1(0);
	int ligne2(0);
	int ligne3(0);
	int ligne4(0);
	string buffeur4;
	string buffeur3;
	string buffeur2;
	string buffeur1;
	string buffeur;
	int compteur(0);
	int compt2eur(0);
	int compt3eur(0);
	int compt4eur(0);
	int compt5eur(0);
	double Choixmol1(1);
	double Choixmol2(1);
	double Choixmol3(1);
	double Choixmol4(1);
	double Choixmol5(1);
	double Molecule1(1);
	double Molecule2(1);
	double Molecule3(1);
	double Molecule4(1);
	double Molecule5(1);
	double ResultatFinal(6);
	double Resulatat1A(9);
	double Resulatat2A(2);
	double Resulatat3A(5);
	double Resulatat4A(9);
	double Resulatat5A(5);
	double MultiplicateurA1(3);
	double MultiplicateurA2(5);
	double MultiplicateurA3(9);
	double MultiplicateurA4(4);
	double MultiplicateurA5(7);
	ifstream Atomeflux("Atome.txt", ios::in);

	cout << "sa fonctionne" << endl;
	// Atome1
	cout << "Quel est votre Atome ? (Numéro Atomique)" << endl;
	cin >> Choixmol1;

	Atomeflux.seekg(0, ios::beg);

	for (int compteur = 0; compteur <= Choixmol1; compteur++)
	{
		Atomeflux >> buffeur;
	}
	ligne = stoi(buffeur);
	Molecule1 = ligne;

	cout << "Quel est l'indice de l'atome ?" << endl;
	cin >> MultiplicateurA1;

	Resulatat1A = Molecule1 * MultiplicateurA1;

	// Atome2
	cout << "Quel est votre Atome ? (Numéro Atomique)" << endl;
	cin >> Choixmol2;

	Atomeflux.seekg(0, ios::beg);

	for (int compt2eur = 0; compt2eur <= Choixmol2; compt2eur++)
	{
		Atomeflux >> buffeur1;
	}
	ligne1 = stoi(buffeur1);
	Molecule2 = ligne1;

	cout << "Quel est l'indice de l'atome ?" << endl;
	cin >> MultiplicateurA2;

	Resulatat2A = Molecule2 * MultiplicateurA2;

	// Atome 3
	cout << "Quel est votre Atome ? (Numéro Atomique)" << endl;
	cin >> Choixmol3;

	Atomeflux.seekg(0, ios::beg);

	for (int compt3eur = 0; compt3eur <= Choixmol3; compt3eur++)
	{
		Atomeflux >> buffeur2;
	}
	ligne2 = stoi(buffeur2);
	Molecule3 = ligne2;

	cout << "Quel est l'indice de l'atome ?" << endl;
	cin >> MultiplicateurA3;

	Resulatat2A = Molecule3 * MultiplicateurA3;

	// Atome 4
	cout << "Quel est votre Atome ? (Numéro Atomique)" << endl;
	cin >> Choixmol4;

	Atomeflux.seekg(0, ios::beg);

	for (int compt4eur = 0; compt4eur <= Choixmol4; compt4eur++)
	{
		Atomeflux >> buffeur3;
	}
	ligne3 = stoi(buffeur3);
	Molecule4 = ligne3;

	cout << "Quel est l'indice de l'atome ?" << endl;
	cin >> MultiplicateurA4;

	Resulatat2A = Molecule4 * MultiplicateurA4;

	// Atome 5
	cout << "Quel est votre Atome ? (Numéro Atomique)" << endl;
	cin >> Choixmol5;

	Atomeflux.seekg(0, ios::beg);

	for (int compt5eur = 0; compt5eur <= Choixmol5; compt4eur++)
	{
		Atomeflux >> buffeur4;
	}
	ligne4 = stoi(buffeur4);
	Molecule5 = ligne4;

	cout << "Quel est l'indice de l'atome ?" << endl;
	cin >> MultiplicateurA5;

	Resulatat2A = Molecule5 * MultiplicateurA5;

	ResultatFinal = Resulatat1A + Resulatat2A + Resulatat3A + Resulatat4A + Resulatat5A;

	cout << "La masse molaire des cinq atomes est " << ResultatFinal;

	return 0;
	
}