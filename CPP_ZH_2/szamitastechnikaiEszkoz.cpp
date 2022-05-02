#include "szamitastechnikaiEszkoz.h"

int SzamitastechnikaiEszkoz::_id = 0;

SzamitastechnikaiEszkoz::SzamitastechnikaiEszkoz(int hasznaltorak)
	:mId(_id++)
	, mHasznaltOrakSzama(hasznaltorak)
	, mAtveteliPont("0")
{
}

SzamitastechnikaiEszkoz& SzamitastechnikaiEszkoz::setHasznalatiOra(const int ora)
{
	mHasznaltOrakSzama = mHasznaltOrakSzama + ora;
	return *this;
}

SzamitastechnikaiEszkoz& SzamitastechnikaiEszkoz::setAtveteliPont(std::string pont)
{
	mAtveteliPont = pont;
	return *this;
}

int SzamitastechnikaiEszkoz::getOrak() const
{
	return mHasznaltOrakSzama;
}
