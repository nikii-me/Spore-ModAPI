#pragma once
#include <Spore\Simulator\cMission.h>

namespace Simulator
{
	class cMissionMultiDelivery
		: cMission
	{
	public:
		static const uint32_t TYPE = 0x35ed8f0;
		static const uint32_t NOUN_ID = 0x35ed8f6;

		/* 10h */	virtual bool Write(ISerializerStream* stream) override;
		/* 14h */	virtual bool Read(ISerializerStream* stream) override;
		/* 1Ch */	virtual bool WriteToXML(XmlSerializer*) override;
		/* 20h */	virtual uint32_t GetNounID() const override;
		/* 38h */	virtual uint32_t GetCastID() const override;
		/* 44h */	virtual void RemoveOwner() override;
		/* 78h */	virtual void Initialize() override;
		/* 80h */	virtual void Load() override;
		/* B8h */	virtual void GetTitleText(eastl::string16& dst) override;
		/* ECh */	virtual int GetTravelCost() override;
		/* F0h */	virtual float GetTravelDistance() override;
		/* F4h */	virtual bool IsTargetPlanet(cPlanetRecord* pPlanetRecord) override;
	public:
		/* 1F0h */	int mMultiDeliveryMissionState;
		/* 1F4h */	int mBuyerList;
		/* 1F8h */	int field_1F8;
		/* 1FCh */	int field_1FC;		// Possibly 12 bytes long?
//		/* 200h */	int field_200;
//		/* 204h */	int field_204;
		/* 208h */	int mItemList;
		/* 20Ch */	int field_20C;
		/* 210h */	int field_210;		// Possibly 12 bytes long?
//		/* 214h */	int field_214;
//		/* 218h */	int field_218;
		/* 21Ch */	int field_21C;
		/* 220h */	int field_220;
		/* 224h */	int field_224;		// Possibly 12 bytes long?
//		/* 228h */	int field_228;
//		/* 22Ch */	int field_22C;
		/* 230h */	int mArtifactCargoItemID;
		/* 234h */	int field_234;
		/* 238h */	int field_238;
		/* 23Ch */	int field_23C;
	};
	ASSERT_SIZE(cMissionMultiDelivery, 0x250);
}