#pragma once
#include <Spore\Simulator\cMission.h>

namespace Simulator
{
	class cMissionTrade
		: cMission
	{
	protected:
		int mSoldItem;
		int mBoughtItem;
		int mTradeKind;
		int mTradeItemType;
		int mTradeState;

	};
}