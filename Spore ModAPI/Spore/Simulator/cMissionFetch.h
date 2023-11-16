#pragma once
#include <Spore\Simulator\cMission.h>

namespace Simulator
{
	/// TODO
	/*struct cFetchSample {

	};*/

	/// Represents all fetch missions except the multi delivery mission and scan-first mission.
	class cMissionFetch
		: public cMission
	{
	public:
		static const uint32_t TYPE = 0x2afd27e;
		static const uint32_t NOUN_ID = 0x2afd284;

		/* 10h */	virtual bool Write(ISerializerStream* stream) override;
		/* 14h */	virtual bool Read(ISerializerStream* stream) override;
		/* 1Ch */	virtual bool WriteToXML(XmlSerializer*) override;
		/* 20h */	virtual uint32_t GetNounID() const override;
		/* 38h */	virtual uint32_t GetCastID() const override;
		/* 78h */	virtual void Initialize() override;
		/* 7Ch */	virtual MissionState Update(int deltaTime) override;
		/* 94h */	virtual void OnMissionCompleted() override;
		/* 9Ch */	virtual void FailMission() override;
		/* B8h */	virtual void GetTitleText(eastl::string16& dst) override;
		/* BCh */	virtual void GetUIMediumDescText(eastl::string16& dst) override;
		/* C0h */	virtual void GetUILongDescText(eastl::string16& dst) override;

		/// WARNING: This function shares the same address with other cMission subclasses!
		/// Use virtual_detour with this function to get an appropriate 'this' parameter.
		/// You might also want to check from which class this function is called as well.
		/// The address is shared with cMissionColonize and cMissionFindAliens. 
		/* F8h */	virtual bool HasBeenFulfilled() override;

		/* FCh */	virtual bool HasFailed() override;
		
		/// Shares address with HasFailed().
		/* 100h */	virtual bool func100h() override;

		/* 104h */	virtual bool func104h() override;

		/// Checks for the value of cMission::GetState(), and if it equals 3 checks for 
		/// mFetchMissionState. Returns mission_complete, mission_failed or mission_incomplete
		/// depending on the value of mFetchMissionState.
		/* 10Ch */	virtual uint32_t func10Ch() override;

		/* 118h */	virtual bool TranslateToken(uint32_t tokenID, eastl::string16& dst) override;
		/* 11Ch */	virtual uint32_t GetCompletedEventLogID() override;
		/* 144h */	virtual void AddMessageListeners() override;
		/* 148h */	virtual void RemoveMessageListeners() override;
		/* 15Ch */	virtual bool func15Ch() override;
		/* 184h */	virtual float func184h(int, int) override;
		/* 188h */	virtual int CalculateMissionDuration() override;
		/* 190h */	virtual void func190h(const ResourceKey& speciesId) override;
		/* 1A4h */	virtual int func1A4h(void*);

	public:
		/* 1F0h */	int mFetchMissionState;
		/* 1F4h */	int mTypeOfFetch;				// -1
		/* 1F8h */	int mFetchArtifactCargoItemID;
		/* 1FCh */	int field_1FC;
		/* 200h */	int field_200;
		/* 204h */	int field_204;
		/* 208h */	int field_208;
		/* 20Ch */	int field_20C;
		/* 210h */	int mFetchPlantSpeciesKey;
		/* 214h */	int field_214;
		/* 21Ch */	int mFetchAnimalSpeciesKey;
		/* 220h */	int field_220;
		/* 224h */	int field_224;
		/* 228h */	int mFetchCommodityKey;
		/* 22Ch */	int field_22C;
		/* 230h */	int field_230;
		/* 234h */	int mSamplerPlate;
		/* 238h */	int field_238;
		/* 23Ch */	int field_23C;					// 12 bytes long?
//		/* 240h */	int field_240;
//		/* 244h */	int field_244;
		/* 248h */	bool mDropOffRequired;
		/* 24Ch */	int mDropOffDistance;			// Not found in constructor
		/* 250h */	int field_250;
		/* 254h */	int field_254;
		/* 258h */	int field_258;

	protected:			// Not found in the Write function, unknown offsets
		bool mIsAnimal;
		int mSpeciesKey;
	};
	ASSERT_SIZE(cMissionFetch, 0x268);
}