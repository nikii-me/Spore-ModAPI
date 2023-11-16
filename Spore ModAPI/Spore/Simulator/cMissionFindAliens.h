#pragma once
#include <Spore\Simulator\cMission.h>

namespace Simulator
{
	/// Represents the find aliens tutorial mission and find grox mission.
	class cMissionFindAliens
		: public cMission
	{
	public:
		static const uint32_t TYPE = 0x3470928;
		static const uint32_t NOUN_ID = 0x347092f;

		/* 10h */	virtual bool Write(ISerializerStream* stream) override;
		/* 14h */	virtual bool Read(ISerializerStream* stream) override;
		/* 1Ch */	virtual bool WriteToXML(XmlSerializer*) override;
		/* 20h */	virtual uint32_t GetNounID() const override;
		/* 38h */	virtual uint32_t GetCastID() const override;
		/* 78h */	virtual void Initialize() override;
		/* 7Ch */	virtual MissionState Update(int deltaTime) override;
		/* B8h */	virtual void GetTitleText(eastl::string16& dst) override;
		/* BCh */	virtual void GetUIMediumDescText(eastl::string16& dst) override;
		/* C0h */	virtual void GetUILongDescText(eastl::string16& dst) override;

		/// WARNING: This function shares the same address with other cMission subclasses!
		/// Use virtual_detour with this function to get an appropriate 'this' parameter.
		/// You might also want to check from which class this function is called as well.
		/// The address is shared with cMissionColonize and cMissionFetch. 
		/* F8h */	virtual bool HasBeenFulfilled() override;

		/* 144h */	virtual void AddMessageListeners() override;
		/* 148h */	virtual void RemoveMessageListeners() override;

		/// This function checks for mExploreMissionState's value.
		/// If the value is different than 2, cMission::func6h() is called, then the check
		/// is done again and the field is assigned a value of 2.
		/// WARNING: The address of this function is shared with cMissionColonize!
		/* 15Ch */	virtual bool func15Ch() override;

	public:
		/* 1F0h */	int mFindAliensState;
		/* 1F4h */	int mNumAliensToFind;
		/* 1F8h */	int mNumAliensFound;
		/* 1FCh */	int mContactGrob;
	};
	ASSERT_SIZE(cMissionFindAliens, 0x200);
}