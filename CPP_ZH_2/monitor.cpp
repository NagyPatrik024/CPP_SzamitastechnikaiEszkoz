#include "monitor.h"

Monitor::Monitor(int hasznaltorak)
	:SzamitastechnikaiEszkoz(hasznaltorak),
	mAzonosito("M" + std::to_string(_id))
{
}

std::string Monitor::getAzonosito() const
{
	return mAzonosito;
}
