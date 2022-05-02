#pragma once
#include "szamitastechnikaiEszkoz.h"
#include "tisztithato.h"
#include <iostream>


class Laptop : public SzamitastechnikaiEszkoz, ITisztithato
{
public:
	Laptop(int hasznaltorak);
	~Laptop() override = default;
	// Inherited via ITisztithato
	virtual void Tisztit() override;
	std::string getAzonosito() const;

private:
	std::string mAzonosito;
	int mutolsoTisztitas = 0;


};

