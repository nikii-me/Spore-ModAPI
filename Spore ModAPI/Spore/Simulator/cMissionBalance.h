#pragma once
#include <Spore\Simulator\cMission.h>

namespace Simulator
{
	class cMissionBalance
		: cMission
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
		/* 94h */	virtual void OnMissionCompleted() override;
		/* B8h */	virtual void GetTitleText(eastl::string16& dst) override;
		/* F8h */	virtual bool HasBeenFulfilled() override;
		/* 15Ch */	virtual bool func15Ch() override;
		/* 184h */	virtual float func184h(int, int) override;

	public:
		/* 1F0h */	int mBalanceMissionState;
		/* 1F4h */	int mTargetNumFullRows;
		
	};
	ASSERT_SIZE(cMissionBalance, 0x1f8);
}