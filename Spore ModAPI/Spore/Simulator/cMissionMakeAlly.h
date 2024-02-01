#pragma once
#include <Spore\Simulator\cMission.h>

namespace Simulator
{
	/// Represents the tutorial mission on making allies.
	class cMissionMakeAlly
		: public cMission
	{
	public:
		static const uint32_t TYPE = 0x4f77498;
		static const uint32_t NOUN_ID = 0x4f77499;

		/* 10h */	virtual bool Write(ISerializerStream* stream) override;
		/* 14h */	virtual bool Read(ISerializerStream* stream) override;
		/* 1Ch */	virtual bool WriteToXML(XmlSerializer*) override;
		/* 20h */	virtual uint32_t GetNounID() const override;
		/* 38h */	virtual uint32_t GetCastID() const override;
		/* 78h */	virtual void Initialize() override;
		/* 7Ch */	virtual MissionState Update(int deltaTime) override;
		/* B8h */	virtual void GetTitleText(eastl::string16& dst) override;
		/* 144h */	virtual void AddMessageListeners() override;
		/* 148h */	virtual void RemoveMessageListeners() override;

		/// This function checks if mChangeArchetypeState is different than 1 and calls cMission::func6h().
		/// It then checks the field again and assigns it a value of 1.
		/// WARNING: This function shares the address with cMissionMakeAlly!
		/* 15Ch */	virtual bool func15Ch() override;

	public:
		/* 1F0h */	int mMakeAllyState;
		/* 1F4h */	bool mbAllianceBecamePossible;
	};
	ASSERT_SIZE(cMissionMakeAlly, 0x1F8);
}