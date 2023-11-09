#pragma once
#include <Spore\Simulator\cMission.h>

namespace Simulator
{
	class cMissionMultiDelivery
		: cMission
	{
	protected:
		int mItemList;
		int mBuyerList;
		int mMultiDeliveryMissionState;
		int mArtifactCargoItemID;
	};
}