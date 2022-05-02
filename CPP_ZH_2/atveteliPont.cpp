#include "atveteliPont.h"

int AtveteliPont::_id = 0;

AtveteliPont::AtveteliPont()
	:mAzonosito("AtveteliPont" + std::to_string(_id++))
{
}

void AtveteliPont::Leadas(SzamitastechnikaiEszkoz& eszkoz)
{
	std::cout << "Hany oran kersztul volt hasznalva az eszkoz? ";
	std::string hasznalatiIdo;
	std::cin >> hasznalatiIdo;

	eszkoz.setHasznalatiOra(stoi(hasznalatiIdo));


	if (dynamic_cast<Laptop*>(&eszkoz))
	{
		mLaptopok.push(dynamic_cast<Laptop&>(eszkoz));
		std::cout << mAzonosito << " " << dynamic_cast<Laptop*>(&eszkoz)->getAzonosito() << " " << eszkoz.getOrak() << std::endl;;
		dynamic_cast<Laptop*>(&eszkoz)->Tisztit();
		std::cout << std::endl;
	}
	else if (dynamic_cast<Projektor*>(&eszkoz))
	{
		mProjektorok.push(dynamic_cast<Projektor&>(eszkoz));
		std::cout << mAzonosito << " " << dynamic_cast<Projektor*>(&eszkoz)->getAzonosito() << " " << eszkoz.getOrak() << std::endl;
		dynamic_cast<Projektor*>(&eszkoz)->Tisztit();
		std::cout << std::endl;
	}
	else if (dynamic_cast<Monitor*>(&eszkoz))
	{
		mMonitorok.push(dynamic_cast<Monitor&>(eszkoz));
		std::cout << mAzonosito << " " << dynamic_cast<Monitor*>(&eszkoz)->getAzonosito() << " " << eszkoz.getOrak() << std::endl;
		std::cout << std::endl;
	}
}

SzamitastechnikaiEszkoz AtveteliPont::Felvesz(EszkozTipus tipus)
{

	if (tipus == EszkozTipus::Laptop)
	{
		auto laptop = mLaptopok.top();
		std::cout << mAzonosito << " " << laptop.getAzonosito() << " " << laptop.getOrak() << " " << std::endl;
		laptop.setAtveteliPont("0");
		return laptop;

	}
	else if (tipus == EszkozTipus::Projektor)
	{

		auto projektor = mProjektorok.top();
		std::cout << mAzonosito << " " << projektor.getAzonosito() << " " << projektor.getOrak() << " " << std::endl;
		projektor.setAtveteliPont("0");
		return projektor;
	}
	else if (tipus == EszkozTipus::Monitor)
	{

		auto monitor = mMonitorok.top();
		std::cout << mAzonosito << " " << monitor.getAzonosito() << " " << monitor.getOrak() << " " << std::endl;
		monitor.setAtveteliPont("0");
		return monitor;
	}
}
