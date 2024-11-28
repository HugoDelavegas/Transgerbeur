#pragma once
#include <iostream>



struct Spalette
{
	int weight;
	char reference[20];
	
};
struct SRoll
{
	float lenght;
	int number;
};

union UContent
{
	Spalette palette;
	SRoll roll;
};
enum Content
{
	vide,palette,roll


};
struct Slocker
{
	int px;
	int py;
	UContent contenue;
	Content etat;
};