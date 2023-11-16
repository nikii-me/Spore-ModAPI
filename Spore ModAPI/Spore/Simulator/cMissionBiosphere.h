#pragma once
#include <Spore\Simulator\cMission.h>

namespace Simulator
{
	/// Might be 20 bytes long
	/*class Unknown
	{

	};*/

	/// This class represents the eco disaster event that may randomly happen in space stage.
	class cMissionBiosphere
		: public cMission
	{
	public:
		static const uint32_t TYPE = 0x437443d;
		static const uint32_t NOUN_ID = 0x437444b;

		/* 10h */	virtual bool Write(ISerializerStream* stream) override;
		/* 14h */	virtual bool Read(ISerializerStream* stream) override;
		/* 1Ch */	virtual bool WriteToXML(XmlSerializer*) override;
		/* 20h */	virtual uint32_t GetNounID() const override;
		/* 38h */	virtual uint32_t GetCastID() const override;

		/// Returns mNumDiseasedKills if mBiosphereMissionState is equal to 0, otherwise returns 0 (null?).
		/* 54h */	virtual int func54h();

		/// Returns mMaxNumDiseasedCreatures if mBiosphereMissionState is equal to 0, otherwise returns 0 (null?).
		/* 58h */	virtual int func58h();

		/// Shares the address with func58h().
		/* 5Ch */	virtual int func5Ch();

		/* 78h */	virtual void Initialize() override;
		/* 7Ch */	virtual MissionState Update(int deltaTime) override;
		/* 88h */	virtual void OnMissionAccept() override;

		/* A8h */	virtual int GetDuration() override;
		/* ACh */	virtual int GetRemainingTime() override;
		/* B8h */	virtual void GetTitleText(eastl::string16& dst) override;
		/* BCh */	virtual void GetUIMediumDescText(eastl::string16& dst) override;
		/* 118h */	virtual bool TranslateToken(uint32_t tokenID, eastl::string16& dst) override;
		/* 140h */	virtual bool func140h(int, int) override;
		/* 144h */	virtual void AddMessageListeners() override;
		/* 148h */	virtual void RemoveMessageListeners() override;

		/// This function checks for mBiosphereMissionState's value.
		/// If it's different from 2, it'll set it to 2, send a message to 0x38cf2fd and return early.
		/* 15Ch */	virtual bool func15Ch() override;

		/* 184h */	virtual float func184h(int, int) override;
	public:
		/* 1F0h */	int mBiosphereMissionState;
		/* 1F4h */	int mInitialTerraformScore;		// 1
		/* 1F8h */	int mInitialNumPlants;
		/* 1FCh */	int mInitialNumAnimals;
		/* 200h */	int mCurrentBiosphereRow;		// 1
		/* 204h */	int mMaxNumDiseasedCreatures;
		/* 208h */	int mNumDiseasedKills;
		/* 20Ch */	int mMaxNumHealthyKills;		// 5
		/* 210h */	int mNumHealthyKills;			// Might be 8 bytes long?
//		/* 214h */	int field_214;
//		/* 218h */	Unknown mCollapseTimer;			
		/* 218h */	int mCollapseTimer;				// Might be 20 bytes long?

		// These might not actually exist
//		/* 21Ch */	int field_21C;
//		/* 220h */	int field_220;
//		/* 224h */	int field_224;
//		/* 228h */	int field_228;
//		/* 22Ch */	int field_22C;
//		/* 230h */	int field_230;
//		/* 234h */	int field_234;


		// These three might not be fields
		/* 238h */	int field_238;				// Double pointer
		/* 23Ch */	int field_23C;				// Double pointer
		/* 240h */	int field_240;				// Double pointer, might be 8 bytes long?

//		/* 244h */	int field_244;
		/* 248h */	int field_248;
		/* 24Ch */	int field_24C;
		/* 250h */	int field_250;
	};
	ASSERT_SIZE(cMissionBiosphere, 0x260);
}