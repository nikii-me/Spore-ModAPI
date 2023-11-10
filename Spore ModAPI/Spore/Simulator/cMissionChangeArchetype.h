#pragma once
#include <Spore\Simulator\cMission.h>

#define cMissionPtr eastl::intrusive_ptr<Simulator::cMissionChangeArchetype>

namespace Simulator 
{
	/// This class inherits all its functions from cMission and other classes it extends.
	/// See Spore/Simulator/cMission.h for relevant documentation.
	class cMissionChangeArchetype
		: public cMission
	{
	public:
		static const uint32_t TYPE = 0x462227e;
		static const uint32_t NOUN_ID = 0x4622285;	

		//these three might be wrong
		/* 0h */	void func0h();
		/* 4h */	void func4h();
		/* 8h */	void func8h();				
		/* Ch */	void funcCh();

		/* 10h */	virtual bool Write(ISerializerStream* stream) override;
		/* 14h */	virtual bool Read(ISerializerStream* stream) override;
		/* 16h */	virtual bool WriteToXML(XmlSerializer*) override;
		/* 20h */	virtual uint32_t GetNounID() const override;

		/* 24h */	virtual int func24h();
		/* 28h */	virtual int func28h();
		/* 2Ch */	virtual int func2Ch();
		/* 30h */	virtual int func30h();
		/* 34h */	virtual int func34h();

		/* 38h */	virtual uint32_t GetCastID() const override;
		/* 3Ch */	virtual bool cGameData_func3Ch(int) override;
		/* 40h */	virtual bool cGameData_func40h() override;
		/* 44h */	virtual void RemoveOwner() override;
		/* 48h */	virtual void SetPoliticalID(uint32_t id) override;
		/* 4Ch */	virtual uint32_t GetPoliticalID() override;
		/* 50h */	virtual int WriteAsText(int) override;

		/* 54h */	virtual int func54h();
		/* 58h */	virtual int func58h();
		/* 5Ch */	virtual int func5Ch();

		/* 60h */	virtual int GetState() override;

		/* 64h */	virtual bool func64h() override;
		/* 68h */	virtual bool func68h() override;
		/* 6Ch */	virtual void func6Ch() override;
		/* 70h */	virtual void func70h() override;

		/* 74h */	virtual uint32_t GetCardWindowControlID() override;
		/* 78h */	virtual void Initialize() override;
		/* 7Ch */	virtual MissionState Update(int deltaTime) override;
		/* 80h */	virtual void Load() override;
		/* 84h */	virtual void ShutdownSystems() override;
		/* 88h */	virtual void OnMissionAccept() override;
		/* 8Ch */	virtual void OnMissionReject() override;
		/* 90h */	virtual void OnMissionAbort() override;
		/* 94h */	virtual void OnMissionCompleted() override;
		/* 98h */	virtual void OnMissionFailed() override;
		/* 9Ch */	virtual void FailMission() override;
		/* A0h */	virtual eastl::string16* GetDescription(eastl::string16* dst) override;
		/* A4h */	virtual uint32_t GetConversationID() override;
		/* A8h */	virtual int GetDuration() override;
		/* ACh */	virtual int GetRemainingTime() override;
		/* B0h */	virtual cSpeciesProfile* GetTargetAnimalSpecies() override;
		/* B4h */	virtual void GetTargetAnimalSpeciesNameText(eastl::string16& dst) override;
		/* B8h */	virtual void GetTitleText(eastl::string16& dst) override;
		/* BCh */	virtual void GetUIMediumDescText(eastl::string16& dst) override;
		/* C0h */	virtual void GetUILongDescText(eastl::string16& dst) override;
		/* C4h */	virtual void funcC4h(eastl::string16& dst) override;
		/* C8h */	virtual void GetAlertTitleText(eastl::string16& dst) override;
		/* CCh */	virtual void GetStarClueText(int index, eastl::string16& dst) override;
		/* D0h */	virtual void GetStarClueDistanceText(eastl::string16& dst) override;
		/* D4h */	virtual void GetStarClueRangeMinText(eastl::string16& dst) override;
		/* D8h */	virtual void GetStarClueRangeMaxText(eastl::string16& dst) override;
		/* DCh */	virtual void GetPlanetClueOrbitOrderText(eastl::string16& dst) override;
		/* E0h */	virtual void GetPlanetClueText(eastl::string16& dst) override;
		/* E4h */	virtual uint32_t GetStarMapEffectGroup() override;
		/* E8h */	virtual uint32_t GetStarMapEffect() override;
		/* ECh */	virtual int GetTravelCost() override;
		/* F0h */	virtual float GetTravelDistance() override;
		/* F4h */	virtual bool IsTargetPlanet(cPlanetRecord* pPlanetRecord) override;
		/* F8h */	virtual bool HasBeenFulfilled() override;
		/* FCh */	virtual bool HasFailed() override;

		/* 100h */	virtual bool func100h() override;
		/* 104h */	virtual bool func104h() override;
		/* 108h */	virtual int func108h() override;
		/* 10Ch */	virtual uint32_t func10Ch() override;
		/* 110h */	virtual uint32_t func110h(int, int) override;
		/* 114h */	virtual void func114h() override;

		/* 118h */	virtual bool TranslateToken(uint32_t tokenID, eastl::string16& dst) override;
		/* 11Ch */	virtual uint32_t GetCompletedEventLogID() override;

		/* 120h */	virtual bool func120h() override;
		/* 124h */	virtual void func120h(int) override;

		/* 128h */	virtual bool CreateClues() override;
		/* 12Ch */	virtual bool CreateStarClue() override;
		/* 130h */	virtual bool CreatePlanetClue() override;
		/* 134h */	virtual bool IsSourcePlanetAndEmpire(uint32_t empireId, PlanetID planetId) override;
		/* 138h */	virtual bool HasEnoughAvailableCargoSlots() override;

		/* 13Ch */	virtual bool func13Ch() override;
		/* 140h */	virtual bool func140h(int, int) override;

		/* 144h */	virtual void AddMessageListeners() override;
		/* 144h */	virtual void RemoveMessageListeners() override;
		/* 14Ch */	virtual void AddMessageListener(uint32_t messageId) override;
		/* 150h */	virtual void RemoveMessageListener(uint32_t messageId) override;
		/* 154h */	virtual bool ListensToMessage(uint32_t messageId) override;

		/* 158h */	virtual bool func158h() override;
		/* 15Ch */	virtual bool func15Ch() override;
		/* 160h */  virtual int func160h() override;
		/* 164h */  virtual int func164h() override;
		/* 168h */  virtual bool func168h() override;
		/* 16Ch */  virtual void func16Ch() override;

		/* 170h */	virtual void ExportTargetPlanetAndSpecies() override;

		/* 174h */  virtual void func174h(int) override;
		/* 178h */  virtual uint32_t func178h() override;

		/* 17Ch */	virtual uint32_t GetCreatureGoalCardLayoutId() override;

		/* 180h */	virtual bool func180h() override;
		/* 184h */	virtual float func184h(int, int) override;

		/* 188h */	virtual int CalculateMissionDuration() override;
		/* 18Ch */	virtual bool PickTargetAnimalSpecies() override;

		/* 190h */	virtual void func190h(const ResourceKey& speciesId) override;
		/* 194h */	virtual void func194h() override;
		/* 198h */	virtual bool func198h(bool) override;
		/* 19Ch */	virtual void func19Ch() override;
		/* 1A0h */	virtual void func1A0h(bool) override;
	public:
		/* 1F0h */	int mChangeArchetypeState;
		/* 1F4h */	Simulator::Archetypes mChangeArchetypeTo;
		/* 1F8h */	uint32_t mNumTotalActions;
		/* 1FCh */	int mProgressSoFar;
		/* 200h */	eastl::vector<uint32_t> mKeyHistory;
		/* 204h */	int field_204;
		/* 208h */	int field_208;
	};
	ASSERT_SIZE(cMissionChangeArchetype, 0x218);
}