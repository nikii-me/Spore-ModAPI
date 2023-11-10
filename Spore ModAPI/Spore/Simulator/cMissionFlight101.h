#pragma once
#include <Spore\Simulator\cMission.h>

namespace Simulator
{
	class cMissionFlight101
		: cMission
	{
	public:
		static const uint32_t TYPE = 0x422227d;
		static const uint32_t NOUN_ID = 0x4222284;
	protected:
		int mbAcceptedVisitCitiesMission;
		int mDiseaseEffectID;
		int mFlight101State;
		int mEventID;
		int mTimeToSoftFail;

	};
}