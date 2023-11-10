#pragma once
#include <Spore\Simulator\cMission.h>

namespace Simulator
{
	class cMissionFindAliens
		: cMission
	{
	public:
		static const uint32_t TYPE = 0x3470928;
		static const uint32_t NOUN_ID = 0x347092f;
	protected:
		int mContactGrob;
		int mNumAliensFound;
		int mNumAliensToFind;
		int mFindAliensState;
	};
}