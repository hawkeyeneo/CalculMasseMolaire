#include "Header.h"

using namespace std;

int Calcul1A()
{
	double Choixmol1(1);
	double Molecule1(1);
	double Resultat1A(1);
	double MultiplicateurA1(4);
	ifstream Atomeflux("Atome.txt", ios::in);

	cout << "Sa fonctionne" << endl;

	cout << "Quel est votre Atome ? (Numéro Atomique)" << endl;
	cin >> Choixmol1;


	//for (int i = 0; i <= Choixmol1; i++)
	//{
		//getline(Atomeflux, Molecule1);

	//}
	for (int i = 0; i <= Choixmol1; i++)
	{
		Atomeflux >> Molecule1; // Selectionne le nombre
	}

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


	//for (int i = 0; i <= Choixmol1; i++)
	//{
		//getline(Atomeflux, Molecule1);

	//}
	for (int compteur = 0; compteur < Choixmol1; compteur++)
	{
		getline(Atomeflux, buffeur);
	}
	ligne = stoi (buffeur);
	cout << "la ligne vaut "<< ligne << endl;
	cout << "le buffeur vaut "<< buffeur << endl;
    Molecule1 = ligne;
	cout <<"la maulécule vaut "<< Molecule1 << endl;

	cout << "Quel est l'indice de l'atome ?" << endl;
	cin >> MultiplicateurA1; 
	
	Resulatat1A = Molecule1 * MultiplicateurA1;

	cout << "le resultat est " << Resulatat1A << endl;

	//Atome 2
	cout << "Quel est votre Atome ? (Numéro Atomique)" << endl;
	cin >> Choixmol2;

	Atomeflux.seekg(0, ios::beg);

	//for (int i = 0; i <= Choixmol2; i++)
	//{
		//getline(Atomeflux, Molecule2);

	//}
	for (int compt2eur = 0; compt2eur < Choixmol2; compt2eur++)
	{
		getline(Atomeflux, buffeur1);
	}
	ligne1 = stoi (buffeur1);
	cout << "la ligne vaut"<< ligne1 << endl;
	cout << "le buffeur vaut " << buffeur1 << endl;
	Molecule2 = ligne1;
	cout << "La molecule vaut "<< Molecule2 << endl;
	

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
	double Choixmol1(1);
	double Choixmol2(1);
	double Choixmol3(1);
	double Molecule1(1);
	double Molecule2(1);
	double Molecule3(1);
	double ResultatFinal(6);
	double Resulatat1A(9);
	double Resulatat2A(2);
	double Resulatat3A(5);
	double MultiplicateurA1(3);
	double MultiplicateurA2(5);
	double MultiplicateurA3(9);
	ifstream Atomeflux("Atome.txt", ios::in);

	cout << "sa fonctionne" << endl;
	// Atome1
	cout << "Quel est votre Atome ? (Numéro Atomique)" << endl;
	cin >> Choixmol1;


	//for (int i = 0; i <= Choixmol1; i++)
	//{
		//getline(Atomeflux, Molecule1);

	///}
	for (int i = 0; i <= Choixmol1; i++)
	{
		Atomeflux >> Molecule1;
	}

	cout << "Quel est l'indice de l'atome ?" << endl;
	cin >> MultiplicateurA1;

	Resulatat1A = Molecule1 * MultiplicateurA1;

	// Atome2
	cout << "Quel est votre Atome ? (Numéro Atomique)" << endl;
	cin >> Choixmol2;


	//for (int i = 0; i <= Choixmol2; i++)
	//{
		//getline(Atomeflux, Molecule2);

	//}
	for (int i = 0; i <= Choixmol2; i++)
	{
		Atomeflux >> Molecule2;
	}
	
	cout << "Quel est l'indice de l'atome ?" << endl;
	cin >> MultiplicateurA2;

	Resulatat2A = Molecule2 * MultiplicateurA2;

	// Atome 3
	cout << "Quel est votre Atome ? (Numéro Atomique)" << endl;
	cin >> Choixmol3;

	//for (int i = 0; i <= Choixmol3; i++)
	//{
		//getline(Atomeflux, Molecule3);

	//}
	for (int i = 0; i <= Choixmol3; i++)
	{
		Atomeflux >> Molecule3;
	}

	cout << "Quel est l'indice de l'atome ?" << endl;
	cin >> MultiplicateurA3;

	Resulatat2A = Molecule3 * MultiplicateurA3;

	ResultatFinal = Resulatat1A + Resulatat2A + Resulatat3A;

	cout << "La masse molaire des trois atomes est " << ResultatFinal;

	return 0;
	
}

int Calcul4A()
{
	double Choixmol1(1);
	double Choixmol2(1);
	double Choixmol3(1);
	double Choixmol4(1);
	double Molecule1(1);
	double Molecule2(1);
	double Molecule3(1);
	double Molecule4(1);
	double ResultatFinal(6);
	double Resulatat1A(9);
	double Resulatat2A(2);
	double Resulatat3A(5);
	double Resulatat4A(9);
	double MultiplicateurA1(3);
	double MultiplicateurA2(5);
	double MultiplicateurA3(9);
	double MultiplicateurA4(4);
	ifstream Atomeflux("Atome.txt", ios::in);

	cout << "sa fonctionne" << endl;
	// Atome1
	cout << "Quel est votre Atome ? (Numéro Atomique)" << endl;
	cin >> Choixmol1;


	//for (int i = 0; i <= Choixmol1; i++)
	//{
		//getline(Atomeflux, Molecule1);

	//}
	for (int i = 0; i <= Choixmol1; i++)
	{
		Atomeflux >> Molecule1;
	}

	cout << "Quel est l'indice de l'atome ?" << endl;
	cin >> MultiplicateurA1;

	Resulatat1A = Molecule1 * MultiplicateurA1;

	// Atome2
	cout << "Quel est votre Atome ? (Numéro Atomique)" << endl;
	cin >> Choixmol2;


	//for (int i = 0; i <= Choixmol2; i++)
	//{
		//getline(Atomeflux, Molecule2);

	//}
	for (int i = 0; i <= Choixmol2; i++)
	{
		Atomeflux >> Molecule2;
	}

	cout << "Quel est l'indice de l'atome ?" << endl;
	cin >> MultiplicateurA2;

	Resulatat2A = Molecule2 * MultiplicateurA2;

	// Atome 3
	cout << "Quel est votre Atome ? (Numéro Atomique)" << endl;
	cin >> Choixmol3;

	//for (int i = 0; i <= Choixmol3; i++)
	//{
		//getline(Atomeflux, Molecule3);

	//}
	for (int i = 0; i <= Choixmol3; i++)
	{
		Atomeflux >> Molecule3;
	}

	cout << "Quel est l'indice de l'atome ?" << endl;
	cin >> MultiplicateurA3;

	Resulatat2A = Molecule3 * MultiplicateurA3;

	// Atome 4
	cout << "Quel est votre Atome ? (Numéro Atomique)" << endl;
	cin >> Choixmol4;

	//for (int i = 0; i <= Choixmol4; i++)
	//{
		//getline(Atomeflux, Molecule4);

	//}
	for (int i = 0; i <= Choixmol4; i++)
	{
		Atomeflux >> Molecule4;
	}

	cout << "Quel est l'indice de l'atome ?" << endl;
	cin >> MultiplicateurA4;

	Resulatat2A = Molecule4 * MultiplicateurA4;

	ResultatFinal = Resulatat1A + Resulatat2A + Resulatat3A + Resulatat4A;

	cout << "La masse molaire des quatre atomes est " << ResultatFinal;

	return 0;
	
}

int Calcul5A()
{
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


	//for (int i = 0; i <= Choixmol1; i++)
	//{
		//getline(Atomeflux, Molecule1);

	//}
	for (int i = 0; i <= Choixmol1; i++)
	{
		Atomeflux >> Molecule1;
	}

	cout << "Quel est l'indice de l'atome ?" << endl;
	cin >> MultiplicateurA1;

	Resulatat1A = Molecule1 * MultiplicateurA1;

	// Atome2
	cout << "Quel est votre Atome ? (Numéro Atomique)" << endl;
	cin >> Choixmol2;


	//for (int i = 0; i <= Choixmol2; i++)
	//{
		//getline(Atomeflux, Molecule2);

	//}
	for (int i = 0; i <= Choixmol2; i++)
	{
		Atomeflux >> Molecule2;
	}

	cout << "Quel est l'indice de l'atome ?" << endl;
	cin >> MultiplicateurA2;

	Resulatat2A = Molecule2 * MultiplicateurA2;

	// Atome 3
	cout << "Quel est votre Atome ? (Numéro Atomique)" << endl;
	cin >> Choixmol3;

	//for (int i = 0; i <= Choixmol3; i++)
	//{
		//getline(Atomeflux, Molecule3);

	//}
	for (int i = 0; i <= Choixmol3; i++)
	{
		Atomeflux >> Molecule3;
	}

	cout << "Quel est l'indice de l'atome ?" << endl;
	cin >> MultiplicateurA3;

	Resulatat2A = Molecule3 * MultiplicateurA3;

	// Atome 4
	cout << "Quel est votre Atome ? (Numéro Atomique)" << endl;
	cin >> Choixmol4;

	//for (int i = 0; i <= Choixmol4; i++)
	//{
		//getline(Atomeflux, Molecule4);

	//}
	for (int i = 0; i <= Choixmol4; i++)
	{
		Atomeflux >> Molecule4;
	}

	cout << "Quel est l'indice de l'atome ?" << endl;
	cin >> MultiplicateurA4;

	Resulatat2A = Molecule4 * MultiplicateurA4;

	// Atome 5
	cout << "Quel est votre Atome ? (Numéro Atomique)" << endl;
	cin >> Choixmol5;

	//for (int i = 0; i <= Choixmol5; i++)
	//{
		//getline(Atomeflux, Molecule5);

	//}
	for (int i = 0; i <= Choixmol5; i++)
	{
		Atomeflux >> Molecule5;
	}

	cout << "Quel est l'indice de l'atome ?" << endl;
	cin >> MultiplicateurA5;

	Resulatat2A = Molecule5 * MultiplicateurA5;

	ResultatFinal = Resulatat1A + Resulatat2A + Resulatat3A + Resulatat4A + Resulatat5A;

	cout << "La masse molaire des cinq atomes est " << ResultatFinal;

	return 0;
	
}