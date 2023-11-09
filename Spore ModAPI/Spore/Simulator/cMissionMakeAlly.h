#pragma once
#include <Spore\Simulator\cMission.h>

namespace Simulator
{
	class cMissionMakeAlly
		: cMission
	{
	protected:
		int SPG_FirstAlliancePossible;
		int mbAllianceBecamePossible;
		int mMakeAllyState;

	};
}