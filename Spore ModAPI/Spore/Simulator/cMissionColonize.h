#pragma once
#include <Spore\Simulator\cMission.h>

namespace Simulator
{
	class cMissionColonize
		: cMission
	{
	protected:
		int SPG_ColonizeMissionPlanet;
		int SPG_ColonizeMissionSolar;
		int mBuildingsRequired;
		int mNeedOneFullRow;
		int mColonizeMissionState;

	};
}