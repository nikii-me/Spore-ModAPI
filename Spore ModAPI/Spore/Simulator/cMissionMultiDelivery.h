#pragma once
#include <Spore\Simulator\cMission.h>

namespace Simulator
{
	class cMissionMultiDelivery
		: cMission
	{
	public:
		static const uint32_t TYPE = 0x35ed8f0;
		static const uint32_t NOUN_ID = 0x35ed8f6;
	protected:
		int mItemList;
		int mBuyerList;
		int mMultiDeliveryMissionState;
		int mArtifactCargoItemID;
	};
}