#pragma once
#include "szamitastechnikaiEszkoz.h"
#include "tisztithato.h"
#include <iostream>

class Projektor : public SzamitastechnikaiEszkoz, ITisztithato
{
public:
	Projektor(int hasznaltorak);
	~Projektor() override = default;
	// Inherited via ITisztithato
	virtual void Tisztit() override;
	std::string getAzonosito() const;
private:
	std::string mAzonosito;
	int mutolsoTisztitas = 0;

};

