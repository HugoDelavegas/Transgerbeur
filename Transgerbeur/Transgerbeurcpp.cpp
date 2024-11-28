//TP5 sruct Enum
//Leroux Erwan
//29/11/2024
#include <iostream>
#include<stdio.h>
using namespace std;
#include "FonctTP5.h"
int main()
{
	cout << "\t\t\t\t\t----Transgerbeur----";
	SRoll  ro1;
	cout << "\nSelectionnez la longueur des rouleaux: ";
	cin >> ro1.lenght;
	ro1.number=9;
	Spalette pa1;
	cout << "Selectionnez le poids des palettes: ";
	cin >> pa1.weight;
	strcpy_s(pa1.reference,"KIJU");
	Content etatc1;
	etatc1 = vide;
	UContent cont;
	cont.palette=pa1;
	cont.roll=ro1;

	Slocker c1;
	c1.px = 2;
	c1.py = 3;
	c1.contenue.palette = pa1;
	c1.etat = palette;
	
	Slocker c2;
	c2.contenue.roll = ro1;
	c2.etat = roll;
	Slocker casier[9];
	casier[0] = c1;
	casier[2] = c2;

	cout <<"\nTaille du casier 1: "<<sizeof(c1) << "\nTaille du casier 2: " << sizeof(c2) << "\nTaille du contenu: " << sizeof(Content) << "\nTaille du contenu: " << sizeof(UContent);
	cout << "\nTaille des Palettes: " << sizeof(Spalette) << "\nTaille des rouleaux: " << sizeof(SRoll);

	return(0);
}