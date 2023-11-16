#pragma once
#include <Spore\Simulator\cMission.h>

#define cMissionPtr eastl::intrusive_ptr<Simulator::cMissionChangeArchetype>

namespace Simulator 
{
	/// A cMission subclass that represents all archetype swap missions.
	/// 
	/// 
	class cMissionChangeArchetype		//0146dcf8 in Ghidra (Steam version)
		: public cMission
	{
	public:
		static const uint32_t TYPE = 0x462227e;
		static const uint32_t NOUN_ID = 0x4622285;

		/* 10h */	virtual bool Write(ISerializerStream* stream) override;
		/* 14h */	virtual bool Read(ISerializerStream* stream) override;
		/* 1Ch */	virtual bool WriteToXML(XmlSerializer*) override;
		/* 20h */	virtual uint32_t GetNounID() const override;
		/* 38h */	virtual uint32_t GetCastID() const override;
		/* 78h */	virtual void Initialize() override;
		/* 94h */	virtual void OnMissionCompleted() override;
		/* B8h */	virtual void GetTitleText(eastl::string16& dst) override;
		/* F8h */	virtual bool HasBeenFulfilled() override;
		/* 118h */	virtual bool TranslateToken(uint32_t tokenID, eastl::string16& dst) override;
		/* 144h */	virtual void AddMessageListeners() override;
		/* 148h */	virtual void RemoveMessageListeners() override;
		/* 15Ch */	virtual bool func15Ch() override;						//Checks if mChangeArchetypeState != 1, calls cMission::func6h(), checks the field again and assigns it value of 1

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