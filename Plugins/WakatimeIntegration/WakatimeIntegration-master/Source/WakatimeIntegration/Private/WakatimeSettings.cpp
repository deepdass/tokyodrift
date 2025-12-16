#include "WakatimeSettings.h"

UWakatimeSettings::UWakatimeSettings()
{
	WakatimeBearerToken = TEXT("XXXXXXXX-XXXX-XXXX-XXXX-XXXXXXXXXXXX");
	WakatimeInterval = 60;
	WakatimeEndpoint = TEXT("https://wakatime.com/api/v1");
}