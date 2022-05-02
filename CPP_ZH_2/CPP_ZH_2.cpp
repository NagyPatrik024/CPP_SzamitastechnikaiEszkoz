// CPP_ZH_2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <iostream>
#include "SzamitastechnikaiEszkoz.h"
#include "monitor.h"
#include "projektor.h"
#include "laptop.h"
#include "atveteliPont.h"
#include <vector>

int main()
{
	Monitor m1(320);
	Monitor m2(450);
	Monitor m3(90);
	Monitor m4(110);
	Projektor p1(400);
	Projektor p2(800);
	Projektor p3(120);
	Laptop l1(150);
	Laptop l2(130);
	Laptop l3(250);
	Laptop l4(270);

	std::vector<SzamitastechnikaiEszkoz> eszkozok;
	eszkozok.push_back(m1);
	eszkozok.push_back(m2);
	eszkozok.push_back(m3);
	eszkozok.push_back(m4);
	eszkozok.push_back(p1);
	eszkozok.push_back(p2);
	eszkozok.push_back(p3);
	eszkozok.push_back(l1);
	eszkozok.push_back(l2);
	eszkozok.push_back(l3);
	eszkozok.push_back(l4);
	
	AtveteliPont ap1;
	AtveteliPont ap2;
	AtveteliPont ap3;


	ap3.Leadas(m1);
	ap3.Leadas(m2);
	ap2.Leadas(m3);
	ap3.Leadas(m4);

	ap1.Leadas(p1);
	ap2.Leadas(p2);
	ap3.Leadas(p3);

	ap1.Leadas(l1);
	ap2.Leadas(l2);
	ap3.Leadas(l3);
	ap3.Leadas(l4);

	auto laptop = ap1.Felvesz(EszkozTipus::Laptop);
	auto projektor = ap2.Felvesz(EszkozTipus::Projektor);
	auto monitor = ap3.Felvesz(EszkozTipus::Monitor);


}


