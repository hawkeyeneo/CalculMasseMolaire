#include "Header.h"

using namespace std;

double Atome1()
{
	int choixAtome1(9);
	double Molecule1(5);
	const double Hydrogene(1.00794);
	const double Helium(4.002602);
	const double Lithium(6.941);
	const double Beryllium(9.0121831);
	const double Bore(10.811);
	const double Carbone(12.01074);
	const double Azote(14.0067);
	const double Oxygene(15.9994);
	const double Fluor(18.998403163);
	const double Neon(20.1797);
	const double Sodium(22.98976928);
	const double Magnesium(24.3050);
	const double Aluminium(26.9815386);
	const double Silicium(28.0855);
	const double Phosphore(30.973761998);
	const double Soufre(32.065);
	const double Chlore(35.453);
	const double Argon(39.948);
	const double Potassium(39.0983);
	const double Calcium(40.078);
	const double Scandium(44.955908);
	const double Titane(47.867);
	const double Vanadium(50.9415);
	const double Chrome(51.9961);
	const double Manganese(54.938044);
	const double Fer(55.845);
	const double Cobalt(58.933194);
	const double Nickel(58.6934);
	const double Cuivre(63.546);
	const double Zinc(65.409);
	const double Gallium(69.723);
	const double Germanium(72.64);
	const double Arsenic(74.921595);
	const double Selenium(78.971);
	const double Brome(79.904);
	const double Krypton(83.798);
	const double Rubidium(85.4678);
	const double Strontium(87.62);
	const double Yttrium(88.90584);
	const double Zirconium(91.224);
	const double Niobium(92.90637);
	const double Molybdene(95.95);
	const double Technetium(98);
	const double Ruthenium(101.07);
	const double Rhodium(102.90550);
	const double Palladium(106.42);
	const double Argent(107.8682);
	const double Cadmium(112.414);
	const double Indium(114.818);
	const double Etain(118.710);
	const double Antimoine(121.760);
	const double Tellure(127.60);
	const double Iode(126.90447);
	const double Xeon(131.293);
	const double Cesium(132.90545196);
	const double Baryum(137.327);
	const double Lanthane(138.90547);
	const double Cerium(140.116);
	const double Praseodyme(140.90766);
	const double Neodyme(144.242);
	const double Promethium(145);
	const double Samarium(150.36);
	const double Europium(151.964);
	const double Gadolinium(157.25);
	const double Terbium(158.92534);
	const double Dysprosium(162.500);
	const double Holmium(164.93033);
	const double Erbium(167.259);
	const double Thulium(168.93422);
	const double Ytterbium(173.04);
	const double Lutecium(174.9668);
	const double Hafnium(178.49);
	const double Tantale(180.94788);
	const double Tungstene(183.84);
	const double Rhenium(186.207);
	const double Osmium(190.23);
	const double Iridium(192.217);
	const double Platine(195.084);
	const double Or(196.966569);
	const double Mercure(200.59);
	const double Thallium(204.3833);
	const double Plomb(207.2);
	const double Bismuth(208.98040);
	const double Polonium(209);
	const double Astate(210);
	const double Radon(222);
	const double Francium(223);
	const double Radium(226.0254);
	const double Actinium(227);
	const double Thorium(232.0377);
	const double Protactinium(231.03588);
	const double Uranium(238.02891);
	const double Neptunium(237);
	const double Plutonium(244.06);
	const double Americium(241.06);
	const double Curium(247);
	const double Berkelium(247);
	const double Californium(251);
	const double Einsteinium(252);
	const double Fermium(257);
	const double Mendelevium(258);
	const double Nobelium(259);
	const double Lawrencium(266);
	const double Rutherfordium(267);
	const double Dubnium(268);
	const double Seaborgium(269);
	const double Bohrium(270);
	const double Hassium(277);
	const double Meitnerium(278);
	const double Darmstadtium(281);
	const double Roentgenium(282);
	const double Copernicium(285);
	const double Nihonium(286);
	const double Flerovium(289);
	const double Moscovium(289);
	const double Livermorium(293);
	const double Tennesse(294);
	const double Oganesson(294);


	cout << "Choix de votre premier atome" << endl;
	cin >> choixAtome1;

	switch (choixAtome1)
	{
	case 0:
		cout << "Il n'existe pas d'atome 0" << endl;
		break;
	case 1:
		cout << "Vous avez choisi : L'hydrogéne , la masse volumique 1,00794" << endl;
		Molecule1 = Hydrogene;
		break;
	case 2:
		cout << "Vous avez choisi : L'Hélium , la masse volumique 4,002602" << endl;
		Molecule1 = Helium;
		break;
	case 3:
		cout << "Vous avez choisi : Le Lithium , la masse volumique 6,941" << endl;
		Molecule1 = Lithium;
		break;
	case 4:
		cout << "Vous avez choisi : Le Beryllium , la masse volumique 9.0121831" << endl;
		Molecule1 = Beryllium;
		break;
	case 5:
		cout << "Vous avez choisi : Le Bore , la masse volumique 10,811" << endl;
		Molecule1 = Bore;
		break;
	case 6:
		cout << "Vous avez choisi : Le Carbone , la masse volumique 12,01074" << endl;
		Molecule1 = Carbone;
		break;
	case 7:
		cout << "Vous avez choisi : L'Azote , la masse volumique 14,0067" << endl;
		Molecule1 = Azote;
		break;
	case 8:
		cout << "Vous avez choisi : L'Oxygene , la masse volumique 15,9994" << endl;
		Molecule1 = Oxygene;
		break;
	case 9:
		cout << "Vous avez choisi : Le Fluor , la masse volumique 18,998403163" << endl;
		Molecule1 = Fluor;
		break;
	case 10:
		cout << "Vous avez choisi : Le Neon , la masse volumique 20,1797" << endl;
		Molecule1 = Neon;
		break;
	case 11:
		cout << "Vous avez choisi : Le Sodium , la masse volumique 22,98976928" << endl;
		Molecule1 = Sodium;
		break;
	case 12:
		cout << "Vous avez choisi : Le Magnesium , la masse volumique 24,3050" << endl;
		Molecule1 = Magnesium;
		break;
	case 13:
		cout << "Vous avez choisi : L'Aluminium , la masse volumique 26,9815386" << endl;
		Molecule1 = Aluminium;
		break;
	case 14:
		cout << "Vous avez choisi : Le Silicium , la masse volumique 28,0855" << endl;
		Molecule1 = Silicium;
		break;
	case 15:
		cout << "Vous avez choisi : Le Phosphore , la masse volumique 30,973761998" << endl;
		Molecule1 = Phosphore;
		break;
	case 16:
		cout << "Vous avez choisi : Le Soufre , la masse volumique 32,065" << endl;
		Molecule1 = Soufre;
		break;
	case 17:
		cout << "vous avez choisi : Le Chlore , la masse volumique 35,453" << endl;
		Molecule1 = Chlore;
		break;
	case 18:
		cout << "Vous avez choisi : L'Argon , la masse volumique 39,948" << endl;
		Molecule1 = Argon;
		break;
	case 19:
		cout << "Vous avez choisi : Le Potassium , la masse volumique 39,0983" << endl;
		Molecule1 = Potassium;
		break;
	case 20:
		cout << "Vous avez choisi : Le Calcium , la masse volumique 40,078" << endl;
		Molecule1 = Calcium;
		break;
	case 21:
		cout << "Vous avez choisi : Le Scandium , la masse volumique 44,955908" << endl;
		Molecule1 = Scandium;
		break;
	case 22:
		cout << "Vous avez choisi : Le Titane , la masse volumique 47,867" << endl;
		Molecule1 = Titane;
		break;
	case 23:
		cout << "Vous avez choisi : Le Vanadium , la masse volumique 50,9415" << endl;
		Molecule1 = Vanadium;
		break;
	case 24:
		cout << "Vous avez choisi : Le Chrome , la masse volumique 51,9961" << endl;
		Molecule1 = Chrome;
		break;
	case 25:
		cout << "Vous avez choisi : Le Manganese , la masse volumique 54,938044" << endl;
		Molecule1 = Manganese;
		break;
	case 26:
		cout << "Vous avez choisi : Le Fer , la masse volumique 55,845 " << endl;
		Molecule1 = Fer;
		break;
	case 27:
		cout << "Vous avez choisi : Le Cobalt , la masse volumique 58,933194" << endl;
		Molecule1 = Cobalt;
		break;
	case 28:
		cout << "Vous avez choisi : Le Nickel , la masse volumique 58,6934" << endl;
		Molecule1 = Nickel;
		break;
	case 29:
		cout << "Vous avez choisi : Le Cuivre , la masse volumique 63,546" << endl;
		Molecule1 = Cuivre;
		break;
	case 30:
		cout << "Vous avez choisi : Le Zinc , la masse volumique 65,409" << endl;
		Molecule1 = Zinc;
		break;
	case 31:
		cout << "Vous avez choisi : Le Gallium , la masse volumique 69,723" << endl;
		Molecule1 = Gallium;
		break;
	case 32:
		cout << "Vous avez choisi : Le Germanium , la masse volumique 72,64" << endl;
		Molecule1 = Germanium;
		break;
	case 33:
		cout << "Vous avez choisi : L'Arsenic , la masse volumique 74,921595" << endl;
		Molecule1 = Arsenic;
		break;
	case 34:
		cout << "Vous avez choisi : Le Sélénium , la masse volumique 78,971" << endl;
		Molecule1 = Selenium;
		break;
	case 35:
		cout << "Vous avez choisi : Le Brome , la masse volumique 79,904" << endl;
		Molecule1 = Brome;
		break;
	case 36:
		cout << "Vous avez choisi : Le Krypton , la masse volumique 83,798" << endl;
		Molecule1 = Krypton;
		break;
	case 37:
		cout << "Vous avez choisi : Le Rubidium , la masse volumique 85,4678" << endl;
		Molecule1 = Rubidium;
		break;
	case 38:
		cout << "Vous avez choisi : Le Strontium , la masse volumique 87,62" << endl;
		Molecule1 = Strontium;
		break;
	case 39:
		cout << "Vous avez choisi : Le Yttrium , la masse volumique 88,90584" << endl;
		Molecule1 = Yttrium;
		break;
	case 40:
		cout << "Vous avez choisi : Le Zirconium , la masse volumique 91,224" << endl;
		Molecule1 = Zirconium;
		break;
	case 41:
		cout << "Vous avez choisi : Le Niobium , la masse volumique 92,90637" << endl;
		Molecule1 = Niobium;
		break;
	case 42:
		cout << "Vous avez choisi : Le Molybdene , la masse volumique 95,95" << endl;
		Molecule1 = Molybdene;
		break;
	case 43:
		cout << "Vous avez choisi : Le Technetium , la masse volumique 98" << endl;
		Molecule1 = Technetium;
		break;
	case 44:
		cout << "Vous avez choisi : Le Ruthenium , la masse volumique 101,07" << endl;
		Molecule1 = Ruthenium;
		break;
	case 45:
		cout << "Vous avez choisi : Le Rhodium , la masse volumique 102,90550" << endl;
		Molecule1 = Rhodium;
		break;
	case 46:
		cout << "Vous avez choisi : Le Palladium , la masse volumique 106,42" << endl;
		Molecule1 = Palladium;
		break;
	case 47:
		cout << "Vous avez choisi : L'Argent , la masse volumique 107,8682" << endl;
		Molecule1 = Argent;
		break;
	case 48:
		cout << "Vous avez choisi : Le Cadmium, la masse volumique 112,414" << endl;
		Molecule1 = Cadmium;
		break;
	case 49:
		cout << "Vous avez choisi : Le Indium , la masse volumique 114,818" << endl;
		Molecule1 = Indium;
		break;
	case 50:
		cout << "Vous avez choisi : L'Etain , la masse volumique 118,710" << endl;
		Molecule1 = Etain;
		break;
	case 51:
		cout << "Vous avez choisi : L'Antimoine , la masse volumique 121,760" << endl;
		Molecule1 = Antimoine;
		break;
	case 52:
		cout << "Vous avez  choisi : La Tellure , la masse volumique 127,60" << endl;
		Molecule1 = Tellure;
		break;
	case 53:
		cout << "Vous avez choisi : La Iode , la masse volumique 126,90447" << endl;
		Molecule1 = Iode;
		break;
	case 54:
		cout << "Vous avez choisi : Le Xeon , la masse volumique 131,293" << endl;
		Molecule1 = Xeon;
		break;
	case 55:
		cout << "Vous avez choisi : Le Césium , la masse volumique 132,90545196" << endl;
		Molecule1 = Cesium;
		break;
	case 56:
		cout << "Vous avez choisi : Le Baryum , la masse volumique 137,327" << endl;
		Molecule1 = Baryum;
		break;
	case 57:
		cout << "Vous avez choisi : Le Lanthane , la masse volumique 138,90547" << endl;
		Molecule1 = Lanthane;
		break;
	case 58:
		cout << "Vous avez choisi : Le Cerium , la masse volumique 140,116" << endl;
		Molecule1 = Cerium;
		break;
	case 59:
		cout << "Vous avez choisi : Le Praseodyme , la masse volumique 140,90766" << endl;
		Molecule1 = Praseodyme;
		break;
	case 60:
		cout << "Vous avez choisi : Le Neodyme , la masse volumique 144,242" << endl;
		Molecule1 = Neodyme;
		break;
	case 61:
		cout << "Vous avez choisi : Le Prométhium , la masse volumique 145" << endl;
		Molecule1 = Promethium;
		break;
	case 62:
		cout << "Vous avez choisi : Le Samarium , la masse volumique 150,36" << endl;
		Molecule1 = Samarium;
		break;
	case 63:
		cout << "Vous avez choisi : Le Europium , la masse volumique 151,964" << endl;
		Molecule1 = Europium;
		break;
	case 64:
		cout << "Vous avez choisi : Le Gadolinium , la masse volumique 157,25" << endl;
		Molecule1 = Gadolinium;
		break;
	case 65:
		cout << "Vous avez choisi : Le Terbium , la masse volumique 158,92534" << endl;
		Molecule1 = Terbium;
		break;
	case 66:
		cout << " Vous avez choisi : Le Dysprosium , la masse volumique 162,500" << endl;
		Molecule1 = Dysprosium;
		break;
	case 67:
		cout << "Vous avez choisi : Le Holmium , la masse volumique 164,93033" << endl;
		Molecule1 = Holmium;
		break;
	case 68:
		cout << "Vous avez choisi : L'Erbium , la masse volumique 167,259" << endl;
		Molecule1 = Holmium;
		break;
	case 69:
		cout << "Vous avez choisi : Le Thulium , la masse volumique 168,93422" << endl;
		Molecule1 = Thulium;
		break;
	case 70:
		cout << "Vous avez choisi : Le Ytterbium , la masse volumique 173,04" << endl;
		Molecule1 = Ytterbium;
		break;
	case 71:
		cout << "Vous avez choisi : Le Lutecium , la masse volumique 174,9668" << endl;
		Molecule1 = Lutecium;
		break;
	case 72:
		cout << "Vous avez choisi : Le Hafnium , la masse volumique 174,9668" << endl;
		Molecule1 = Hafnium;
		break;
	case 73:
		cout << "Vous avez choisi : Le Tantale , la masse volumique 180,94788" << endl;
		Molecule1 = Tantale;
		break;
	case 74:
		cout << "Vous avez choisi : Le Tungstène , la masse volumique 183,84" << endl;
		Molecule1 = Tungstene;
		break;
	case 75:
		cout << "Vous avez choisi : Le Rhenium , la masse volumique 186,207" << endl;
		Molecule1 = Rhenium;
		break;
	case 76:
		cout << "Vous avez choisi : L'Osmium , la masse volumique 190,23" << endl;
		Molecule1 = Osmium;
		break;
	case 77:
		cout << "Vous avez choisi : L'Iridium , la masse volumique 192,217" << endl;
		Molecule1 = Iridium;
		break;
	case 78:
		cout << "Vous avez choisi : Le Platine , la masse volumique 195,084" << endl;
		Molecule1 = Platine;
		break;
	case 79:
		cout << "Vous avez choisi : L'Or , la masse volumique 196,966569" << endl;
		Molecule1 = Or;
		break;
	case 80:
		cout << "Vous avez choisi : Le Mercure , la masse volumique 200,59" << endl;
		Molecule1 = Mercure;
		break;
	case 81:
		cout << "Vous avez choisi : Le Thallium , la masse volumique 204,3833" << endl;
		Molecule1 = Thallium;
		break;
	case 82:
		cout << "Vous avez choisi : Le Plomb , la masse volumique 207,2" << endl;
		Molecule1 = Plomb;
		break;
	case 83:
		cout << "Vous avez choisi : Le Bismuth , la masse volumique 208,98040" << endl;
		Molecule1 = Bismuth;
		break;
	case 84:
		cout << "Vous avez choisi : Le Polonium , la masse volumique 209" << endl;
		Molecule1 = Polonium;
		break;
	case 85:
		cout << "Vous avez choisi : L'Astate , la masse volumique 210" << endl;
		Molecule1 = Astate;
		break;
	case 86:
		cout << "Vous avez choisi : Le Radon , la masse volumique 222" << endl;
		Molecule1 = Radon;
		break;
	case 87:
		cout << "Vous avez choisi : Le Francium , la masse volumique 223" << endl;
		Molecule1 = Francium;
		break;
	case 88:
		cout << "Vous avez choisi : Le Radium , la masse volumique 226,0254" << endl;
		Molecule1 = Radium;
		break;
	case 89:
		cout << "Vous avez choisi : L'Actinium , la masse volumique 227" << endl;
		Molecule1 = Actinium;
		break;
	case 90:
		cout << "Vous avez choisi : Le Thorium , la masse volumique 232,0377" << endl;
		Molecule1 = Thorium;
		break;
	case 91:
		cout << "Vous avez choisi : Le Protactinium , la masse volumique 231,03588" << endl;
		Molecule1 = Protactinium;
		break;
	case 92:
		cout << "Vous avez choisi : L'Uranium , la masse volumique 238,02891" << endl;
		Molecule1 = Uranium;
		break;
	case 93:
		cout << "Vous avez choisi : Le Neptunium , la masse volumique 237" << endl;
		Molecule1 = Neptunium;
		break;
	case 94:
		cout << "Vous avez choisi : Le Plutonium , la masse volumique 244,06" << endl;
		Molecule1 = Plutonium;
		break;
	case 95:
		cout << "Vous avez choisi : L'Americium , la masse volumique 241,06" << endl;
		Molecule1 = Americium;
		break;
	case 96:
		cout << "Vous avez choisi : Le Curium , la masse volumique 247" << endl;
		Molecule1 = Curium;
		break;
	case 97:
		cout << "Vous avez choisi : Le Berkelium , la masse volumique 247" << endl;
		Molecule1 = Berkelium;
		break; 
	case 98:
		cout << "Vous avez choisi : Le Californium , la masse volumique 251" << endl;
		Molecule1 = Californium;
		break;
	case 99:
		cout << "Vous avez choisi : Le Einsteinium , la masse volumique 252" << endl;
		Molecule1 = Einsteinium;
		break;
	case 100:
		cout << "Vous avez choisi : Le Fermium , la masse volumique 257" << endl;
		Molecule1 = Fermium;
		break;
	case 101:
		cout << "Vous avez choisi : Le Mendelevium , la masse volumique 258" << endl;
		Molecule1 = Mendelevium;
		break;
	case 102:
		cout << "Vous avez choisi : Le Nobelium , la masse volumique 259" << endl;
		Molecule1 = Nobelium;
		break;
	case 103:
		cout << "Vous avez choisi : Le Lawrencium , la masse volumique 266" << endl;
		Molecule1 = Lawrencium;
		break;
	case 104:
		cout << "Vous avez choisi : Le Rutherfordium , la masse columique 267" << endl;
		Molecule1 = Rutherfordium;
		break;
	case 105:
		cout << "Vous avez choisi : Le Dubnium , la masse volumique 268" << endl;
		Molecule1 = Dubnium;
		break;
	case 106:
		cout << "Vous avez choisi : Le Seaborgium , la masse volumique 269" << endl;
		Molecule1 = Seaborgium;
		break;
	case 107:
		cout << "Vous avez choisi : Le Bohrium , la masse volumique 270" << endl;
		Molecule1 = Bohrium;
		break;
	case 108:
		cout << "Vous avez choisi : Le Hassium , la masse volumique 277" << endl;
		Molecule1 = Hassium;
		break;
	case 109:
		cout << "Vous avez choisi : Le Meitnerium , la masse volumique 278" << endl;
		Molecule1 = Meitnerium;
		break;
	case 110:
		cout << "Vous avez choisi : Le Darmstadtium , la masse volumique 281" << endl;
		Molecule1 = Darmstadtium;
		break;
	case 111:
		cout << "Vous avez choisi : Le Roentgenium , la masse volumique 282" << endl;
		Molecule1 = Roentgenium;
		break;
	case 112:
		cout << "Vous avez choisi : Le Copernicium , la masse volumique 285" << endl;
		Molecule1 = Copernicium;
		break;
	case 113:
		cout << "Vous avez choisi : Le Nihonium , la masse volumique 286" << endl;
		Molecule1 = Nihonium;
		break;
	case 114:
		cout << "Vous avez choisi : Le Flerovium , la masse volumique 289" << endl;
		Molecule1 = Flerovium;
		break;
	case 115:
		cout << "Vous avez choisi : Le Moscovium , la masse volumique 289" << endl;
		Molecule1 = Moscovium;
		break;
	case 116:
		cout << "Vous avez choisi : Le Livermorium , la masse volumique 293" << endl;
		Molecule1 = Livermorium;
		break;
	case 117: 
		cout << "Vous avez choisi : Le Tennesse , la masse volumique 294" << endl;
		Molecule1 = Tennesse;
		break;
	case 118:
		cout << "Vous avez choisi : Le Oganesson , la masse volumique 294" << endl;
		Molecule1 = Oganesson;
		break;
	default:
		cout << "Retour au menu principal" << endl;
		break;
	}

	return Molecule1;

}

double Atome2()
{
	int choixAtome2(9);
	double Molecule2(5);
	const double Hydrogene(1.00794);
	const double Helium(4.002602);
	const double Lithium(6.941);
	const double Beryllium(9.0121831);
	const double Bore(10.811);
	const double Carbone(12.01074);
	const double Azote(14.0067);
	const double Oxygene(15.9994);
	const double Fluor(18.998403163);
	const double Neon(20.1797);
	const double Sodium(22.98976928);
	const double Magnesium(24.3050);
	const double Aluminium(26.9815386);
	const double Silicium(28.0855);
	const double Phosphore(30.973761998);
	const double Soufre(32.065);
	const double Chlore(35.453);
	const double Argon(39.948);
	const double Potassium(39.0983);
	const double Calcium(40.078);
	const double Scandium(44.955908);
	const double Titane(47.867);
	const double Vanadium(50.9415);
	const double Chrome(51.9961);
	const double Manganese(54.938044);
	const double Fer(55.845);
	const double Cobalt(58.933194);
	const double Nickel(58.6934);
	const double Cuivre(63.546);
	const double Zinc(65.409);
	const double Gallium(69.723);
	const double Germanium(72.64);
	const double Arsenic(74.921595);
	const double Selenium(78.971);
	const double Brome(79.904);
	const double Krypton(83.798);
	const double Rubidium(85.4678);
	const double Strontium(87.62);
	const double Yttrium(88.90584);
	const double Zirconium(91.224);
	const double Niobium(92.90637);
	const double Molybdene(95.95);
	const double Technetium(98);
	const double Ruthenium(101.07);
	const double Rhodium(102.90550);
	const double Palladium(106.42);
	const double Argent(107.8682);
	const double Cadmium(112.414);
	const double Indium(114.818);
	const double Etain(118.710);
	const double Antimoine(121.760);
	const double Tellure(127.60);
	const double Iode(126.90447);
	const double Xeon(131.293);
	const double Cesium(132.90545196);
	const double Baryum(137.327);
	const double Lanthane(138.90547);
	const double Cerium(140.116);
	const double Praseodyme(140.90766);
	const double Neodyme(144.242);
	const double Promethium(145);
	const double Samarium(150.36);
	const double Europium(151.964);
	const double Gadolinium(157.25);
	const double Terbium(158.92534);
	const double Dysprosium(162.500);
	const double Holmium(164.93033);
	const double Erbium(167.259);
	const double Thulium(168.93422);
	const double Ytterbium(173.04);
	const double Lutecium(174.9668);
	const double Hafnium(178.49);
	const double Tantale(180.94788);
	const double Tungstene(183.84);
	const double Rhenium(186.207);
	const double Osmium(190.23);
	const double Iridium(192.217);
	const double Platine(195.084);
	const double Or(196.966569);
	const double Mercure(200.59);
	const double Thallium(204.3833);
	const double Plomb(207.2);
	const double Bismuth(208.98040);
	const double Polonium(209);
	const double Astate(210);
	const double Radon(222);
	const double Francium(223);
	const double Radium(226.0254);
	const double Actinium(227);
	const double Thorium(232.0377);
	const double Protactinium(231.03588);
	const double Uranium(238.02891);
	const double Neptunium(237);
	const double Plutonium(244.06);
	const double Americium(241.06);
	const double Curium(247);
	const double Berkelium(247);
	const double Californium(251);
	const double Einsteinium(252);
	const double Fermium(257);
	const double Mendelevium(258);
	const double Nobelium(259);
	const double Lawrencium(266);
	const double Rutherfordium(267);
	const double Dubnium(268);
	const double Seaborgium(269);
	const double Bohrium(270);
	const double Hassium(277);
	const double Meitnerium(278);
	const double Darmstadtium(281);
	const double Roentgenium(282);
	const double Copernicium(285);
	const double Nihonium(286);
	const double Flerovium(289);
	const double Moscovium(289);
	const double Livermorium(293);
	const double Tennesse(294);
	const double Oganesson(294);


	cout << "Choix de votre second atome" << endl;
	cin >> choixAtome2;

	switch (choixAtome2)
	{
	case 0:
		cout << "Il n'existe pas d'atome 0" << endl;
		break;
	case 1:
		cout << "Vous avez choisi : L'hydrogéne , la masse volumique 1,00794" << endl;
		Molecule2 = Hydrogene;
		break;
	case 2:
		cout << "Vous avez choisi : L'Hélium , la masse volumique 4,002602" << endl;
		Molecule2 = Helium;
		break;
	case 3:
		cout << "Vous avez choisi : Le Lithium , la masse volumique 6,941" << endl;
		Molecule2 = Lithium;
		break;
	case 4:
		cout << "Vous avez choisi : Le Beryllium , la masse volumique 9.0121831" << endl;
		Molecule2 = Beryllium;
		break;
	case 5:
		cout << "Vous avez choisi : Le Bore , la masse volumique 10,811" << endl;
		Molecule2 = Bore;
		break;
	case 6:
		cout << "Vous avez choisi : Le Carbone , la masse volumique 12,01074" << endl;
		Molecule2 = Carbone;
		break;
	case 7:
		cout << "Vous avez choisi : L'Azote , la masse volumique 14,0067" << endl;
		Molecule2 = Azote;
		break;
	case 8:
		cout << "Vous avez choisi : L'Oxygene , la masse volumique 15,9994" << endl;
		Molecule2 = Oxygene;
		break;
	case 9:
		cout << "Vous avez choisi : Le Fluor , la masse volumique 18,998403163" << endl;
		Molecule2 = Fluor;
		break;
	case 10:
		cout << "Vous avez choisi : Le Neon , la masse volumique 20,1797" << endl;
		Molecule2 = Neon;
		break;
	case 11:
		cout << "Vous avez choisi : Le Sodium , la masse volumique 22,98976928" << endl;
		Molecule2 = Sodium;
		break;
	case 12:
		cout << "Vous avez choisi : Le Magnesium , la masse volumique 24,3050" << endl;
		Molecule2 = Magnesium;
		break;
	case 13:
		cout << "Vous avez choisi : L'Aluminium , la masse volumique 26,9815386" << endl;
		Molecule2 = Aluminium;
		break;
	case 14:
		cout << "Vous avez choisi : Le Silicium , la masse volumique 28,0855" << endl;
		Molecule2 = Silicium;
		break;
	case 15:
		cout << "Vous avez choisi : Le Phosphore , la masse volumique 30,973761998" << endl;
		Molecule2 = Phosphore;
		break;
	case 16:
		cout << "Vous avez choisi : Le Soufre , la masse volumique 32,065" << endl;
		Molecule2 = Soufre;
		break;
	case 17:
		cout << "vous avez choisi : Le Chlore , la masse volumique 35,453" << endl;
		Molecule2 = Chlore;
		break;
	case 18:
		cout << "Vous avez choisi : L'Argon , la masse volumique 39,948" << endl;
		Molecule2 = Argon;
		break;
	case 19:
		cout << "Vous avez choisi : Le Potassium , la masse volumique 39,0983" << endl;
		Molecule2 = Potassium;
		break;
	case 20:
		cout << "Vous avez choisi : Le Calcium , la masse volumique 40,078" << endl;
		Molecule2 = Calcium;
		break;
	case 21:
		cout << "Vous avez choisi : Le Scandium , la masse volumique 44,955908" << endl;
		Molecule2 = Scandium;
		break;
	case 22:
		cout << "Vous avez choisi : Le Titane , la masse volumique 47,867" << endl;
		Molecule2 = Titane;
		break;
	case 23:
		cout << "Vous avez choisi : Le Vanadium , la masse volumique 50,9415" << endl;
		Molecule2 = Vanadium;
		break;
	case 24:
		cout << "Vous avez choisi : Le Chrome , la masse volumique 51,9961" << endl;
		Molecule2 = Chrome;
		break;
	case 25:
		cout << "Vous avez choisi : Le Manganese , la masse volumique 54,938044" << endl;
		Molecule2 = Manganese;
		break;
	case 26:
		cout << "Vous avez choisi : Le Fer , la masse volumique 55,845 " << endl;
		Molecule2 = Fer;
		break;
	case 27:
		cout << "Vous avez choisi : Le Cobalt , la masse volumique 58,933194" << endl;
		Molecule2 = Cobalt;
		break;
	case 28:
		cout << "Vous avez choisi : Le Nickel , la masse volumique 58,6934" << endl;
		Molecule2 = Nickel;
		break;
	case 29:
		cout << "Vous avez choisi : Le Cuivre , la masse volumique 63,546" << endl;
		Molecule2 = Cuivre;
		break;
	case 30:
		cout << "Vous avez choisi : Le Zinc , la masse volumique 65,409" << endl;
		Molecule2 = Zinc;
		break;
	case 31:
		cout << "Vous avez choisi : Le Gallium , la masse volumique 69,723" << endl;
		Molecule2 = Gallium;
		break;
	case 32:
		cout << "Vous avez choisi : Le Germanium , la masse volumique 72,64" << endl;
		Molecule2 = Germanium;
		break;
	case 33:
		cout << "Vous avez choisi : L'Arsenic , la masse volumique 74,921595" << endl;
		Molecule2 = Arsenic;
		break;
	case 34:
		cout << "Vous avez choisi : Le Sélénium , la masse volumique 78,971" << endl;
		Molecule2 = Selenium;
		break;
	case 35:
		cout << "Vous avez choisi : Le Brome , la masse volumique 79,904" << endl;
		Molecule2 = Brome;
		break;
	case 36:
		cout << "Vous avez choisi : Le Krypton , la masse volumique 83,798" << endl;
		Molecule2 = Krypton;
		break;
	case 37:
		cout << "Vous avez choisi : Le Rubidium , la masse volumique 85,4678" << endl;
		Molecule2 = Rubidium;
		break;
	case 38:
		cout << "Vous avez choisi : Le Strontium , la masse volumique 87,62" << endl;
		Molecule2 = Strontium;
		break;
	case 39:
		cout << "Vous avez choisi : Le Yttrium , la masse volumique 88,90584" << endl;
		Molecule2 = Yttrium;
		break;
	case 40:
		cout << "Vous avez choisi : Le Zirconium , la masse volumique 91,224" << endl;
		Molecule2 = Zirconium;
		break;
	case 41:
		cout << "Vous avez choisi : Le Niobium , la masse volumique 92,90637" << endl;
		Molecule2 = Niobium;
		break;
	case 42:
		cout << "Vous avez choisi : Le Molybdene , la masse volumique 95,95" << endl;
		Molecule2 = Molybdene;
		break;
	case 43:
		cout << "Vous avez choisi : Le Technetium , la masse volumique 98" << endl;
		Molecule2 = Technetium;
		break;
	case 44:
		cout << "Vous avez choisi : Le Ruthenium , la masse volumique 101,07" << endl;
		Molecule2 = Ruthenium;
		break;
	case 45:
		cout << "Vous avez choisi : Le Rhodium , la masse volumique 102,90550" << endl;
		Molecule2 = Rhodium;
		break;
	case 46:
		cout << "Vous avez choisi : Le Palladium , la masse volumique 106,42" << endl;
		Molecule2 = Palladium;
		break;
	case 47:
		cout << "Vous avez choisi : L'Argent , la masse volumique 107,8682" << endl;
		Molecule2 = Argent;
		break;
	case 48:
		cout << "Vous avez choisi : Le Cadmium, la masse volumique 112,414" << endl;
		Molecule2 = Cadmium;
		break;
	case 49:
		cout << "Vous avez choisi : Le Indium , la masse volumique 114,818" << endl;
		Molecule2 = Indium;
		break;
	case 50:
		cout << "Vous avez choisi : L'Etain , la masse volumique 118,710" << endl;
		Molecule2 = Etain;
		break;
	case 51:
		cout << "Vous avez choisi : L'Antimoine , la masse volumique 121,760" << endl;
		Molecule2 = Antimoine;
		break;
	case 52:
		cout << "Vous avez  choisi : La Tellure , la masse volumique 127,60" << endl;
		Molecule2 = Tellure;
		break;
	case 53:
		cout << "Vous avez choisi : La Iode , la masse volumique 126,90447" << endl;
		Molecule2 = Iode;
		break;
	case 54:
		cout << "Vous avez choisi : Le Xeon , la masse volumique 131,293" << endl;
		Molecule2 = Xeon;
		break;
	case 55:
		cout << "Vous avez choisi : Le Césium , la masse volumique 132,90545196" << endl;
		Molecule2 = Cesium;
		break;
	case 56:
		cout << "Vous avez choisi : Le Baryum , la masse volumique 137,327" << endl;
		Molecule2 = Baryum;
		break;
	case 57:
		cout << "Vous avez choisi : Le Lanthane , la masse volumique 138,90547" << endl;
		Molecule2 = Lanthane;
		break;
	case 58:
		cout << "Vous avez choisi : Le Cerium , la masse volumique 140,116" << endl;
		Molecule2 = Cerium;
		break;
	case 59:
		cout << "Vous avez choisi : Le Praseodyme , la masse volumique 140,90766" << endl;
		Molecule2 = Praseodyme;
		break;
	case 60:
		cout << "Vous avez choisi : Le Neodyme , la masse volumique 144,242" << endl;
		Molecule2 = Neodyme;
		break;
	case 61:
		cout << "Vous avez choisi : Le Prométhium , la masse volumique 145" << endl;
		Molecule2 = Promethium;
		break;
	case 62:
		cout << "Vous avez choisi : Le Samarium , la masse volumique 150,36" << endl;
		Molecule2 = Samarium;
		break;
	case 63:
		cout << "Vous avez choisi : Le Europium , la masse volumique 151,964" << endl;
		Molecule2 = Europium;
		break;
	case 64:
		cout << "Vous avez choisi : Le Gadolinium , la masse volumique 157,25" << endl;
		Molecule2 = Gadolinium;
		break;
	case 65:
		cout << "Vous avez choisi : Le Terbium , la masse volumique 158,92534" << endl;
		Molecule2 = Terbium;
		break;
	case 66:
		cout << " Vous avez choisi : Le Dysprosium , la masse volumique 162,500" << endl;
		Molecule2 = Dysprosium;
		break;
	case 67:
		cout << "Vous avez choisi : Le Holmium , la masse volumique 164,93033" << endl;
		Molecule2 = Holmium;
		break;
	case 68:
		cout << "Vous avez choisi : L'Erbium , la masse volumique 167,259" << endl;
		Molecule2 = Holmium;
		break;
	case 69:
		cout << "Vous avez choisi : Le Thulium , la masse volumique 168,93422" << endl;
		Molecule2 = Thulium;
		break;
	case 70:
		cout << "Vous avez choisi : Le Ytterbium , la masse volumique 173,04" << endl;
		Molecule2 = Ytterbium;
		break;
	case 71:
		cout << "Vous avez choisi : Le Lutecium , la masse volumique 174,9668" << endl;
		Molecule2 = Lutecium;
		break;
	case 72:
		cout << "Vous avez choisi : Le Hafnium , la masse volumique 174,9668" << endl;
		Molecule2 = Hafnium;
		break;
	case 73:
		cout << "Vous avez choisi : Le Tantale , la masse volumique 180,94788" << endl;
		Molecule2 = Tantale;
		break;
	case 74:
		cout << "Vous avez choisi : Le Tungstène , la masse volumique 183,84" << endl;
		Molecule2 = Tungstene;
		break;
	case 75:
		cout << "Vous avez choisi : Le Rhenium , la masse volumique 186,207" << endl;
		Molecule2 = Rhenium;
		break;
	case 76:
		cout << "Vous avez choisi : L'Osmium , la masse volumique 190,23" << endl;
		Molecule2 = Osmium;
		break;
	case 77:
		cout << "Vous avez choisi : L'Iridium , la masse volumique 192,217" << endl;
		Molecule2 = Iridium;
		break;
	case 78:
		cout << "Vous avez choisi : Le Platine , la masse volumique 195,084" << endl;
		Molecule2 = Platine;
		break;
	case 79:
		cout << "Vous avez choisi : L'Or , la masse volumique 196,966569" << endl;
		Molecule2 = Or;
		break;
	case 80:
		cout << "Vous avez choisi : Le Mercure , la masse volumique 200,59" << endl;
		Molecule2 = Mercure;
		break;
	case 81:
		cout << "Vous avez choisi : Le Thallium , la masse volumique 204,3833" << endl;
		Molecule2 = Thallium;
		break;
	case 82:
		cout << "Vous avez choisi : Le Plomb , la masse volumique 207,2" << endl;
		Molecule2 = Plomb;
		break;
	case 83:
		cout << "Vous avez choisi : Le Bismuth , la masse volumique 208,98040" << endl;
		Molecule2 = Bismuth;
		break;
	case 84:
		cout << "Vous avez choisi : Le Polonium , la masse volumique 209" << endl;
		Molecule2 = Polonium;
		break;
	case 85:
		cout << "Vous avez choisi : L'Astate , la masse volumique 210" << endl;
		Molecule2 = Astate;
		break;
	case 86:
		cout << "Vous avez choisi : Le Radon , la masse volumique 222" << endl;
		Molecule2 = Radon;
		break;
	case 87:
		cout << "Vous avez choisi : Le Francium , la masse volumique 223" << endl;
		Molecule2 = Francium;
		break;
	case 88:
		cout << "Vous avez choisi : Le Radium , la masse volumique 226,0254" << endl;
		Molecule2 = Radium;
		break;
	case 89:
		cout << "Vous avez choisi : L'Actinium , la masse volumique 227" << endl;
		Molecule2 = Actinium;
		break;
	case 90:
		cout << "Vous avez choisi : Le Thorium , la masse volumique 232,0377" << endl;
		Molecule2 = Thorium;
		break;
	case 91:
		cout << "Vous avez choisi : Le Protactinium , la masse volumique 231,03588" << endl;
		Molecule2 = Protactinium;
		break;
	case 92:
		cout << "Vous avez choisi : L'Uranium , la masse volumique 238,02891" << endl;
		Molecule2 = Uranium;
		break;
	case 93:
		cout << "Vous avez choisi : Le Neptunium , la masse volumique 237" << endl;
		Molecule2 = Neptunium;
		break;
	case 94:
		cout << "Vous avez choisi : Le Plutonium , la masse volumique 244,06" << endl;
		Molecule2 = Plutonium;
		break;
	case 95:
		cout << "Vous avez choisi : L'Americium , la masse volumique 241,06" << endl;
		Molecule2 = Americium;
		break;
	case 96:
		cout << "Vous avez choisi : Le Curium , la masse volumique 247" << endl;
		Molecule2 = Curium;
		break;
	case 97:
		cout << "Vous avez choisi : Le Berkelium , la masse volumique 247" << endl;
		Molecule2 = Berkelium;
		break;
	case 98:
		cout << "Vous avez choisi : Le Californium , la masse volumique 251" << endl;
		Molecule2 = Californium;
		break;
	case 99:
		cout << "Vous avez choisi : Le Einsteinium , la masse volumique 252" << endl;
		Molecule2 = Einsteinium;
		break;
	case 100:
		cout << "Vous avez choisi : Le Fermium , la masse volumique 257" << endl;
		Molecule2 = Fermium;
		break;
	case 101:
		cout << "Vous avez choisi : Le Mendelevium , la masse volumique 258" << endl;
		Molecule2 = Mendelevium;
		break;
	case 102:
		cout << "Vous avez choisi : Le Nobelium , la masse volumique 259" << endl;
		Molecule2 = Nobelium;
		break;
	case 103:
		cout << "Vous avez choisi : Le Lawrencium , la masse volumique 266" << endl;
		Molecule2 = Lawrencium;
		break;
	case 104:
		cout << "Vous avez choisi : Le Rutherfordium , la masse columique 267" << endl;
		Molecule2 = Rutherfordium;
		break;
	case 105:
		cout << "Vous avez choisi : Le Dubnium , la masse volumique 268" << endl;
		Molecule2 = Dubnium;
		break;
	case 106:
		cout << "Vous avez choisi : Le Seaborgium , la masse volumique 269" << endl;
		Molecule2 = Seaborgium;
		break;
	case 107:
		cout << "Vous avez choisi : Le Bohrium , la masse volumique 270" << endl;
		Molecule2 = Bohrium;
		break;
	case 108:
		cout << "Vous avez choisi : Le Hassium , la masse volumique 277" << endl;
		Molecule2 = Hassium;
		break;
	case 109:
		cout << "Vous avez choisi : Le Meitnerium , la masse volumique 278" << endl;
		Molecule2 = Meitnerium;
		break;
	case 110:
		cout << "Vous avez choisi : Le Darmstadtium , la masse volumique 281" << endl;
		Molecule2 = Darmstadtium;
		break;
	case 111:
		cout << "Vous avez choisi : Le Roentgenium , la masse volumique 282" << endl;
		Molecule2 = Roentgenium;
		break;
	case 112:
		cout << "Vous avez choisi : Le Copernicium , la masse volumique 285" << endl;
		Molecule2 = Copernicium;
		break;
	case 113:
		cout << "Vous avez choisi : Le Nihonium , la masse volumique 286" << endl;
		Molecule2 = Nihonium;
		break;
	case 114:
		cout << "Vous avez choisi : Le Flerovium , la masse volumique 289" << endl;
		Molecule2 = Flerovium;
		break;
	case 115:
		cout << "Vous avez choisi : Le Moscovium , la masse volumique 289" << endl;
		Molecule2 = Moscovium;
		break;
	case 116:
		cout << "Vous avez choisi : Le Livermorium , la masse volumique 293" << endl;
		Molecule2 = Livermorium;
		break;
	case 117:
		cout << "Vous avez choisi : Le Tennesse , la masse volumique 294" << endl;
		Molecule2 = Tennesse;
		break;
	case 118:
		cout << "Vous avez choisi : Le Oganesson , la masse volumique 294" << endl;
		Molecule2 = Oganesson;
		break;
	default:
		cout << "Retour au menu principal" << endl;
		break;
	}

	return Molecule2;

}

double Atome3()
{
	int choixAtome3(9);
	double Molecule3(5);
	const double Hydrogene(1.00794);
	const double Helium(4.002602);
	const double Lithium(6.941);
	const double Beryllium(9.0121831);
	const double Bore(10.811);
	const double Carbone(12.01074);
	const double Azote(14.0067);
	const double Oxygene(15.9994);
	const double Fluor(18.998403163);
	const double Neon(20.1797);
	const double Sodium(22.98976928);
	const double Magnesium(24.3050);
	const double Aluminium(26.9815386);
	const double Silicium(28.0855);
	const double Phosphore(30.973761998);
	const double Soufre(32.065);
	const double Chlore(35.453);
	const double Argon(39.948);
	const double Potassium(39.0983);
	const double Calcium(40.078);
	const double Scandium(44.955908);
	const double Titane(47.867);
	const double Vanadium(50.9415);
	const double Chrome(51.9961);
	const double Manganese(54.938044);
	const double Fer(55.845);
	const double Cobalt(58.933194);
	const double Nickel(58.6934);
	const double Cuivre(63.546);
	const double Zinc(65.409);
	const double Gallium(69.723);
	const double Germanium(72.64);
	const double Arsenic(74.921595);
	const double Selenium(78.971);
	const double Brome(79.904);
	const double Krypton(83.798);
	const double Rubidium(85.4678);
	const double Strontium(87.62);
	const double Yttrium(88.90584);
	const double Zirconium(91.224);
	const double Niobium(92.90637);
	const double Molybdene(95.95);
	const double Technetium(98);
	const double Ruthenium(101.07);
	const double Rhodium(102.90550);
	const double Palladium(106.42);
	const double Argent(107.8682);
	const double Cadmium(112.414);
	const double Indium(114.818);
	const double Etain(118.710);
	const double Antimoine(121.760);
	const double Tellure(127.60);
	const double Iode(126.90447);
	const double Xeon(131.293);
	const double Cesium(132.90545196);
	const double Baryum(137.327);
	const double Lanthane(138.90547);
	const double Cerium(140.116);
	const double Praseodyme(140.90766);
	const double Neodyme(144.242);
	const double Promethium(145);
	const double Samarium(150.36);
	const double Europium(151.964);
	const double Gadolinium(157.25);
	const double Terbium(158.92534);
	const double Dysprosium(162.500);
	const double Holmium(164.93033);
	const double Erbium(167.259);
	const double Thulium(168.93422);
	const double Ytterbium(173.04);
	const double Lutecium(174.9668);
	const double Hafnium(178.49);
	const double Tantale(180.94788);
	const double Tungstene(183.84);
	const double Rhenium(186.207);
	const double Osmium(190.23);
	const double Iridium(192.217);
	const double Platine(195.084);
	const double Or(196.966569);
	const double Mercure(200.59);
	const double Thallium(204.3833);
	const double Plomb(207.2);
	const double Bismuth(208.98040);
	const double Polonium(209);
	const double Astate(210);
	const double Radon(222);
	const double Francium(223);
	const double Radium(226.0254);
	const double Actinium(227);
	const double Thorium(232.0377);
	const double Protactinium(231.03588);
	const double Uranium(238.02891);
	const double Neptunium(237);
	const double Plutonium(244.06);
	const double Americium(241.06);
	const double Curium(247);
	const double Berkelium(247);
	const double Californium(251);
	const double Einsteinium(252);
	const double Fermium(257);
	const double Mendelevium(258);
	const double Nobelium(259);
	const double Lawrencium(266);
	const double Rutherfordium(267);
	const double Dubnium(268);
	const double Seaborgium(269);
	const double Bohrium(270);
	const double Hassium(277);
	const double Meitnerium(278);
	const double Darmstadtium(281);
	const double Roentgenium(282);
	const double Copernicium(285);
	const double Nihonium(286);
	const double Flerovium(289);
	const double Moscovium(289);
	const double Livermorium(293);
	const double Tennesse(294);
	const double Oganesson(294);


	cout << "Choix de votre troisieme atome" << endl;
	cin >> choixAtome3;

	switch (choixAtome3)
	{
	case 0:
		cout << "Il n'existe pas d'atome 0" << endl;
		break;
	case 1:
		cout << "Vous avez choisi : L'hydrogéne , la masse volumique 1,00794" << endl;
		Molecule3 = Hydrogene;
		break;
	case 2:
		cout << "Vous avez choisi : L'Hélium , la masse volumique 4,002602" << endl;
		Molecule3 = Helium;
		break;
	case 3:
		cout << "Vous avez choisi : Le Lithium , la masse volumique 6,941" << endl;
		Molecule3 = Lithium;
		break;
	case 4:
		cout << "Vous avez choisi : Le Beryllium , la masse volumique 9.0121831" << endl;
		Molecule3 = Beryllium;
		break;
	case 5:
		cout << "Vous avez choisi : Le Bore , la masse volumique 10,811" << endl;
		Molecule3 = Bore;
		break;
	case 6:
		cout << "Vous avez choisi : Le Carbone , la masse volumique 12,01074" << endl;
		Molecule3 = Carbone;
		break;
	case 7:
		cout << "Vous avez choisi : L'Azote , la masse volumique 14,0067" << endl;
		Molecule3 = Azote;
		break;
	case 8:
		cout << "Vous avez choisi : L'Oxygene , la masse volumique 15,9994" << endl;
		Molecule3 = Oxygene;
		break;
	case 9:
		cout << "Vous avez choisi : Le Fluor , la masse volumique 18,998403163" << endl;
		Molecule3 = Fluor;
		break;
	case 10:
		cout << "Vous avez choisi : Le Neon , la masse volumique 20,1797" << endl;
		Molecule3 = Neon;
		break;
	case 11:
		cout << "Vous avez choisi : Le Sodium , la masse volumique 22,98976928" << endl;
		Molecule3 = Sodium;
		break;
	case 12:
		cout << "Vous avez choisi : Le Magnesium , la masse volumique 24,3050" << endl;
		Molecule3 = Magnesium;
		break;
	case 13:
		cout << "Vous avez choisi : L'Aluminium , la masse volumique 26,9815386" << endl;
		Molecule3 = Aluminium;
		break;
	case 14:
		cout << "Vous avez choisi : Le Silicium , la masse volumique 28,0855" << endl;
		Molecule3 = Silicium;
		break;
	case 15:
		cout << "Vous avez choisi : Le Phosphore , la masse volumique 30,973761998" << endl;
		Molecule3 = Phosphore;
		break;
	case 16:
		cout << "Vous avez choisi : Le Soufre , la masse volumique 32,065" << endl;
		Molecule3 = Soufre;
		break;
	case 17:
		cout << "vous avez choisi : Le Chlore , la masse volumique 35,453" << endl;
		Molecule3 = Chlore;
		break;
	case 18:
		cout << "Vous avez choisi : L'Argon , la masse volumique 39,948" << endl;
		Molecule3 = Argon;
		break;
	case 19:
		cout << "Vous avez choisi : Le Potassium , la masse volumique 39,0983" << endl;
		Molecule3 = Potassium;
		break;
	case 20:
		cout << "Vous avez choisi : Le Calcium , la masse volumique 40,078" << endl;
		Molecule3 = Calcium;
		break;
	case 21:
		cout << "Vous avez choisi : Le Scandium , la masse volumique 44,955908" << endl;
		Molecule3 = Scandium;
		break;
	case 22:
		cout << "Vous avez choisi : Le Titane , la masse volumique 47,867" << endl;
		Molecule3 = Titane;
		break;
	case 23:
		cout << "Vous avez choisi : Le Vanadium , la masse volumique 50,9415" << endl;
		Molecule3 = Vanadium;
		break;
	case 24:
		cout << "Vous avez choisi : Le Chrome , la masse volumique 51,9961" << endl;
		Molecule3 = Chrome;
		break;
	case 25:
		cout << "Vous avez choisi : Le Manganese , la masse volumique 54,938044" << endl;
		Molecule3 = Manganese;
		break;
	case 26:
		cout << "Vous avez choisi : Le Fer , la masse volumique 55,845 " << endl;
		Molecule3 = Fer;
		break;
	case 27:
		cout << "Vous avez choisi : Le Cobalt , la masse volumique 58,933194" << endl;
		Molecule3 = Cobalt;
		break;
	case 28:
		cout << "Vous avez choisi : Le Nickel , la masse volumique 58,6934" << endl;
		Molecule3 = Nickel;
		break;
	case 29:
		cout << "Vous avez choisi : Le Cuivre , la masse volumique 63,546" << endl;
		Molecule3 = Cuivre;
		break;
	case 30:
		cout << "Vous avez choisi : Le Zinc , la masse volumique 65,409" << endl;
		Molecule3 = Zinc;
		break;
	case 31:
		cout << "Vous avez choisi : Le Gallium , la masse volumique 69,723" << endl;
		Molecule3 = Gallium;
		break;
	case 32:
		cout << "Vous avez choisi : Le Germanium , la masse volumique 72,64" << endl;
		Molecule3 = Germanium;
		break;
	case 33:
		cout << "Vous avez choisi : L'Arsenic , la masse volumique 74,921595" << endl;
		Molecule3 = Arsenic;
		break;
	case 34:
		cout << "Vous avez choisi : Le Sélénium , la masse volumique 78,971" << endl;
		Molecule3 = Selenium;
		break;
	case 35:
		cout << "Vous avez choisi : Le Brome , la masse volumique 79,904" << endl;
		Molecule3 = Brome;
		break;
	case 36:
		cout << "Vous avez choisi : Le Krypton , la masse volumique 83,798" << endl;
		Molecule3 = Krypton;
		break;
	case 37:
		cout << "Vous avez choisi : Le Rubidium , la masse volumique 85,4678" << endl;
		Molecule3 = Rubidium;
		break;
	case 38:
		cout << "Vous avez choisi : Le Strontium , la masse volumique 87,62" << endl;
		Molecule3 = Strontium;
		break;
	case 39:
		cout << "Vous avez choisi : Le Yttrium , la masse volumique 88,90584" << endl;
		Molecule3 = Yttrium;
		break;
	case 40:
		cout << "Vous avez choisi : Le Zirconium , la masse volumique 91,224" << endl;
		Molecule3 = Zirconium;
		break;
	case 41:
		cout << "Vous avez choisi : Le Niobium , la masse volumique 92,90637" << endl;
		Molecule3 = Niobium;
		break;
	case 42:
		cout << "Vous avez choisi : Le Molybdene , la masse volumique 95,95" << endl;
		Molecule3 = Molybdene;
		break;
	case 43:
		cout << "Vous avez choisi : Le Technetium , la masse volumique 98" << endl;
		Molecule3 = Technetium;
		break;
	case 44:
		cout << "Vous avez choisi : Le Ruthenium , la masse volumique 101,07" << endl;
		Molecule3 = Ruthenium;
		break;
	case 45:
		cout << "Vous avez choisi : Le Rhodium , la masse volumique 102,90550" << endl;
		Molecule3 = Rhodium;
		break;
	case 46:
		cout << "Vous avez choisi : Le Palladium , la masse volumique 106,42" << endl;
		Molecule3 = Palladium;
		break;
	case 47:
		cout << "Vous avez choisi : L'Argent , la masse volumique 107,8682" << endl;
		Molecule3 = Argent;
		break;
	case 48:
		cout << "Vous avez choisi : Le Cadmium, la masse volumique 112,414" << endl;
		Molecule3 = Cadmium;
		break;
	case 49:
		cout << "Vous avez choisi : Le Indium , la masse volumique 114,818" << endl;
		Molecule3 = Indium;
		break;
	case 50:
		cout << "Vous avez choisi : L'Etain , la masse volumique 118,710" << endl;
		Molecule3 = Etain;
		break;
	case 51:
		cout << "Vous avez choisi : L'Antimoine , la masse volumique 121,760" << endl;
		Molecule3 = Antimoine;
		break;
	case 52:
		cout << "Vous avez  choisi : La Tellure , la masse volumique 127,60" << endl;
		Molecule3 = Tellure;
		break;
	case 53:
		cout << "Vous avez choisi : La Iode , la masse volumique 126,90447" << endl;
		Molecule3 = Iode;
		break;
	case 54:
		cout << "Vous avez choisi : Le Xeon , la masse volumique 131,293" << endl;
		Molecule3 = Xeon;
		break;
	case 55:
		cout << "Vous avez choisi : Le Césium , la masse volumique 132,90545196" << endl;
		Molecule3 = Cesium;
		break;
	case 56:
		cout << "Vous avez choisi : Le Baryum , la masse volumique 137,327" << endl;
		Molecule3 = Baryum;
		break;
	case 57:
		cout << "Vous avez choisi : Le Lanthane , la masse volumique 138,90547" << endl;
		Molecule3 = Lanthane;
		break;
	case 58:
		cout << "Vous avez choisi : Le Cerium , la masse volumique 140,116" << endl;
		Molecule3 = Cerium;
		break;
	case 59:
		cout << "Vous avez choisi : Le Praseodyme , la masse volumique 140,90766" << endl;
		Molecule3 = Praseodyme;
		break;
	case 60:
		cout << "Vous avez choisi : Le Neodyme , la masse volumique 144,242" << endl;
		Molecule3 = Neodyme;
		break;
	case 61:
		cout << "Vous avez choisi : Le Prométhium , la masse volumique 145" << endl;
		Molecule3 = Promethium;
		break;
	case 62:
		cout << "Vous avez choisi : Le Samarium , la masse volumique 150,36" << endl;
		Molecule3 = Samarium;
		break;
	case 63:
		cout << "Vous avez choisi : Le Europium , la masse volumique 151,964" << endl;
		Molecule3 = Europium;
		break;
	case 64:
		cout << "Vous avez choisi : Le Gadolinium , la masse volumique 157,25" << endl;
		Molecule3 = Gadolinium;
		break;
	case 65:
		cout << "Vous avez choisi : Le Terbium , la masse volumique 158,92534" << endl;
		Molecule3 = Terbium;
		break;
	case 66:
		cout << " Vous avez choisi : Le Dysprosium , la masse volumique 162,500" << endl;
		Molecule3 = Dysprosium;
		break;
	case 67:
		cout << "Vous avez choisi : Le Holmium , la masse volumique 164,93033" << endl;
		Molecule3 = Holmium;
		break;
	case 68:
		cout << "Vous avez choisi : L'Erbium , la masse volumique 167,259" << endl;
		Molecule3 = Holmium;
		break;
	case 69:
		cout << "Vous avez choisi : Le Thulium , la masse volumique 168,93422" << endl;
		Molecule3 = Thulium;
		break;
	case 70:
		cout << "Vous avez choisi : Le Ytterbium , la masse volumique 173,04" << endl;
		Molecule3 = Ytterbium;
		break;
	case 71:
		cout << "Vous avez choisi : Le Lutecium , la masse volumique 174,9668" << endl;
		Molecule3 = Lutecium;
		break;
	case 72:
		cout << "Vous avez choisi : Le Hafnium , la masse volumique 174,9668" << endl;
		Molecule3 = Hafnium;
		break;
	case 73:
		cout << "Vous avez choisi : Le Tantale , la masse volumique 180,94788" << endl;
		Molecule3 = Tantale;
		break;
	case 74:
		cout << "Vous avez choisi : Le Tungstène , la masse volumique 183,84" << endl;
		Molecule3 = Tungstene;
		break;
	case 75:
		cout << "Vous avez choisi : Le Rhenium , la masse volumique 186,207" << endl;
		Molecule3 = Rhenium;
		break;
	case 76:
		cout << "Vous avez choisi : L'Osmium , la masse volumique 190,23" << endl;
		Molecule3 = Osmium;
		break;
	case 77:
		cout << "Vous avez choisi : L'Iridium , la masse volumique 192,217" << endl;
		Molecule3 = Iridium;
		break;
	case 78:
		cout << "Vous avez choisi : Le Platine , la masse volumique 195,084" << endl;
		Molecule3 = Platine;
		break;
	case 79:
		cout << "Vous avez choisi : L'Or , la masse volumique 196,966569" << endl;
		Molecule3 = Or;
		break;
	case 80:
		cout << "Vous avez choisi : Le Mercure , la masse volumique 200,59" << endl;
		Molecule3 = Mercure;
		break;
	case 81:
		cout << "Vous avez choisi : Le Thallium , la masse volumique 204,3833" << endl;
		Molecule3 = Thallium;
		break;
	case 82:
		cout << "Vous avez choisi : Le Plomb , la masse volumique 207,2" << endl;
		Molecule3 = Plomb;
		break;
	case 83:
		cout << "Vous avez choisi : Le Bismuth , la masse volumique 208,98040" << endl;
		Molecule3 = Bismuth;
		break;
	case 84:
		cout << "Vous avez choisi : Le Polonium , la masse volumique 209" << endl;
		Molecule3 = Polonium;
		break;
	case 85:
		cout << "Vous avez choisi : L'Astate , la masse volumique 210" << endl;
		Molecule3 = Astate;
		break;
	case 86:
		cout << "Vous avez choisi : Le Radon , la masse volumique 222" << endl;
		Molecule3 = Radon;
		break;
	case 87:
		cout << "Vous avez choisi : Le Francium , la masse volumique 223" << endl;
		Molecule3 = Francium;
		break;
	case 88:
		cout << "Vous avez choisi : Le Radium , la masse volumique 226,0254" << endl;
		Molecule3 = Radium;
		break;
	case 89:
		cout << "Vous avez choisi : L'Actinium , la masse volumique 227" << endl;
		Molecule3 = Actinium;
		break;
	case 90:
		cout << "Vous avez choisi : Le Thorium , la masse volumique 232,0377" << endl;
		Molecule3 = Thorium;
		break;
	case 91:
		cout << "Vous avez choisi : Le Protactinium , la masse volumique 231,03588" << endl;
		Molecule3 = Protactinium;
		break;
	case 92:
		cout << "Vous avez choisi : L'Uranium , la masse volumique 238,02891" << endl;
		Molecule3 = Uranium;
		break;
	case 93:
		cout << "Vous avez choisi : Le Neptunium , la masse volumique 237" << endl;
		Molecule3 = Neptunium;
		break;
	case 94:
		cout << "Vous avez choisi : Le Plutonium , la masse volumique 244,06" << endl;
		Molecule3 = Plutonium;
		break;
	case 95:
		cout << "Vous avez choisi : L'Americium , la masse volumique 241,06" << endl;
		Molecule3 = Americium;
		break;
	case 96:
		cout << "Vous avez choisi : Le Curium , la masse volumique 247" << endl;
		Molecule3 = Curium;
		break;
	case 97:
		cout << "Vous avez choisi : Le Berkelium , la masse volumique 247" << endl;
		Molecule3 = Berkelium;
		break;
	case 98:
		cout << "Vous avez choisi : Le Californium , la masse volumique 251" << endl;
		Molecule3 = Californium;
		break;
	case 99:
		cout << "Vous avez choisi : Le Einsteinium , la masse volumique 252" << endl;
		Molecule3 = Einsteinium;
		break;
	case 100:
		cout << "Vous avez choisi : Le Fermium , la masse volumique 257" << endl;
		Molecule3 = Fermium;
		break;
	case 101:
		cout << "Vous avez choisi : Le Mendelevium , la masse volumique 258" << endl;
		Molecule3 = Mendelevium;
		break;
	case 102:
		cout << "Vous avez choisi : Le Nobelium , la masse volumique 259" << endl;
		Molecule3 = Nobelium;
		break;
	case 103:
		cout << "Vous avez choisi : Le Lawrencium , la masse volumique 266" << endl;
		Molecule3 = Lawrencium;
		break;
	case 104:
		cout << "Vous avez choisi : Le Rutherfordium , la masse columique 267" << endl;
		Molecule3 = Rutherfordium;
		break;
	case 105:
		cout << "Vous avez choisi : Le Dubnium , la masse volumique 268" << endl;
		Molecule3 = Dubnium;
		break;
	case 106:
		cout << "Vous avez choisi : Le Seaborgium , la masse volumique 269" << endl;
		Molecule3 = Seaborgium;
		break;
	case 107:
		cout << "Vous avez choisi : Le Bohrium , la masse volumique 270" << endl;
		Molecule3 = Bohrium;
		break;
	case 108:
		cout << "Vous avez choisi : Le Hassium , la masse volumique 277" << endl;
		Molecule3 = Hassium;
		break;
	case 109:
		cout << "Vous avez choisi : Le Meitnerium , la masse volumique 278" << endl;
		Molecule3 = Meitnerium;
		break;
	case 110:
		cout << "Vous avez choisi : Le Darmstadtium , la masse volumique 281" << endl;
		Molecule3 = Darmstadtium;
		break;
	case 111:
		cout << "Vous avez choisi : Le Roentgenium , la masse volumique 282" << endl;
		Molecule3 = Roentgenium;
		break;
	case 112:
		cout << "Vous avez choisi : Le Copernicium , la masse volumique 285" << endl;
		Molecule3 = Copernicium;
		break;
	case 113:
		cout << "Vous avez choisi : Le Nihonium , la masse volumique 286" << endl;
		Molecule3 = Nihonium;
		break;
	case 114:
		cout << "Vous avez choisi : Le Flerovium , la masse volumique 289" << endl;
		Molecule3 = Flerovium;
		break;
	case 115:
		cout << "Vous avez choisi : Le Moscovium , la masse volumique 289" << endl;
		Molecule3 = Moscovium;
		break;
	case 116:
		cout << "Vous avez choisi : Le Livermorium , la masse volumique 293" << endl;
		Molecule3 = Livermorium;
		break;
	case 117:
		cout << "Vous avez choisi : Le Tennesse , la masse volumique 294" << endl;
		Molecule3 = Tennesse;
		break;
	case 118:
		cout << "Vous avez choisi : Le Oganesson , la masse volumique 294" << endl;
		Molecule3 = Oganesson;
		break;
	default:
		cout << "Retour au menu principal" << endl;
		break;
	}

	return Molecule3;

}


double Atome4()
{
	int choixAtome4(9);
	double Molecule4(5);
	const double Hydrogene(1.00794);
	const double Helium(4.002602);
	const double Lithium(6.941);
	const double Beryllium(9.0121831);
	const double Bore(10.811);
	const double Carbone(12.01074);
	const double Azote(14.0067);
	const double Oxygene(15.9994);
	const double Fluor(18.998403163);
	const double Neon(20.1797);
	const double Sodium(22.98976928);
	const double Magnesium(24.3050);
	const double Aluminium(26.9815386);
	const double Silicium(28.0855);
	const double Phosphore(30.973761998);
	const double Soufre(32.065);
	const double Chlore(35.453);
	const double Argon(39.948);
	const double Potassium(39.0983);
	const double Calcium(40.078);
	const double Scandium(44.955908);
	const double Titane(47.867);
	const double Vanadium(50.9415);
	const double Chrome(51.9961);
	const double Manganese(54.938044);
	const double Fer(55.845);
	const double Cobalt(58.933194);
	const double Nickel(58.6934);
	const double Cuivre(63.546);
	const double Zinc(65.409);
	const double Gallium(69.723);
	const double Germanium(72.64);
	const double Arsenic(74.921595);
	const double Selenium(78.971);
	const double Brome(79.904);
	const double Krypton(83.798);
	const double Rubidium(85.4678);
	const double Strontium(87.62);
	const double Yttrium(88.90584);
	const double Zirconium(91.224);
	const double Niobium(92.90637);
	const double Molybdene(95.95);
	const double Technetium(98);
	const double Ruthenium(101.07);
	const double Rhodium(102.90550);
	const double Palladium(106.42);
	const double Argent(107.8682);
	const double Cadmium(112.414);
	const double Indium(114.818);
	const double Etain(118.710);
	const double Antimoine(121.760);
	const double Tellure(127.60);
	const double Iode(126.90447);
	const double Xeon(131.293);
	const double Cesium(132.90545196);
	const double Baryum(137.327);
	const double Lanthane(138.90547);
	const double Cerium(140.116);
	const double Praseodyme(140.90766);
	const double Neodyme(144.242);
	const double Promethium(145);
	const double Samarium(150.36);
	const double Europium(151.964);
	const double Gadolinium(157.25);
	const double Terbium(158.92534);
	const double Dysprosium(162.500);
	const double Holmium(164.93033);
	const double Erbium(167.259);
	const double Thulium(168.93422);
	const double Ytterbium(173.04);
	const double Lutecium(174.9668);
	const double Hafnium(178.49);
	const double Tantale(180.94788);
	const double Tungstene(183.84);
	const double Rhenium(186.207);
	const double Osmium(190.23);
	const double Iridium(192.217);
	const double Platine(195.084);
	const double Or(196.966569);
	const double Mercure(200.59);
	const double Thallium(204.3833);
	const double Plomb(207.2);
	const double Bismuth(208.98040);
	const double Polonium(209);
	const double Astate(210);
	const double Radon(222);
	const double Francium(223);
	const double Radium(226.0254);
	const double Actinium(227);
	const double Thorium(232.0377);
	const double Protactinium(231.03588);
	const double Uranium(238.02891);
	const double Neptunium(237);
	const double Plutonium(244.06);
	const double Americium(241.06);
	const double Curium(247);
	const double Berkelium(247);
	const double Californium(251);
	const double Einsteinium(252);
	const double Fermium(257);
	const double Mendelevium(258);
	const double Nobelium(259);
	const double Lawrencium(266);
	const double Rutherfordium(267);
	const double Dubnium(268);
	const double Seaborgium(269);
	const double Bohrium(270);
	const double Hassium(277);
	const double Meitnerium(278);
	const double Darmstadtium(281);
	const double Roentgenium(282);
	const double Copernicium(285);
	const double Nihonium(286);
	const double Flerovium(289);
	const double Moscovium(289);
	const double Livermorium(293);
	const double Tennesse(294);
	const double Oganesson(294);


	cout << "Choix de votre quatrieme atome" << endl;
	cin >> choixAtome4;

	switch (choixAtome4)
	{
	case 0:
		cout << "Il n'existe pas d'atome 0" << endl;
		break;
	case 1:
		cout << "Vous avez choisi : L'hydrogéne , la masse volumique 1,00794" << endl;
		Molecule4 = Hydrogene;
		break;
	case 2:
		cout << "Vous avez choisi : L'Hélium , la masse volumique 4,002602" << endl;
		Molecule4 = Helium;
		break;
	case 3:
		cout << "Vous avez choisi : Le Lithium , la masse volumique 6,941" << endl;
		Molecule4 = Lithium;
		break;
	case 4:
		cout << "Vous avez choisi : Le Beryllium , la masse volumique 9.0121831" << endl;
		Molecule4 = Beryllium;
		break;
	case 5:
		cout << "Vous avez choisi : Le Bore , la masse volumique 10,811" << endl;
		Molecule4 = Bore;
		break;
	case 6:
		cout << "Vous avez choisi : Le Carbone , la masse volumique 12,01074" << endl;
		Molecule4 = Carbone;
		break;
	case 7:
		cout << "Vous avez choisi : L'Azote , la masse volumique 14,0067" << endl;
		Molecule4 = Azote;
		break;
	case 8:
		cout << "Vous avez choisi : L'Oxygene , la masse volumique 15,9994" << endl;
		Molecule4 = Oxygene;
		break;
	case 9:
		cout << "Vous avez choisi : Le Fluor , la masse volumique 18,998403163" << endl;
		Molecule4 = Fluor;
		break;
	case 10:
		cout << "Vous avez choisi : Le Neon , la masse volumique 20,1797" << endl;
		Molecule4 = Neon;
		break;
	case 11:
		cout << "Vous avez choisi : Le Sodium , la masse volumique 22,98976928" << endl;
		Molecule4 = Sodium;
		break;
	case 12:
		cout << "Vous avez choisi : Le Magnesium , la masse volumique 24,3050" << endl;
		Molecule4 = Magnesium;
		break;
	case 13:
		cout << "Vous avez choisi : L'Aluminium , la masse volumique 26,9815386" << endl;
		Molecule4 = Aluminium;
		break;
	case 14:
		cout << "Vous avez choisi : Le Silicium , la masse volumique 28,0855" << endl;
		Molecule4 = Silicium;
		break;
	case 15:
		cout << "Vous avez choisi : Le Phosphore , la masse volumique 30,973761998" << endl;
		Molecule4 = Phosphore;
		break;
	case 16:
		cout << "Vous avez choisi : Le Soufre , la masse volumique 32,065" << endl;
		Molecule4 = Soufre;
		break;
	case 17:
		cout << "vous avez choisi : Le Chlore , la masse volumique 35,453" << endl;
		Molecule4 = Chlore;
		break;
	case 18:
		cout << "Vous avez choisi : L'Argon , la masse volumique 39,948" << endl;
		Molecule4 = Argon;
		break;
	case 19:
		cout << "Vous avez choisi : Le Potassium , la masse volumique 39,0983" << endl;
		Molecule4 = Potassium;
		break;
	case 20:
		cout << "Vous avez choisi : Le Calcium , la masse volumique 40,078" << endl;
		Molecule4 = Calcium;
		break;
	case 21:
		cout << "Vous avez choisi : Le Scandium , la masse volumique 44,955908" << endl;
		Molecule4 = Scandium;
		break;
	case 22:
		cout << "Vous avez choisi : Le Titane , la masse volumique 47,867" << endl;
		Molecule4 = Titane;
		break;
	case 23:
		cout << "Vous avez choisi : Le Vanadium , la masse volumique 50,9415" << endl;
		Molecule4 = Vanadium;
		break;
	case 24:
		cout << "Vous avez choisi : Le Chrome , la masse volumique 51,9961" << endl;
		Molecule4 = Chrome;
		break;
	case 25:
		cout << "Vous avez choisi : Le Manganese , la masse volumique 54,938044" << endl;
		Molecule4 = Manganese;
		break;
	case 26:
		cout << "Vous avez choisi : Le Fer , la masse volumique 55,845 " << endl;
		Molecule4 = Fer;
		break;
	case 27:
		cout << "Vous avez choisi : Le Cobalt , la masse volumique 58,933194" << endl;
		Molecule4 = Cobalt;
		break;
	case 28:
		cout << "Vous avez choisi : Le Nickel , la masse volumique 58,6934" << endl;
		Molecule4 = Nickel;
		break;
	case 29:
		cout << "Vous avez choisi : Le Cuivre , la masse volumique 63,546" << endl;
		Molecule4 = Cuivre;
		break;
	case 30:
		cout << "Vous avez choisi : Le Zinc , la masse volumique 65,409" << endl;
		Molecule4 = Zinc;
		break;
	case 31:
		cout << "Vous avez choisi : Le Gallium , la masse volumique 69,723" << endl;
		Molecule4 = Gallium;
		break;
	case 32:
		cout << "Vous avez choisi : Le Germanium , la masse volumique 72,64" << endl;
		Molecule4 = Germanium;
		break;
	case 33:
		cout << "Vous avez choisi : L'Arsenic , la masse volumique 74,921595" << endl;
		Molecule4 = Arsenic;
		break;
	case 34:
		cout << "Vous avez choisi : Le Sélénium , la masse volumique 78,971" << endl;
		Molecule4 = Selenium;
		break;
	case 35:
		cout << "Vous avez choisi : Le Brome , la masse volumique 79,904" << endl;
		Molecule4 = Brome;
		break;
	case 36:
		cout << "Vous avez choisi : Le Krypton , la masse volumique 83,798" << endl;
		Molecule4 = Krypton;
		break;
	case 37:
		cout << "Vous avez choisi : Le Rubidium , la masse volumique 85,4678" << endl;
		Molecule4 = Rubidium;
		break;
	case 38:
		cout << "Vous avez choisi : Le Strontium , la masse volumique 87,62" << endl;
		Molecule4 = Strontium;
		break;
	case 39:
		cout << "Vous avez choisi : Le Yttrium , la masse volumique 88,90584" << endl;
		Molecule4 = Yttrium;
		break;
	case 40:
		cout << "Vous avez choisi : Le Zirconium , la masse volumique 91,224" << endl;
		Molecule4 = Zirconium;
		break;
	case 41:
		cout << "Vous avez choisi : Le Niobium , la masse volumique 92,90637" << endl;
		Molecule4 = Niobium;
		break;
	case 42:
		cout << "Vous avez choisi : Le Molybdene , la masse volumique 95,95" << endl;
		Molecule4 = Molybdene;
		break;
	case 43:
		cout << "Vous avez choisi : Le Technetium , la masse volumique 98" << endl;
		Molecule4 = Technetium;
		break;
	case 44:
		cout << "Vous avez choisi : Le Ruthenium , la masse volumique 101,07" << endl;
		Molecule4 = Ruthenium;
		break;
	case 45:
		cout << "Vous avez choisi : Le Rhodium , la masse volumique 102,90550" << endl;
		Molecule4 = Rhodium;
		break;
	case 46:
		cout << "Vous avez choisi : Le Palladium , la masse volumique 106,42" << endl;
		Molecule4 = Palladium;
		break;
	case 47:
		cout << "Vous avez choisi : L'Argent , la masse volumique 107,8682" << endl;
		Molecule4 = Argent;
		break;
	case 48:
		cout << "Vous avez choisi : Le Cadmium, la masse volumique 112,414" << endl;
		Molecule4 = Cadmium;
		break;
	case 49:
		cout << "Vous avez choisi : Le Indium , la masse volumique 114,818" << endl;
		Molecule4 = Indium;
		break;
	case 50:
		cout << "Vous avez choisi : L'Etain , la masse volumique 118,710" << endl;
		Molecule4 = Etain;
		break;
	case 51:
		cout << "Vous avez choisi : L'Antimoine , la masse volumique 121,760" << endl;
		Molecule4 = Antimoine;
		break;
	case 52:
		cout << "Vous avez  choisi : La Tellure , la masse volumique 127,60" << endl;
		Molecule4 = Tellure;
		break;
	case 53:
		cout << "Vous avez choisi : La Iode , la masse volumique 126,90447" << endl;
		Molecule4 = Iode;
		break;
	case 54:
		cout << "Vous avez choisi : Le Xeon , la masse volumique 131,293" << endl;
		Molecule4 = Xeon;
		break;
	case 55:
		cout << "Vous avez choisi : Le Césium , la masse volumique 132,90545196" << endl;
		Molecule4 = Cesium;
		break;
	case 56:
		cout << "Vous avez choisi : Le Baryum , la masse volumique 137,327" << endl;
		Molecule4 = Baryum;
		break;
	case 57:
		cout << "Vous avez choisi : Le Lanthane , la masse volumique 138,90547" << endl;
		Molecule4 = Lanthane;
		break;
	case 58:
		cout << "Vous avez choisi : Le Cerium , la masse volumique 140,116" << endl;
		Molecule4 = Cerium;
		break;
	case 59:
		cout << "Vous avez choisi : Le Praseodyme , la masse volumique 140,90766" << endl;
		Molecule4 = Praseodyme;
		break;
	case 60:
		cout << "Vous avez choisi : Le Neodyme , la masse volumique 144,242" << endl;
		Molecule4 = Neodyme;
		break;
	case 61:
		cout << "Vous avez choisi : Le Prométhium , la masse volumique 145" << endl;
		Molecule4 = Promethium;
		break;
	case 62:
		cout << "Vous avez choisi : Le Samarium , la masse volumique 150,36" << endl;
		Molecule4 = Samarium;
		break;
	case 63:
		cout << "Vous avez choisi : Le Europium , la masse volumique 151,964" << endl;
		Molecule4 = Europium;
		break;
	case 64:
		cout << "Vous avez choisi : Le Gadolinium , la masse volumique 157,25" << endl;
		Molecule4 = Gadolinium;
		break;
	case 65:
		cout << "Vous avez choisi : Le Terbium , la masse volumique 158,92534" << endl;
		Molecule4 = Terbium;
		break;
	case 66:
		cout << " Vous avez choisi : Le Dysprosium , la masse volumique 162,500" << endl;
		Molecule4 = Dysprosium;
		break;
	case 67:
		cout << "Vous avez choisi : Le Holmium , la masse volumique 164,93033" << endl;
		Molecule4 = Holmium;
		break;
	case 68:
		cout << "Vous avez choisi : L'Erbium , la masse volumique 167,259" << endl;
		Molecule4 = Holmium;
		break;
	case 69:
		cout << "Vous avez choisi : Le Thulium , la masse volumique 168,93422" << endl;
		Molecule4 = Thulium;
		break;
	case 70:
		cout << "Vous avez choisi : Le Ytterbium , la masse volumique 173,04" << endl;
		Molecule4 = Ytterbium;
		break;
	case 71:
		cout << "Vous avez choisi : Le Lutecium , la masse volumique 174,9668" << endl;
		Molecule4 = Lutecium;
		break;
	case 72:
		cout << "Vous avez choisi : Le Hafnium , la masse volumique 174,9668" << endl;
		Molecule4 = Hafnium;
		break;
	case 73:
		cout << "Vous avez choisi : Le Tantale , la masse volumique 180,94788" << endl;
		Molecule4 = Tantale;
		break;
	case 74:
		cout << "Vous avez choisi : Le Tungstène , la masse volumique 183,84" << endl;
		Molecule4 = Tungstene;
		break;
	case 75:
		cout << "Vous avez choisi : Le Rhenium , la masse volumique 186,207" << endl;
		Molecule4 = Rhenium;
		break;
	case 76:
		cout << "Vous avez choisi : L'Osmium , la masse volumique 190,23" << endl;
		Molecule4 = Osmium;
		break;
	case 77:
		cout << "Vous avez choisi : L'Iridium , la masse volumique 192,217" << endl;
		Molecule4 = Iridium;
		break;
	case 78:
		cout << "Vous avez choisi : Le Platine , la masse volumique 195,084" << endl;
		Molecule4 = Platine;
		break;
	case 79:
		cout << "Vous avez choisi : L'Or , la masse volumique 196,966569" << endl;
		Molecule4 = Or;
		break;
	case 80:
		cout << "Vous avez choisi : Le Mercure , la masse volumique 200,59" << endl;
		Molecule4 = Mercure;
		break;
	case 81:
		cout << "Vous avez choisi : Le Thallium , la masse volumique 204,3833" << endl;
		Molecule4 = Thallium;
		break;
	case 82:
		cout << "Vous avez choisi : Le Plomb , la masse volumique 207,2" << endl;
		Molecule4 = Plomb;
		break;
	case 83:
		cout << "Vous avez choisi : Le Bismuth , la masse volumique 208,98040" << endl;
		Molecule4 = Bismuth;
		break;
	case 84:
		cout << "Vous avez choisi : Le Polonium , la masse volumique 209" << endl;
		Molecule4 = Polonium;
		break;
	case 85:
		cout << "Vous avez choisi : L'Astate , la masse volumique 210" << endl;
		Molecule4 = Astate;
		break;
	case 86:
		cout << "Vous avez choisi : Le Radon , la masse volumique 222" << endl;
		Molecule4 = Radon;
		break;
	case 87:
		cout << "Vous avez choisi : Le Francium , la masse volumique 223" << endl;
		Molecule4 = Francium;
		break;
	case 88:
		cout << "Vous avez choisi : Le Radium , la masse volumique 226,0254" << endl;
		Molecule4 = Radium;
		break;
	case 89:
		cout << "Vous avez choisi : L'Actinium , la masse volumique 227" << endl;
		Molecule4 = Actinium;
		break;
	case 90:
		cout << "Vous avez choisi : Le Thorium , la masse volumique 232,0377" << endl;
		Molecule4 = Thorium;
		break;
	case 91:
		cout << "Vous avez choisi : Le Protactinium , la masse volumique 231,03588" << endl;
		Molecule4 = Protactinium;
		break;
	case 92:
		cout << "Vous avez choisi : L'Uranium , la masse volumique 238,02891" << endl;
		Molecule4 = Uranium;
		break;
	case 93:
		cout << "Vous avez choisi : Le Neptunium , la masse volumique 237" << endl;
		Molecule4 = Neptunium;
		break;
	case 94:
		cout << "Vous avez choisi : Le Plutonium , la masse volumique 244,06" << endl;
		Molecule4 = Plutonium;
		break;
	case 95:
		cout << "Vous avez choisi : L'Americium , la masse volumique 241,06" << endl;
		Molecule4 = Americium;
		break;
	case 96:
		cout << "Vous avez choisi : Le Curium , la masse volumique 247" << endl;
		Molecule4 = Curium;
		break;
	case 97:
		cout << "Vous avez choisi : Le Berkelium , la masse volumique 247" << endl;
		Molecule4 = Berkelium;
		break;
	case 98:
		cout << "Vous avez choisi : Le Californium , la masse volumique 251" << endl;
		Molecule4 = Californium;
		break;
	case 99:
		cout << "Vous avez choisi : Le Einsteinium , la masse volumique 252" << endl;
		Molecule4 = Einsteinium;
		break;
	case 100:
		cout << "Vous avez choisi : Le Fermium , la masse volumique 257" << endl;
		Molecule4 = Fermium;
		break;
	case 101:
		cout << "Vous avez choisi : Le Mendelevium , la masse volumique 258" << endl;
		Molecule4 = Mendelevium;
		break;
	case 102:
		cout << "Vous avez choisi : Le Nobelium , la masse volumique 259" << endl;
		Molecule4 = Nobelium;
		break;
	case 103:
		cout << "Vous avez choisi : Le Lawrencium , la masse volumique 266" << endl;
		Molecule4 = Lawrencium;
		break;
	case 104:
		cout << "Vous avez choisi : Le Rutherfordium , la masse columique 267" << endl;
		Molecule4 = Rutherfordium;
		break;
	case 105:
		cout << "Vous avez choisi : Le Dubnium , la masse volumique 268" << endl;
		Molecule4 = Dubnium;
		break;
	case 106:
		cout << "Vous avez choisi : Le Seaborgium , la masse volumique 269" << endl;
		Molecule4 = Seaborgium;
		break;
	case 107:
		cout << "Vous avez choisi : Le Bohrium , la masse volumique 270" << endl;
		Molecule4 = Bohrium;
		break;
	case 108:
		cout << "Vous avez choisi : Le Hassium , la masse volumique 277" << endl;
		Molecule4 = Hassium;
		break;
	case 109:
		cout << "Vous avez choisi : Le Meitnerium , la masse volumique 278" << endl;
		Molecule4 = Meitnerium;
		break;
	case 110:
		cout << "Vous avez choisi : Le Darmstadtium , la masse volumique 281" << endl;
		Molecule4 = Darmstadtium;
		break;
	case 111:
		cout << "Vous avez choisi : Le Roentgenium , la masse volumique 282" << endl;
		Molecule4 = Roentgenium;
		break;
	case 112:
		cout << "Vous avez choisi : Le Copernicium , la masse volumique 285" << endl;
		Molecule4 = Copernicium;
		break;
	case 113:
		cout << "Vous avez choisi : Le Nihonium , la masse volumique 286" << endl;
		Molecule4 = Nihonium;
		break;
	case 114:
		cout << "Vous avez choisi : Le Flerovium , la masse volumique 289" << endl;
		Molecule4 = Flerovium;
		break;
	case 115:
		cout << "Vous avez choisi : Le Moscovium , la masse volumique 289" << endl;
		Molecule4 = Moscovium;
		break;
	case 116:
		cout << "Vous avez choisi : Le Livermorium , la masse volumique 293" << endl;
		Molecule4 = Livermorium;
		break;
	case 117:
		cout << "Vous avez choisi : Le Tennesse , la masse volumique 294" << endl;
		Molecule4 = Tennesse;
		break;
	case 118:
		cout << "Vous avez choisi : Le Oganesson , la masse volumique 294" << endl;
		Molecule4 = Oganesson;
		break;
	default:
		cout << "Retour au menu principal" << endl;
		break;
	}

	return Molecule4;

}

double Atome5()
{
	int choixAtome5(9);
	double Molecule5(5);
	const double Hydrogene(1.00794);
	const double Helium(4.002602);
	const double Lithium(6.941);
	const double Beryllium(9.0121831);
	const double Bore(10.811);
	const double Carbone(12.01074);
	const double Azote(14.0067);
	const double Oxygene(15.9994);
	const double Fluor(18.998403163);
	const double Neon(20.1797);
	const double Sodium(22.98976928);
	const double Magnesium(24.3050);
	const double Aluminium(26.9815386);
	const double Silicium(28.0855);
	const double Phosphore(30.973761998);
	const double Soufre(32.065);
	const double Chlore(35.453);
	const double Argon(39.948);
	const double Potassium(39.0983);
	const double Calcium(40.078);
	const double Scandium(44.955908);
	const double Titane(47.867);
	const double Vanadium(50.9415);
	const double Chrome(51.9961);
	const double Manganese(54.938044);
	const double Fer(55.845);
	const double Cobalt(58.933194);
	const double Nickel(58.6934);
	const double Cuivre(63.546);
	const double Zinc(65.409);
	const double Gallium(69.723);
	const double Germanium(72.64);
	const double Arsenic(74.921595);
	const double Selenium(78.971);
	const double Brome(79.904);
	const double Krypton(83.798);
	const double Rubidium(85.4678);
	const double Strontium(87.62);
	const double Yttrium(88.90584);
	const double Zirconium(91.224);
	const double Niobium(92.90637);
	const double Molybdene(95.95);
	const double Technetium(98);
	const double Ruthenium(101.07);
	const double Rhodium(102.90550);
	const double Palladium(106.42);
	const double Argent(107.8682);
	const double Cadmium(112.414);
	const double Indium(114.818);
	const double Etain(118.710);
	const double Antimoine(121.760);
	const double Tellure(127.60);
	const double Iode(126.90447);
	const double Xeon(131.293);
	const double Cesium(132.90545196);
	const double Baryum(137.327);
	const double Lanthane(138.90547);
	const double Cerium(140.116);
	const double Praseodyme(140.90766);
	const double Neodyme(144.242);
	const double Promethium(145);
	const double Samarium(150.36);
	const double Europium(151.964);
	const double Gadolinium(157.25);
	const double Terbium(158.92534);
	const double Dysprosium(162.500);
	const double Holmium(164.93033);
	const double Erbium(167.259);
	const double Thulium(168.93422);
	const double Ytterbium(173.04);
	const double Lutecium(174.9668);
	const double Hafnium(178.49);
	const double Tantale(180.94788);
	const double Tungstene(183.84);
	const double Rhenium(186.207);
	const double Osmium(190.23);
	const double Iridium(192.217);
	const double Platine(195.084);
	const double Or(196.966569);
	const double Mercure(200.59);
	const double Thallium(204.3833);
	const double Plomb(207.2);
	const double Bismuth(208.98040);
	const double Polonium(209);
	const double Astate(210);
	const double Radon(222);
	const double Francium(223);
	const double Radium(226.0254);
	const double Actinium(227);
	const double Thorium(232.0377);
	const double Protactinium(231.03588);
	const double Uranium(238.02891);
	const double Neptunium(237);
	const double Plutonium(244.06);
	const double Americium(241.06);
	const double Curium(247);
	const double Berkelium(247);
	const double Californium(251);
	const double Einsteinium(252);
	const double Fermium(257);
	const double Mendelevium(258);
	const double Nobelium(259);
	const double Lawrencium(266);
	const double Rutherfordium(267);
	const double Dubnium(268);
	const double Seaborgium(269);
	const double Bohrium(270);
	const double Hassium(277);
	const double Meitnerium(278);
	const double Darmstadtium(281);
	const double Roentgenium(282);
	const double Copernicium(285);
	const double Nihonium(286);
	const double Flerovium(289);
	const double Moscovium(289);
	const double Livermorium(293);
	const double Tennesse(294);
	const double Oganesson(294);


	cout << "Choix de votre cinquieme atome" << endl;
	cin >> choixAtome5;

	switch (choixAtome5)
	{
	case 0:
		cout << "Il n'existe pas d'atome 0" << endl;
		break;
	case 1:
		cout << "Vous avez choisi : L'hydrogéne , la masse volumique 1,00794" << endl;
		Molecule5 = Hydrogene;
		break;
	case 2:
		cout << "Vous avez choisi : L'Hélium , la masse volumique 4,002602" << endl;
		Molecule5 = Helium;
		break;
	case 3:
		cout << "Vous avez choisi : Le Lithium , la masse volumique 6,941" << endl;
		Molecule5 = Lithium;
		break;
	case 4:
		cout << "Vous avez choisi : Le Beryllium , la masse volumique 9.0121831" << endl;
		Molecule5 = Beryllium;
		break;
	case 5:
		cout << "Vous avez choisi : Le Bore , la masse volumique 10,811" << endl;
		Molecule5 = Bore;
		break;
	case 6:
		cout << "Vous avez choisi : Le Carbone , la masse volumique 12,01074" << endl;
		Molecule5 = Carbone;
		break;
	case 7:
		cout << "Vous avez choisi : L'Azote , la masse volumique 14,0067" << endl;
		Molecule5 = Azote;
		break;
	case 8:
		cout << "Vous avez choisi : L'Oxygene , la masse volumique 15,9994" << endl;
		Molecule5 = Oxygene;
		break;
	case 9:
		cout << "Vous avez choisi : Le Fluor , la masse volumique 18,998403163" << endl;
		Molecule5 = Fluor;
		break;
	case 10:
		cout << "Vous avez choisi : Le Neon , la masse volumique 20,1797" << endl;
		Molecule5 = Neon;
		break;
	case 11:
		cout << "Vous avez choisi : Le Sodium , la masse volumique 22,98976928" << endl;
		Molecule5 = Sodium;
		break;
	case 12:
		cout << "Vous avez choisi : Le Magnesium , la masse volumique 24,3050" << endl;
		Molecule5 = Magnesium;
		break;
	case 13:
		cout << "Vous avez choisi : L'Aluminium , la masse volumique 26,9815386" << endl;
		Molecule5 = Aluminium;
		break;
	case 14:
		cout << "Vous avez choisi : Le Silicium , la masse volumique 28,0855" << endl;
		Molecule5 = Silicium;
		break;
	case 15:
		cout << "Vous avez choisi : Le Phosphore , la masse volumique 30,973761998" << endl;
		Molecule5 = Phosphore;
		break;
	case 16:
		cout << "Vous avez choisi : Le Soufre , la masse volumique 32,065" << endl;
		Molecule5 = Soufre;
		break;
	case 17:
		cout << "vous avez choisi : Le Chlore , la masse volumique 35,453" << endl;
		Molecule5 = Chlore;
		break;
	case 18:
		cout << "Vous avez choisi : L'Argon , la masse volumique 39,948" << endl;
		Molecule5 = Argon;
		break;
	case 19:
		cout << "Vous avez choisi : Le Potassium , la masse volumique 39,0983" << endl;
		Molecule5 = Potassium;
		break;
	case 20:
		cout << "Vous avez choisi : Le Calcium , la masse volumique 40,078" << endl;
		Molecule5 = Calcium;
		break;
	case 21:
		cout << "Vous avez choisi : Le Scandium , la masse volumique 44,955908" << endl;
		Molecule5 = Scandium;
		break;
	case 22:
		cout << "Vous avez choisi : Le Titane , la masse volumique 47,867" << endl;
		Molecule5 = Titane;
		break;
	case 23:
		cout << "Vous avez choisi : Le Vanadium , la masse volumique 50,9415" << endl;
		Molecule5 = Vanadium;
		break;
	case 24:
		cout << "Vous avez choisi : Le Chrome , la masse volumique 51,9961" << endl;
		Molecule5 = Chrome;
		break;
	case 25:
		cout << "Vous avez choisi : Le Manganese , la masse volumique 54,938044" << endl;
		Molecule5 = Manganese;
		break;
	case 26:
		cout << "Vous avez choisi : Le Fer , la masse volumique 55,845 " << endl;
		Molecule5 = Fer;
		break;
	case 27:
		cout << "Vous avez choisi : Le Cobalt , la masse volumique 58,933194" << endl;
		Molecule5 = Cobalt;
		break;
	case 28:
		cout << "Vous avez choisi : Le Nickel , la masse volumique 58,6934" << endl;
		Molecule5 = Nickel;
		break;
	case 29:
		cout << "Vous avez choisi : Le Cuivre , la masse volumique 63,546" << endl;
		Molecule5 = Cuivre;
		break;
	case 30:
		cout << "Vous avez choisi : Le Zinc , la masse volumique 65,409" << endl;
		Molecule5 = Zinc;
		break;
	case 31:
		cout << "Vous avez choisi : Le Gallium , la masse volumique 69,723" << endl;
		Molecule5 = Gallium;
		break;
	case 32:
		cout << "Vous avez choisi : Le Germanium , la masse volumique 72,64" << endl;
		Molecule5 = Germanium;
		break;
	case 33:
		cout << "Vous avez choisi : L'Arsenic , la masse volumique 74,921595" << endl;
		Molecule5 = Arsenic;
		break;
	case 34:
		cout << "Vous avez choisi : Le Sélénium , la masse volumique 78,971" << endl;
		Molecule5 = Selenium;
		break;
	case 35:
		cout << "Vous avez choisi : Le Brome , la masse volumique 79,904" << endl;
		Molecule5 = Brome;
		break;
	case 36:
		cout << "Vous avez choisi : Le Krypton , la masse volumique 83,798" << endl;
		Molecule5 = Krypton;
		break;
	case 37:
		cout << "Vous avez choisi : Le Rubidium , la masse volumique 85,4678" << endl;
		Molecule5 = Rubidium;
		break;
	case 38:
		cout << "Vous avez choisi : Le Strontium , la masse volumique 87,62" << endl;
		Molecule5 = Strontium;
		break;
	case 39:
		cout << "Vous avez choisi : Le Yttrium , la masse volumique 88,90584" << endl;
		Molecule5 = Yttrium;
		break;
	case 40:
		cout << "Vous avez choisi : Le Zirconium , la masse volumique 91,224" << endl;
		Molecule5 = Zirconium;
		break;
	case 41:
		cout << "Vous avez choisi : Le Niobium , la masse volumique 92,90637" << endl;
		Molecule5 = Niobium;
		break;
	case 42:
		cout << "Vous avez choisi : Le Molybdene , la masse volumique 95,95" << endl;
		Molecule5 = Molybdene;
		break;
	case 43:
		cout << "Vous avez choisi : Le Technetium , la masse volumique 98" << endl;
		Molecule5 = Technetium;
		break;
	case 44:
		cout << "Vous avez choisi : Le Ruthenium , la masse volumique 101,07" << endl;
		Molecule5 = Ruthenium;
		break;
	case 45:
		cout << "Vous avez choisi : Le Rhodium , la masse volumique 102,90550" << endl;
		Molecule5 = Rhodium;
		break;
	case 46:
		cout << "Vous avez choisi : Le Palladium , la masse volumique 106,42" << endl;
		Molecule5 = Palladium;
		break;
	case 47:
		cout << "Vous avez choisi : L'Argent , la masse volumique 107,8682" << endl;
		Molecule5 = Argent;
		break;
	case 48:
		cout << "Vous avez choisi : Le Cadmium, la masse volumique 112,414" << endl;
		Molecule5 = Cadmium;
		break;
	case 49:
		cout << "Vous avez choisi : Le Indium , la masse volumique 114,818" << endl;
		Molecule5 = Indium;
		break;
	case 50:
		cout << "Vous avez choisi : L'Etain , la masse volumique 118,710" << endl;
		Molecule5 = Etain;
		break;
	case 51:
		cout << "Vous avez choisi : L'Antimoine , la masse volumique 121,760" << endl;
		Molecule5 = Antimoine;
		break;
	case 52:
		cout << "Vous avez  choisi : La Tellure , la masse volumique 127,60" << endl;
		Molecule5 = Tellure;
		break;
	case 53:
		cout << "Vous avez choisi : La Iode , la masse volumique 126,90447" << endl;
		Molecule5 = Iode;
		break;
	case 54:
		cout << "Vous avez choisi : Le Xeon , la masse volumique 131,293" << endl;
		Molecule5 = Xeon;
		break;
	case 55:
		cout << "Vous avez choisi : Le Césium , la masse volumique 132,90545196" << endl;
		Molecule5 = Cesium;
		break;
	case 56:
		cout << "Vous avez choisi : Le Baryum , la masse volumique 137,327" << endl;
		Molecule5 = Baryum;
		break;
	case 57:
		cout << "Vous avez choisi : Le Lanthane , la masse volumique 138,90547" << endl;
		Molecule5 = Lanthane;
		break;
	case 58:
		cout << "Vous avez choisi : Le Cerium , la masse volumique 140,116" << endl;
		Molecule5 = Cerium;
		break;
	case 59:
		cout << "Vous avez choisi : Le Praseodyme , la masse volumique 140,90766" << endl;
		Molecule5 = Praseodyme;
		break;
	case 60:
		cout << "Vous avez choisi : Le Neodyme , la masse volumique 144,242" << endl;
		Molecule5 = Neodyme;
		break;
	case 61:
		cout << "Vous avez choisi : Le Prométhium , la masse volumique 145" << endl;
		Molecule5 = Promethium;
		break;
	case 62:
		cout << "Vous avez choisi : Le Samarium , la masse volumique 150,36" << endl;
		Molecule5 = Samarium;
		break;
	case 63:
		cout << "Vous avez choisi : Le Europium , la masse volumique 151,964" << endl;
		Molecule5 = Europium;
		break;
	case 64:
		cout << "Vous avez choisi : Le Gadolinium , la masse volumique 157,25" << endl;
		Molecule5 = Gadolinium;
		break;
	case 65:
		cout << "Vous avez choisi : Le Terbium , la masse volumique 158,92534" << endl;
		Molecule5 = Terbium;
		break;
	case 66:
		cout << " Vous avez choisi : Le Dysprosium , la masse volumique 162,500" << endl;
		Molecule5 = Dysprosium;
		break;
	case 67:
		cout << "Vous avez choisi : Le Holmium , la masse volumique 164,93033" << endl;
		Molecule5 = Holmium;
		break;
	case 68:
		cout << "Vous avez choisi : L'Erbium , la masse volumique 167,259" << endl;
		Molecule5 = Holmium;
		break;
	case 69:
		cout << "Vous avez choisi : Le Thulium , la masse volumique 168,93422" << endl;
		Molecule5 = Thulium;
		break;
	case 70:
		cout << "Vous avez choisi : Le Ytterbium , la masse volumique 173,04" << endl;
		Molecule5 = Ytterbium;
		break;
	case 71:
		cout << "Vous avez choisi : Le Lutecium , la masse volumique 174,9668" << endl;
		Molecule5 = Lutecium;
		break;
	case 72:
		cout << "Vous avez choisi : Le Hafnium , la masse volumique 174,9668" << endl;
		Molecule5 = Hafnium;
		break;
	case 73:
		cout << "Vous avez choisi : Le Tantale , la masse volumique 180,94788" << endl;
		Molecule5 = Tantale;
		break;
	case 74:
		cout << "Vous avez choisi : Le Tungstène , la masse volumique 183,84" << endl;
		Molecule5 = Tungstene;
		break;
	case 75:
		cout << "Vous avez choisi : Le Rhenium , la masse volumique 186,207" << endl;
		Molecule5 = Rhenium;
		break;
	case 76:
		cout << "Vous avez choisi : L'Osmium , la masse volumique 190,23" << endl;
		Molecule5 = Osmium;
		break;
	case 77:
		cout << "Vous avez choisi : L'Iridium , la masse volumique 192,217" << endl;
		Molecule5 = Iridium;
		break;
	case 78:
		cout << "Vous avez choisi : Le Platine , la masse volumique 195,084" << endl;
		Molecule5 = Platine;
		break;
	case 79:
		cout << "Vous avez choisi : L'Or , la masse volumique 196,966569" << endl;
		Molecule5 = Or;
		break;
	case 80:
		cout << "Vous avez choisi : Le Mercure , la masse volumique 200,59" << endl;
		Molecule5 = Mercure;
		break;
	case 81:
		cout << "Vous avez choisi : Le Thallium , la masse volumique 204,3833" << endl;
		Molecule5 = Thallium;
		break;
	case 82:
		cout << "Vous avez choisi : Le Plomb , la masse volumique 207,2" << endl;
		Molecule5 = Plomb;
		break;
	case 83:
		cout << "Vous avez choisi : Le Bismuth , la masse volumique 208,98040" << endl;
		Molecule5 = Bismuth;
		break;
	case 84:
		cout << "Vous avez choisi : Le Polonium , la masse volumique 209" << endl;
		Molecule5 = Polonium;
		break;
	case 85:
		cout << "Vous avez choisi : L'Astate , la masse volumique 210" << endl;
		Molecule5 = Astate;
		break;
	case 86:
		cout << "Vous avez choisi : Le Radon , la masse volumique 222" << endl;
		Molecule5 = Radon;
		break;
	case 87:
		cout << "Vous avez choisi : Le Francium , la masse volumique 223" << endl;
		Molecule5 = Francium;
		break;
	case 88:
		cout << "Vous avez choisi : Le Radium , la masse volumique 226,0254" << endl;
		Molecule5 = Radium;
		break;
	case 89:
		cout << "Vous avez choisi : L'Actinium , la masse volumique 227" << endl;
		Molecule5 = Actinium;
		break;
	case 90:
		cout << "Vous avez choisi : Le Thorium , la masse volumique 232,0377" << endl;
		Molecule5 = Thorium;
		break;
	case 91:
		cout << "Vous avez choisi : Le Protactinium , la masse volumique 231,03588" << endl;
		Molecule5 = Protactinium;
		break;
	case 92:
		cout << "Vous avez choisi : L'Uranium , la masse volumique 238,02891" << endl;
		Molecule5 = Uranium;
		break;
	case 93:
		cout << "Vous avez choisi : Le Neptunium , la masse volumique 237" << endl;
		Molecule5 = Neptunium;
		break;
	case 94:
		cout << "Vous avez choisi : Le Plutonium , la masse volumique 244,06" << endl;
		Molecule5 = Plutonium;
		break;
	case 95:
		cout << "Vous avez choisi : L'Americium , la masse volumique 241,06" << endl;
		Molecule5 = Americium;
		break;
	case 96:
		cout << "Vous avez choisi : Le Curium , la masse volumique 247" << endl;
		Molecule5 = Curium;
		break;
	case 97:
		cout << "Vous avez choisi : Le Berkelium , la masse volumique 247" << endl;
		Molecule5 = Berkelium;
		break;
	case 98:
		cout << "Vous avez choisi : Le Californium , la masse volumique 251" << endl;
		Molecule5 = Californium;
		break;
	case 99:
		cout << "Vous avez choisi : Le Einsteinium , la masse volumique 252" << endl;
		Molecule5 = Einsteinium;
		break;
	case 100:
		cout << "Vous avez choisi : Le Fermium , la masse volumique 257" << endl;
		Molecule5 = Fermium;
		break;
	case 101:
		cout << "Vous avez choisi : Le Mendelevium , la masse volumique 258" << endl;
		Molecule5 = Mendelevium;
		break;
	case 102:
		cout << "Vous avez choisi : Le Nobelium , la masse volumique 259" << endl;
		Molecule5 = Nobelium;
		break;
	case 103:
		cout << "Vous avez choisi : Le Lawrencium , la masse volumique 266" << endl;
		Molecule5 = Lawrencium;
		break;
	case 104:
		cout << "Vous avez choisi : Le Rutherfordium , la masse columique 267" << endl;
		Molecule5 = Rutherfordium;
		break;
	case 105:
		cout << "Vous avez choisi : Le Dubnium , la masse volumique 268" << endl;
		Molecule5 = Dubnium;
		break;
	case 106:
		cout << "Vous avez choisi : Le Seaborgium , la masse volumique 269" << endl;
		Molecule5 = Seaborgium;
		break;
	case 107:
		cout << "Vous avez choisi : Le Bohrium , la masse volumique 270" << endl;
		Molecule5 = Bohrium;
		break;
	case 108:
		cout << "Vous avez choisi : Le Hassium , la masse volumique 277" << endl;
		Molecule5 = Hassium;
		break;
	case 109:
		cout << "Vous avez choisi : Le Meitnerium , la masse volumique 278" << endl;
		Molecule5 = Meitnerium;
		break;
	case 110:
		cout << "Vous avez choisi : Le Darmstadtium , la masse volumique 281" << endl;
		Molecule5 = Darmstadtium;
		break;
	case 111:
		cout << "Vous avez choisi : Le Roentgenium , la masse volumique 282" << endl;
		Molecule5 = Roentgenium;
		break;
	case 112:
		cout << "Vous avez choisi : Le Copernicium , la masse volumique 285" << endl;
		Molecule5 = Copernicium;
		break;
	case 113:
		cout << "Vous avez choisi : Le Nihonium , la masse volumique 286" << endl;
		Molecule5 = Nihonium;
		break;
	case 114:
		cout << "Vous avez choisi : Le Flerovium , la masse volumique 289" << endl;
		Molecule5 = Flerovium;
		break;
	case 115:
		cout << "Vous avez choisi : Le Moscovium , la masse volumique 289" << endl;
		Molecule5 = Moscovium;
		break;
	case 116:
		cout << "Vous avez choisi : Le Livermorium , la masse volumique 293" << endl;
		Molecule5 = Livermorium;
		break;
	case 117:
		cout << "Vous avez choisi : Le Tennesse , la masse volumique 294" << endl;
		Molecule5 = Tennesse;
		break;
	case 118:
		cout << "Vous avez choisi : Le Oganesson , la masse volumique 294" << endl;
		Molecule5 = Oganesson;
		break;
	default:
		cout << "Retour au menu principal" << endl;
		break;
	}

	return Molecule5;

}
