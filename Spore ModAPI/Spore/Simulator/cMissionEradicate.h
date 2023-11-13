#pragma once
#include <Spore\Simulator\cMission.h>

namespace Simulator
{
	class cMissionEradicate
		: cMission
	{
	public:
		static const uint32_t TYPE = 0x2f9998c;
		static const uint32_t NOUN_ID = 0x2f99994;


		/* 10h */	virtual bool Write(ISerializerStream* stream) override;
		/* 14h */	virtual bool Read(ISerializerStream* stream) override;
		/* 1Ch */	virtual bool WriteToXML(XmlSerializer*) override;
		/* 20h */	virtual uint32_t GetNounID() const override;
		/* 38h */	virtual uint32_t GetCastID() const override;
		/* 54h */	virtual int func54h();							//Returns mNumDiseasedKills
		/* 58h */	virtual int func58h();							//Returns mTotalNumKillsNeeded
		/* 5Ch */	virtual int func5Ch();							//Same as func58h()
		/* 78h */	virtual void Initialize() override;
		/* 7Ch */	virtual MissionState Update(int deltaTime) override;
		/* 88h */	virtual void OnMissionAccept() override;
		/* 94h */	virtual void OnMissionCompleted() override;
		/* 9Ch */	virtual void FailMission() override;
		/* B8h */	virtual void GetTitleText(eastl::string16& dst) override;
		/* BCh */	virtual void GetUIMediumDescText(eastl::string16& dst) override;
		/* C0h */	virtual void GetUILongDescText(eastl::string16& dst) override;
		/* F8h */	virtual bool HasBeenFulfilled() override;
		/* FCh */	virtual bool HasFailed() override;
		/* 100h */	virtual bool func100h() override;					//Returns true on mEradicateMissionState == 3
		/* 118h */	virtual bool TranslateToken(uint32_t tokenID, eastl::string16& dst) override;
		/* 11Ch */	virtual uint32_t GetCompletedEventLogID() override;
		/* 124h */	virtual void func120h(int) override;
		/* 140h */	virtual bool func140h(int, int) override;			//Checks if mEradicateType == CityCitizens (0x1e8763), then returns true if 1st param equals mpTargetPlanet(?)
		/* 144h */	virtual void AddMessageListeners() override;
		/* 148h */	virtual void RemoveMessageListeners() override;
		/* 15Ch */	virtual bool func15Ch() override;					//Passes class' this to another function
		/* 184h */	virtual float func184h(int, int) override;
		/* 188h */	virtual int CalculateMissionDuration() override;	//Assigns mTotalNumKillsNeeded to mDuration
		/* 18Ch */	virtual bool PickTargetAnimalSpecies() override;	//First check is mEradicateType != Animals

		/* 1A4h */	virtual int32_t func1A4h(int, int, int);				//Returns value of property missionEradicateMaxNumHealthyKills (0xbeac6fe1)
		/* 1A8h */	virtual int32_t func1A8h(int, int, int);				//Returns value of property missionEradicateNumKillsNeeded (0xbeac6fe2)
		/* 1ACh */	virtual int32_t func1ACh(int, int, int);				//Returns value of property missionEradicateNumCreatures (0xc8d23e7f)
		/* 1B0h */	virtual int func1B0h();								//mMaxNumDiseasedCreatures - mNumDiseasedKills
		/* 1B4h */	virtual int32_t func1B4h(int, int, int);				//Returns value of property missionEradicateMinPerHerd (0x7a2db2ee)
		/* 1B8h */	virtual int32_t func1B8h(int, int, int);				//Returns value of property missionEradicateMaxPerHerd (0x7a2db2ef)

	public:
		/* 1F0h */	int mEradicateType;				//-1
		/* 1F4h */	int mEradicateMissionState;
		/* 1F8h */	int mMaxNumDiseasedCreatures;
		/* 1FCh */	int mMinDiseasedPerHerd;
		/* 200h */	int mMaxDiseasedPerHerd;
		/* 204h */	int mTotalNumKillsNeeded;
		/* 208h */	int mNumDiseasedKills;
		/* 20Ch */	int mMaxNumHealthyKills;
		/* 210h */	int mNumHealthyKills;
		/* 214h */	uint8_t mCanFail;				//1
		/* 218h */	int field_218;					//-1
		/* 21Ch */	int field_21C;					//-1
		/* 220h */	int field_220;					//eastl allocator called
		/* 224h */	int field_224;
		/* 228h */	int field_228;
	};
	ASSERT_SIZE(cMissionEradicate, 0x238);
}