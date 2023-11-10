#pragma once
#include <Spore\Simulator\cMission.h>

namespace Simulator
{
	class cMissionColonize
		: cMission
	{
	public:
		static const uint32_t TYPE = 0x2ba2a01;
		static const uint32_t NOUN_ID = 0x2ba2a0e;
	protected:
		int SPG_ColonizeMissionPlanet;
		int SPG_ColonizeMissionSolar;
		int mBuildingsRequired;
		int mNeedOneFullRow;
		int mColonizeMissionState;

	};
}