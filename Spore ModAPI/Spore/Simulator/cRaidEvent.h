#pragma once

namespace Simulator
{
	class cRaidEvent
	{
	public:
		static const uint32_t TYPE = 0x3960c0a;
		static const uint32_t NOUN_ID = 0x3960c0e;
	protected:
		int mBomberIndex;
		int mMaxHealth;
		int mDamageRemainderUFO;
		int mStolenSpiceFraction;
		int mCanStart;
		int mBackgroundShipsList;
		int mNumPirates;
		int mNumFighters;
		int mNumBombers;
		int mPendingUFOKey;
		int mTimeOfArrivalMS;
		int mWaitingForRaid;
		int mAttackerEmpire;
		int mIsPlayerSummoned;
		int mUFOSpawnLocation;
		int mUFOsLeaveOnArrival;
		int mGalaxyBomber;
		int mOriginStarRecordID;
		int mShouldDestroyColonyObject;
		int mShowDefaultEventLog;
		int mDamageRemainder;
	};
}