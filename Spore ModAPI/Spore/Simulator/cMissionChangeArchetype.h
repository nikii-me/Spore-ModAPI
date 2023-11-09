#pragma once
#include <Spore\Simulator\cMission.h>

namespace Simulator 
{
	class cMissionChangeArchetype
		: public cMission
	{
	public:

	protected:
		/* 1F0h */	int field_1F0;
		/* 1F4h */	int field_1F4;
		/* 1F8h */	int field_1F8;
		/* 1FCh */	int field_1FC;
		/* 200h */	int field_200;
		/* 204h */	int field_204;
		/* 208h */	int field_208;

		/* ???? */	int mChangeArchetypeTo;
		/* ???? */	int mProgressSoFar;
		/* ???? */	int mChangeArchetypeState;
		/* ???? */	int mNumTotalActions;
		/* ???? */	int mKeyHistory;
	};
}