#pragma once
#include <Spore\Simulator\cMission.h>

namespace Simulator
{
	class cMissionAdventure
		: cMission
	{
	public:
		static const uint32_t TYPE = 0x463329e;
		static const uint32_t NOUN_ID = 0x46332a5;
	protected:
		int mAdventureID;
		int mAdventureState;
	};
}