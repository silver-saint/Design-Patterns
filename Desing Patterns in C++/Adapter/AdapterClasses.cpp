#include <iostream>

class Device
{
public:
	virtual void power() = 0;
	std::string data;
};

class USADevice : public Device
{
public:
	virtual void power() override
	{
		std::cout << data << std::endl;
	}
};

class EuropeDevice : public Device
{
public:
	virtual void power() override
	{
		std::cout << data << std::endl;
	}
};

class USASocket
{
public:
	void plug(USADevice& dev)
	{
		std::cout << "Using electricity from the USA!" << std::endl;
		
		dev.power();
	}
};

class EuropeSocket
{
public:
	void plug(EuropeDevice dev)
	{
		std::cout << "Using electricity in Europe!" << std::endl;
		
		dev.power();
	}
};

EuropeDevice europeAdapter(USADevice& usadev)
{
	EuropeDevice dev;
	dev.data = usadev.data;
	
	return dev;
}

USADevice usaAdapter(EuropeDevice& eudev)
{
	USADevice dev;
	dev.data = eudev.data;
	
	return dev;
}

int main(int argc, char* argv[])
{
	USADevice dev;
	dev.data = "Fridge";
	EuropeSocket eu;
	auto euad = europeAdapter(dev);
	
	eu.plug(euad);
	
	USASocket us;
	auto usad = usaAdapter(euad);
	us.plug(usad);
}
