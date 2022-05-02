#include "projektor.h"

Projektor::Projektor(int hasznaltorak)
	: SzamitastechnikaiEszkoz(hasznaltorak)
	, mAzonosito("P" + std::to_string(_id))
{
}

void Projektor::Tisztit()
{
	if (mHasznaltOrakSzama - mutolsoTisztitas > 100)
	{
		std::cout << mAzonosito << " : " << mutolsoTisztitas << " hasznaltorakszama:" << mHasznaltOrakSzama << std::endl;
		mutolsoTisztitas = mHasznaltOrakSzama;
	}
}

std::string Projektor::getAzonosito() const
{
	return mAzonosito;
}
