#pragma once
#include<thread>
#include<iostream>
class Plugin
{
public:
	Plugin();
	~Plugin();
private:
	std::thread pthread;
};

Plugin::Plugin(const std::string pluginname)
{
	std::cout << "plugin loaded " << pluginname;
}

Plugin::~Plugin()
{
}

constexpr bool _iswindows() {
	if (WIN32) {
		return false;
	} else {
		return true;
	}
}