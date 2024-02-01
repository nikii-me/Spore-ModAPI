#pragma once
#include <Spore\Simulator\cMission.h>

namespace Simulator
{
	class cMissionTradeRoute
		: cMission
	{
	public:
		static const uint32_t TYPE = 0x4470926;
		static const uint32_t NOUN_ID = 0x447092d;
	protected:
		int SPG_TutorialTradeRoute;
		int mTradeRouteState;

	};
}