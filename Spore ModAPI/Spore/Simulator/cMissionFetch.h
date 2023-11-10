#pragma once
#include <Spore\Simulator\cMission.h>

namespace Simulator
{
	class cMissionFetch
		: cMission
	{
	public:
		static const uint32_t TYPE = 0x2afd27e;
		static const uint32_t NOUN_ID = 0x2afd284;
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