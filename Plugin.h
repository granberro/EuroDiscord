#pragma once
#include <EuroScopePlugIn.h>
#include <string>


using namespace std;
using namespace EuroScopePlugIn;

#define MY_PLUGIN_NAME		"Discord EuroScope Presence"
#define MY_PLUGIN_VERSION   "0.0.1"
#define MY_PLUGIN_DEVELOPER "Juan Berrocal"
#define MY_PLUGIN_COPYRIGHT "GPL v3"


class EuroDiscord : public EuroScopePlugIn::CPlugIn
{
private:


public:
	EuroDiscord();
	virtual ~EuroDiscord();

};