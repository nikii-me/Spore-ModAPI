#pragma once
#include <Spore\Simulator\cMission.h>

namespace Simulator
{
	/// This class represents the mission where the player must fill out a T-score row.
	/// More specifically, spaceevents~balance.prop is represented by this class.
	class cMissionBalance
		: public cMission
	{
	public:
		static const uint32_t TYPE = 0x3470927;
		static const uint32_t NOUN_ID = 0x347092e;

		/* 10h */	virtual bool Write(ISerializerStream* stream) override;
		/* 14h */	virtual bool Read(ISerializerStream* stream) override;
		/* 1Ch */	virtual bool WriteToXML(XmlSerializer*) override;
		/* 20h */	virtual uint32_t GetNounID() const override;
		/* 38h */	virtual uint32_t GetCastID() const override;
		/* 78h */	virtual void Initialize() override;
		/* 7Ch */	virtual MissionState Update(int deltaTime) override;

		/// WARNING: This function shares the same address with other cMission subclasses!
		/// Use virtual_detour with this function to get an appropriate 'this' parameter.
		/// You might also want to check from which class this function is called as well.
		/// The address is shared with cMissionChangeArchetype, cMissionExplore, ....
		/* B8h */	virtual void GetTitleText(eastl::string16& dst) override;

		/* F8h */	virtual bool HasBeenFulfilled() override;
		/* 15Ch */	virtual bool func15Ch() override;
		/* 184h */	virtual float func184h(int, int) override;

	public:
		/* 1F0h */	int mBalanceMissionState;
		/* 1F4h */	int mTargetNumFullRows;
	};
	ASSERT_SIZE(cMissionBalance, 0x1F8);
}