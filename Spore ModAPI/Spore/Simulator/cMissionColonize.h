#pragma once
#include <Spore\Simulator\cMission.h>
#include <Spore\Simulator\SubSystem\StarManager.h>

namespace Simulator
{
	class cMissionColonize
		: cMission
	{
	public:
		static const uint32_t TYPE = 0x2ba2a01;
		static const uint32_t NOUN_ID = 0x2ba2a0e;

//		/* Ch */	virtual void* Cast(uint32_t typeID);

		/* 10h */	virtual bool Write(ISerializerStream* stream) override;
		/* 14h */	virtual bool Read(ISerializerStream* stream) override;
		/* 1Ch */	virtual bool WriteToXML(XmlSerializer*) override;
		/* 20h */	virtual uint32_t GetNounID() const override;
		/* 38h */	virtual uint32_t GetCastID() const override;
		/* 78h */	virtual void Initialize() override;
		/* 7Ch */	virtual MissionState Update(int deltaTime) override;
		/* 94h */	virtual void OnMissionCompleted() override;
		/* B8h */	virtual void GetTitleText(eastl::string16& dst) override;
		/* F8h */	virtual bool HasBeenFulfilled() override;
		/* 144h */	virtual void AddMessageListeners() override;
		/* 148h */	virtual void RemoveMessageListeners() override;
		/* 15Ch */	virtual bool func15Ch() override;							//Checks if mChangeArchetypeState != 2, calls cMission::func6h(), checks the field again and assigns it value of 2
		/* 174h */  virtual void func174h(int) override;						//References "SPG_ColonizeMissionSolar" and "SPG_ColonizeMissionPlanet"
		/* 184h */	virtual float func184h(int, int) override;
		/* 1A4h */	virtual cPlanetRecord* func1A4h(StarRequestFilter*);		//Might be responsible for finding the star system to colonize, specifically a red star system with red spice planets.
	public:
		/* 1F0h */	uint32_t mColonizeMissionState;
		/* 1F4h */	uint8_t mNeedOneFullRow;
		/* 1F5h */	uint8_t mBuildingsRequired;
	};
	ASSERT_SIZE(cMissionColonize, 0x1F8);
}