#pragma once
#include <Spore\Simulator\cMission.h>

namespace Simulator 
{
	class cMissionChangeArchetype
		: public cMission
	{
	public:
		static const uint32_t TYPE = 0x462227e;
		static const uint32_t NOUN_ID = 0x4622285;	
		/* 8h */	void func8h();									
		/* 10h */	virtual bool Write(ISerializerStream* stream) override;
		/* 14h */	virtual bool Read(ISerializerStream* stream) override;
		/* 16h */	virtual bool WriteToXML(XmlSerializer*) override;
		/* 20h */	virtual uint32_t GetNounID() const override;
		/* 38h */	virtual uint32_t GetCastID() const override;

		/* 74h */	virtual uint32_t GetCardWindowControlID();
		/* 78h */	virtual void Initialize() override;
		/* 7Ch */	virtual MissionState Update(int deltaTime) override;
		/* 80h */	virtual void Load() override;
		/* 84h */	virtual void ShutdownSystems() override;
		/* 88h */	virtual void OnMissionAccept() override;
		/* 8Ch */	virtual void OnMissionReject() override;
		/* 90h */	virtual void OnMissionAbort() override;
		/* 94h */	virtual void OnMissionCompleted();
		/* 98h */	virtual void OnMissionFailed();
		/* 9Ch */	virtual void FailMission();
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