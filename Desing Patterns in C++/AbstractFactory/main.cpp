
#include <iostream>

class TextField
{
public:
	virtual std::string render(const char* text) = 0;
};

class WindowsText : public TextField
{
public:
	virtual std::string render(const char* text) override
	{
		std::cout << "Windows: " << text << std::endl;
		return std::string(text);
	}
};

class LinuxText : public TextField
{
public:
	virtual std::string render(const char* text) override
	{
		std::cout << "Linux: " << text << std::endl;
		return std::string(text);
	}
};

enum Platform
{
	PLATFORM_WINDOWS,
	PLATFORM_LINUX,
	PLATFORM_MAC,
	PLATFORM_BSD
};

Platform platform;

std::string Text(const char* text)
{
	if (platform == PLATFORM_WINDOWS)
	{
		WindowsText txt;
		return txt.render(text);
	}
	else if (platform == PLATFORM_LINUX)
	{
		LinuxText txt;
		return txt.render(text);
	}
	else if (platform == PLATFORM_BSD)
	{
		return std::string("BSD is not supported!");
	}
	else
	{
		return std::string("Mac is not supported!");
	}
}

int main()
{
	std::string plt;

	std::cout << "Enter the desired platform for the application: " << std::endl;
	std::cout << "  1. Windows" << std::endl;
	std::cout << "  2. Linux" << std::endl;
	std::cout << "  3. MacOS/Apple" << std::endl;
	std::cout << "  4. BSD" << std::endl;
	std::cin >> plt;

	if (plt == "1")
	{
		platform = PLATFORM_WINDOWS;
	}
	else if (plt == "2")
	{
		platform = PLATFORM_LINUX;
	}
	else if (plt == "3")
	{
		platform = PLATFORM_MAC;
	}
	else if (plt == "4")
	{
		platform = PLATFORM_BSD;
	}
	else
	{
		std::cout << "Error: No compatible platform was specified!" << std::endl;
		return 0;
	}

	std::cout << Text("Hello, World!") << std::endl;
}
