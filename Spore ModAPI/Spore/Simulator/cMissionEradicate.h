#pragma once
#include <Spore\Simulator\cMission.h>

namespace Simulator
{
	/// Represents the eradication missions in space stage.
	class cMissionEradicate
		: public cMission
	{
	public:
		static const uint32_t TYPE = 0x2f9998c;
		static const uint32_t NOUN_ID = 0x2f99994;

		/* 10h */	virtual bool Write(ISerializerStream* stream) override;
		/* 14h */	virtual bool Read(ISerializerStream* stream) override;
		/* 1Ch */	virtual bool WriteToXML(XmlSerializer*) override;
		/* 20h */	virtual uint32_t GetNounID() const override;
		/* 38h */	virtual uint32_t GetCastID() const override;

		/// Returns mNumDiseasedKills.
		/* 54h */	virtual int func54h();

		/// Returns mTotalNumKillsNeeded.
		/* 58h */	virtual int func58h();

		/// Shares the address with func58h().
		/* 5Ch */	virtual int func5Ch();

		/* 78h */	virtual void Initialize() override;
		/* 7Ch */	virtual MissionState Update(int deltaTime) override;
		/* 88h */	virtual void OnMissionAccept() override;
		/* 9Ch */	virtual void FailMission() override;
		/* B8h */	virtual void GetTitleText(eastl::string16& dst) override;
		/* BCh */	virtual void GetUIMediumDescText(eastl::string16& dst) override;
		/* C0h */	virtual void GetUILongDescText(eastl::string16& dst) override;
		/* F8h */	virtual bool HasBeenFulfilled() override;
		/* FCh */	virtual bool HasFailed() override;

		/// Returns true if mEradicateMissionState has a value of 3.
		/* 100h */	virtual bool func100h() override;

		/* 118h */	virtual bool TranslateToken(uint32_t tokenID, eastl::string16& dst) override;
		/* 11Ch */	virtual uint32_t GetCompletedEventLogID() override;
		/* 124h */	virtual void func120h(int) override;

		/// Checks if mEradicateType is equal to 0x1e8763 (CityCitizens) and returns true
		/// if the first parameter is equal to mpTargetPlanet.
		/* 140h */	virtual bool func140h(int, int) override;

		/* 144h */	virtual void AddMessageListeners() override;
		/* 148h */	virtual void RemoveMessageListeners() override;

		/* 15Ch */	virtual bool func15Ch() override;
		/* 184h */	virtual float func184h(int, int) override;

		/// Assigns the value of mTotalNumKillsNeeded to mDuration.
		/* 188h */	virtual int CalculateMissionDuration() override;

		/* 18Ch */	virtual bool PickTargetAnimalSpecies() override;

		/// Returns the value of property missionEradicateMaxNumHealthyKills (0xbeac6fe1).
		/* 1A4h */	virtual int func1A4h(int, int, int);				//Returns value of property missionEradicateMaxNumHealthyKills (0xbeac6fe1)

		/// Returns the value of property missionEradicateNumKillsNeeded (0xbeac6fe2).
		/* 1A8h */	virtual int func1A8h(int, int, int);

		/// Returns the value of property missionEradicateNumCreatures (0xc8d23e7f).
		/* 1ACh */	virtual int func1ACh(int, int, int);

		/// Returns the value of mMaxNumDiseasedCreatures - mNumDiseasedKills.
		/* 1B0h */	virtual int func1B0h();

		/// Returns the value of property missionEradicateMinPerHerd (0x7a2db2ee).
		/* 1B4h */	virtual int func1B4h(int, int, int);

		/// Returns the value of property missionEradicateMaxPerHerd (0x7a2db2ef).
		/* 1B8h */	virtual int func1B8h(int, int, int);				

	public:
		/* 1F0h */	int mEradicateType;				// -1
		/* 1F4h */	int mEradicateMissionState;
		/* 1F8h */	int mMaxNumDiseasedCreatures;
		/* 1FCh */	int mMinDiseasedPerHerd;
		/* 200h */	int mMaxDiseasedPerHerd;
		/* 204h */	int mTotalNumKillsNeeded;
		/* 208h */	int mNumDiseasedKills;
		/* 20Ch */	int mMaxNumHealthyKills;
		/* 210h */	int mNumHealthyKills;
		/* 214h */	uint8_t mCanFail;				// 1
		/* 218h */	int field_218;					// -1
		/* 21Ch */	int field_21C;					// -1
		/* 220h */	int field_220;					// eastl allocator called
		/* 224h */	int field_224;
		/* 228h */	int field_228;
	};
	ASSERT_SIZE(cMissionEradicate, 0x238);
}