#include "laptop.h"

Laptop::Laptop(int hasznaltorak)
	: SzamitastechnikaiEszkoz(hasznaltorak),
	mAzonosito("L" + std::to_string(_id))
{
}

void Laptop::Tisztit()
{
	std::cout << mAzonosito << " : " << mutolsoTisztitas << " hasznaltorakszama:" << mHasznaltOrakSzama << std::endl;
	mutolsoTisztitas = mHasznaltOrakSzama;
}

std::string Laptop::getAzonosito() const
{
	return mAzonosito;
}
