#pragma once
#include <Spore\Simulator\cMission.h>

namespace Simulator
{
	class cMissionFindAliens
		: cMission
	{
	protected:
		int mContactGrob;
		int mNumAliensFound;
		int mNumAliensToFind;
		int mFindAliensState;
	};
}