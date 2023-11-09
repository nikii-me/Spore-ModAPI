#pragma once
#include <Spore\Simulator\cMission.h>

namespace Simulator 
{
	class cMissionChangeArchetype
		: public cMission
	{
	public:
		static const uint32_t TYPE = 0x462227e;
		static const uint32_t NOUN_ID = 0x4622285;

		/* 1F0h */	int mChangeArchetypeState;
		/* 1F4h */	Simulator::Archetypes mChangeArchetypeTo;
		/* 1F8h */	uint32_t mNumTotalActions;
		/* 1FCh */	int mProgressSoFar;
		/* 200h */	eastl::vector<uint32_t> mKeyHistory;
	};
	ASSERT_SIZE(cMissionChangeArchetype, 0x218);
}