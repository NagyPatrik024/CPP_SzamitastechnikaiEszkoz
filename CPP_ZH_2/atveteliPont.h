#pragma once
#include <string>
#include <iostream>
#include <stack>
#include "szamitastechnikaiEszkoz.h"
#include "laptop.h"
#include "monitor.h"
#include "projektor.h"

enum class EszkozTipus
{
	Laptop, Projektor, Monitor
};

class AtveteliPont
{
public:
	AtveteliPont();
	void Leadas(SzamitastechnikaiEszkoz& eszkoz);
	SzamitastechnikaiEszkoz Felvesz(EszkozTipus tipus);
private:
	static int _id;
	std::string mAzonosito;
	std::stack<Monitor> mMonitorok;
	std::stack<Projektor> mProjektorok;
	std::stack<Laptop> mLaptopok;

};

