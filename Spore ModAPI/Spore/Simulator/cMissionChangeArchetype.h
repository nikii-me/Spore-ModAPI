#pragma once
#include <Spore\Simulator\cMission.h>

namespace Simulator 
{
	/// This class represents all of the archetype change missions in the game.
	class cMissionChangeArchetype
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

		/// WARNING: This function shares the same address with other cMission subclasses!
		/// Use virtual_detour with this function to get an appropriate 'this' parameter.
		/// You might also want to check from which class this function is called as well.
		/* F8h */	virtual bool HasBeenFulfilled() override;

		/* 118h */	virtual bool TranslateToken(uint32_t tokenID, eastl::string16& dst) override;
		/* 144h */	virtual void AddMessageListeners() override;
		/* 148h */	virtual void RemoveMessageListeners() override;

		/// This function checks if mChangeArchetypeState is different than 1 and calls cMission::func6h().
		/// It then checks the field again and assigns it a value of 1.
		/* 15Ch */	virtual bool func15Ch() override;

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