#pragma once
#include <string>

class SzamitastechnikaiEszkoz
{
public:
	SzamitastechnikaiEszkoz(int hasznaltorak);
	virtual ~SzamitastechnikaiEszkoz() = default;
	SzamitastechnikaiEszkoz& setHasznalatiOra(const int ora);
	SzamitastechnikaiEszkoz& setAtveteliPont(std::string pont);
	int getOrak() const;
protected:
	static int _id;
	int mId;
	int mHasznaltOrakSzama;
	std::string mAtveteliPont;
};

