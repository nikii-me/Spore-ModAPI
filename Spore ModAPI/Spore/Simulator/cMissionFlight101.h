#pragma once
#include <Spore\Simulator\cMission.h>

namespace Simulator
{
	class cMissionFlight101
		: cMission
	{
	protected:
		int mbAcceptedVisitCitiesMission;
		int mDiseaseEffectID;
		int mFlight101State;
		int mEventID;
		int mTimeToSoftFail;

	};
}