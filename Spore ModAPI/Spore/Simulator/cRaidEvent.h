#pragma once

namespace Simulator
{
	class cRaidEvent
	{
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