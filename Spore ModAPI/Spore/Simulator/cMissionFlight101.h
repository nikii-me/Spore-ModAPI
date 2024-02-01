#pragma once
#include <Spore\Simulator\cMission.h>

namespace Simulator
{
	/// Represents the main flight101 mission.
	class cMissionFlight101
		: public cMission
	{
	public:
		static const uint32_t TYPE = 0x422227d;
		static const uint32_t NOUN_ID = 0x4222284;

		/* 10h */	virtual bool Write(ISerializerStream* stream) override;
		/* 14h */	virtual bool Read(ISerializerStream* stream) override;
		/* 1Ch */	virtual bool WriteToXML(XmlSerializer*) override;
		/* 20h */	virtual uint32_t GetNounID() const override;
		/* 38h */	virtual uint32_t GetCastID() const override;
		/* 54h */	virtual void func54h();
		/* 58h */	virtual int func58h();
		/* 5Ch */	virtual int func5Ch();
		/* 74h */	virtual uint32_t GetCardWindowControlID() override;
		/* 78h */	virtual void Initialize() override;
		/* 7Ch */	virtual MissionState Update(int deltaTime) override;
		/* 80h */	virtual void Load() override;
		/* 84h */	virtual void ShutdownSystems() override;
		/* 88h */	virtual void OnMissionAccept() override;
		/* 8Ch */	virtual void OnMissionReject() override;
		/* 90h */	virtual void OnMissionAbort() override;
		/* 94h */	virtual void OnMissionCompleted() override;
		/* B8h */	virtual void GetTitleText(eastl::string16& dst) override;
		/* BCh */	virtual void GetUIMediumDescText(eastl::string16& dst) override;
		/* C0h */	virtual void GetUILongDescText(eastl::string16& dst) override;
		/* C4h */	virtual void funcC4h(eastl::string16& dst) override;
		/* ECh */	virtual int GetTravelCost() override;
		/* F0h */	virtual float GetTravelDistance() override;
		/* F4h */	virtual bool IsTargetPlanet(cPlanetRecord* pPlanetRecord) override;
		/* F8h */	virtual bool HasBeenFulfilled() override;
		/* 118h */	virtual bool TranslateToken(uint32_t tokenID, eastl::string16& dst) override;
		/* 124h */	virtual void func120h(int) override;
		/* 144h */	virtual void AddMessageListeners() override;
		/* 148h */	virtual void RemoveMessageListeners() override;
		/* 15Ch */	virtual bool func15Ch() override;
		/* 178h */  virtual uint32_t func178h() override;
		/* 17Ch */	virtual uint32_t GetCreatureGoalCardLayoutId() override;
		/* 180h */	virtual bool func180h() override;
		/* 18Ch */	virtual bool PickTargetAnimalSpecies() override;
		/* 1A4h */	virtual void func1A4h();
		/* 1A8h */	virtual void func1A8h();
		/* 1ACh */	virtual void func1ACh();
	public:
		/* 230h */	int mFlight101State;
		/* 234h */	int field_234;
		/* 238h */	int mDiseaseEffectID;
		/* 23Ch */	bool mbAcceptedVisitCitiesMission;
		/* 240h */	int field_240;
		/* 244h */	int field_244;
		/* 248h */	int field_248;

	protected:			// Not found in constructor, unknown offsets
		int mEventID;
		int mTimeToSoftFail;
	};
	ASSERT_SIZE(cMissionFlight101, 0x258);
}