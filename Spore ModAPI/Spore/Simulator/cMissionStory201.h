#pragma once
#include <Spore\Simulator\cMission.h>

namespace Simulator
{
	class cMissionStory201
		: cMission
	{
	protected:
		int SPG_Story201EnteredRuinPlanet;
		int SPG_Story201EnteredUFOWreckPlanet;
		int SPG_Story201ScannedUFOWreck;
		int SPG_Story201ScannedRuin;
		int mDelayScanCinematic2;
		int mDelayScanCinematic1;
		int mUFOWreckTargetPlanet;
		int mStory201State;

	};
}