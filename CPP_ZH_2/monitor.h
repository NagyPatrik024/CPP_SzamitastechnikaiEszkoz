#pragma once
#include "szamitastechnikaiEszkoz.h"

class Monitor : public SzamitastechnikaiEszkoz
{
public:
	Monitor(int hasznaltorak);
	~Monitor() override = default;
	std::string getAzonosito() const;
private:
	std::string mAzonosito;
};

