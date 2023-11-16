#pragma once
#include <Spore\Simulator\cMission.h>
#include <Spore\Simulator\SubSystem\StarManager.h>

namespace Simulator
{
	/// Represents the tutorial mission where the player places their first colony.
	class cMissionColonize
		: public cMission
	{
	public:
		static const uint32_t TYPE = 0x2ba2a01;
		static const uint32_t NOUN_ID = 0x2ba2a0e;

		/* 10h */	virtual bool Write(ISerializerStream* stream) override;
		/* 14h */	virtual bool Read(ISerializerStream* stream) override;
		/* 1Ch */	virtual bool WriteToXML(XmlSerializer*) override;
		/* 20h */	virtual uint32_t GetNounID() const override;
		/* 38h */	virtual uint32_t GetCastID() const override;
		/* 78h */	virtual void Initialize() override;
		/* 7Ch */	virtual MissionState Update(int deltaTime) override;
		/* B8h */	virtual void GetTitleText(eastl::string16& dst) override;

		/// WARNING: This function shares the same address with other cMission subclasses!
		/// Use virtual_detour with this function to get an appropriate 'this' parameter.
		/// You might also want to check from which class this function is called as well.
		/// The address is shared with cMissionFetch and cMissionFindAliens. 
		/* F8h */	virtual bool HasBeenFulfilled() override;

		/* 144h */	virtual void AddMessageListeners() override;
		/* 148h */	virtual void RemoveMessageListeners() override;

		/// /// This function checks for mExploreMissionState's value.
		/// If the value is different than 2, cMission::func6h() is called, then the check
		/// is done again and the field is assigned a value of 2.
		/* 15Ch */	virtual bool func15Ch() override;

		/* 174h */  virtual void func174h(int) override;						// References "SPG_ColonizeMissionSolar" and "SPG_ColonizeMissionPlanet"
		/* 184h */	virtual float func184h(int, int) override;

		/// Finds a suitable planet for player's first colony.
		/* 1A4h */	virtual cPlanetRecord* func1A4h(StarRequestFilter* filter);
	public:
		/* 1F0h */	uint32_t mColonizeMissionState;
		/* 1F4h */	bool mNeedOneFullRow;
		/* 1F5h */	bool mBuildingsRequired;
	};
	ASSERT_SIZE(cMissionColonize, 0x1F8);
}