#pragma once
#include <Spore\Simulator\cMission.h>

namespace Simulator
{
	class cMissionFetch
		: cMission
	{
	protected:
		int mDropOffDistance;
		int mDropOffRequired;
		int mSamplerPlate;
		int mFetchCommodityKey;
		int mFetchAnimalSpeciesKey;
		int mFetchPlantSpeciesKey;
		int mFetchArtifactCargoItemID;
		int mTypeOfFetch;
		int mFetchMissionState;
		int mIsAnimal;
	};
}