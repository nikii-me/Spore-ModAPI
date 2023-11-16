#pragma once
#include <Spore\Simulator\cMission.h>

namespace Simulator
{
	class Unknown //Takes up space from offset to 0x218 to 0x238 minimum
	{

	};

	class cMissionBiosphere
		: cMission
	{
	public:
		static const uint32_t TYPE = 0x437443d;
		static const uint32_t NOUN_ID = 0x437444b;

		/* 10h */	virtual bool Write(ISerializerStream* stream) override;
		/* 14h */	virtual bool Read(ISerializerStream* stream) override;
		/* 1Ch */	virtual bool WriteToXML(XmlSerializer*) override;
		/* 20h */	virtual uint32_t GetNounID() const override;
		/* 38h */	virtual uint32_t GetCastID() const override;
		/* 54h */	virtual int func54h();									//Returns mNumDiseasedKills if mBiosphereMissionState == 0
		/* 58h */	virtual int func58h();									//Same as func54h(), but returns mMaxNumDiseasedCreatures
		/* 5Ch */	virtual int func5Ch();									//Shared address with func54h()
		/* 78h */	virtual void Initialize() override;
		/* 7Ch */	virtual MissionState Update(int deltaTime) override;
		/* 88h */	virtual void OnMissionAccept() override;

		/// WARNING: This function shares the same address with other cMission subclasses!
		/// Use virtual_detour with this function to get an appropriate 'this' parameter.
		/// You might also want to check from which class this function is called as well.
		/* 94h */	virtual void OnMissionCompleted() override;

		/* A8h */	virtual int GetDuration() override;
		/* ACh */	virtual int GetRemainingTime() override;
		/* B8h */	virtual void GetTitleText(eastl::string16& dst) override;
		/* BCh */	virtual void GetUIMediumDescText(eastl::string16& dst) override;
		/* 118h */	virtual bool TranslateToken(uint32_t tokenID, eastl::string16& dst) override;
		/* 140h */	virtual bool func140h(int, int) override;
		/* 144h */	virtual void AddMessageListeners() override;
		/* 148h */	virtual void RemoveMessageListeners() override;
		/* 15Ch */	virtual bool func15Ch() override;
		/* 184h */	virtual float func184h(int, int) override;
	public:
		/* 1F0h */	int mBiosphereMissionState;
		/* 1F4h */	int mInitialTerraformScore;			//1
		/* 1F8h */	int mInitialNumPlants;
		/* 1FCh */	int mInitialNumAnimals;
		/* 200h */	int mCurrentBiosphereRow;			//1
		/* 204h */	int mMaxNumDiseasedCreatures;
		/* 208h */	int mNumDiseasedKills;
		/* 20Ch */	int mMaxNumHealthyKills;			//5
		/* 210h */	int mNumHealthyKills;				//Possibly 8 bytes long?
//		/* 214h */	int field_214;
		/* 218h */	Unknown mCollapseTimer;				//20 bytes big(?)

		//These might not actually exist
//		/* 21Ch */	int field_21C;
//		/* 220h */	int field_220;
//		/* 224h */	int field_224;
//		/* 228h */	int field_228;
//		/* 22Ch */	int field_22C;
//		/* 230h */	int field_230;
//		/* 234h */	int field_234;


		//These three might not be fields
		/* 238h */	int field_238;			//??
		/* 23Ch */	int field_23C;			//??
		/* 240h */	int field_240;			//??

//		/* 244h */	int field_244;
		/* 248h */	int field_248;
		/* 24Ch */	int field_24C;
		/* 250h */	int field_250;
	};
	ASSERT_SIZE(cMissionBiosphere, 0x260);
}