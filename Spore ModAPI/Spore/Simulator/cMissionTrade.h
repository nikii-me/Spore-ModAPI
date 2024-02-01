#pragma once
#include <Spore\Simulator\cMission.h>

namespace Simulator
{
	class cMissionTrade
		: cMission
	{
	public:
		static const uint32_t TYPE = 0x2aeefff;
		static const uint32_t NOUN_ID = 0x2adedff;
	protected:
		int mSoldItem;
		int mBoughtItem;
		int mTradeKind;
		int mTradeItemType;
		int mTradeState;

	};
}