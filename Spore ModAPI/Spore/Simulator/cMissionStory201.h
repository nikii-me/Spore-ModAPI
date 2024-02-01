#pragma once
#include <Spore\Simulator\cMission.h>

namespace Simulator
{
	class cMissionStory201
		: cMission
	{
	public:
		static const uint32_t TYPE = 0x422227e;
		static const uint32_t NOUN_ID = 0x4222285;
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