#pragma once
#include <Spore\Simulator\cMission.h>

namespace Simulator
{
	/// Represents all missions related to playing adventures in space stage. 
	class cMissionAdventure
		: public cMission
	{
	public:
		static const uint32_t TYPE = 0x463329e;
		static const uint32_t NOUN_ID = 0x46332a5;

		/* 10h */	virtual bool Write(ISerializerStream* stream) override;
		/* 14h */	virtual bool Read(ISerializerStream* stream) override;
		/* 1Ch */	virtual bool WriteToXML(XmlSerializer*) override;
		/* 20h */	virtual uint32_t GetNounID() const override;
		/* 38h */	virtual uint32_t GetCastID() const override;
		/* 40h */	virtual bool cGameData_func40h() override;
		/* 78h */	virtual void Initialize() override;
		/* 7Ch */	virtual MissionState Update(int deltaTime) override;
		/* 88h */	virtual void OnMissionAccept() override;
		/* 94h */	virtual void OnMissionCompleted() override;

		/// WARNING: This function shares the same address with other cMission subclasses!
		/// Use virtual_detour with this function to get an appropriate 'this' parameter.
		/// You might also want to check from which class this function is called as well.
		/// The address is shared with cMissionChangeArchetype.
		/* F8h */	virtual bool HasBeenFulfilled() override;

		/* 118h */	virtual bool TranslateToken(uint32_t tokenID, eastl::string16& dst) override;
		/* 144h */	virtual void AddMessageListeners() override;
		/* 148h */	virtual void RemoveMessageListeners() override;

		/// WARNING: This function shares the same address with other cMission subclasses!
		/// Use virtual_detour with this function to get an appropriate 'this' parameter.
		/// You might also want to check from which class this function is called as well.
		/// The address is shared with cMissionChangeArchetype.
		/* 15Ch */	virtual bool func15Ch() override;

		/* 184h */	virtual float func184h(int, int) override;

	public:
		/* 1F0h */	int mAdventureState;
		/* 1F4h */	int mAdventureID;
	};
	ASSERT_SIZE(cMissionAdventure, 0x1F8);
}