#pragma once
#include <Spore\Simulator\cMission.h>

namespace Simulator
{
	class cMissionWar
		: cMission
	{
	public:
		static const uint32_t TYPE = 0x330fc43;
		static const uint32_t NOUN_ID = 0x330fc49;
	protected:
		int SPG_WarEnteredPlanet;
		int mInitialNumCities;
		int mbTurretsOnly;
		int mNumCitiesDestroyed;
		int mWarMissionState;
	};
}