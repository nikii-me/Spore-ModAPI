#pragma once
#include <Spore\Simulator\cMission.h>

namespace Simulator
{
	class cMissionWar
		: cMission
	{
	protected:
		int SPG_WarEnteredPlanet;
		int mInitialNumCities;
		int mbTurretsOnly;
		int mNumCitiesDestroyed;
		int mWarMissionState;
	};
}