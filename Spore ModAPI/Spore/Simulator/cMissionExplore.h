#pragma once
#include <Spore\Simulator\cMission.h>

namespace Simulator
{
	/// Represents the first tutorial mission, which is skippable.
	class cMissionExplore
		: public cMission
	{
	public:
		static const uint32_t TYPE = 0x32a12f0;
		static const uint32_t NOUN_ID = 0x32a12f1;

		/* 10h */	virtual bool Write(ISerializerStream* stream) override;
		/* 14h */	virtual bool Read(ISerializerStream* stream) override;
		/* 1Ch */	virtual bool WriteToXML(XmlSerializer*) override;
		/* 20h */	virtual uint32_t GetNounID() const override;
		/* 38h */	virtual uint32_t GetCastID() const override;

		/// Returns mNumVisitedCities if mVisitCities isn't null.
		/* 54h */	virtual int func54h(IStream*);

		/// Returns mNumCitiesToVisit if mVisitCities isn't null.
		/* 58h */	virtual int func58h(IStream*);

		/// Shares the address with func58h().
		/* 5Ch */	virtual int func5Ch(IStream*);

		/* 74h */	virtual uint32_t GetCardWindowControlID() override;
		/* 78h */	virtual void Initialize() override;
		/* 7Ch */	virtual MissionState Update(int deltaTime) override;
		/* 84h */	virtual void ShutdownSystems() override;
		/* 88h */	virtual void OnMissionAccept() override;

		/// WARNING: This function shares the same address with other cMission subclasses!
		/// Use virtual_detour with this function to get an appropriate 'this' parameter.
		/// You might also want to check from which class this function is called as well.
		/// The address is shared with cMissionChangeArchetype, ....
		/* F8h */	virtual bool HasBeenFulfilled() override;

		/* 118h */	virtual bool TranslateToken(uint32_t tokenID, eastl::string16& dst) override;

		/// Returns mVisitCities.
		/* 120h */	virtual bool func120h() override;

		/// WARNING: This function shares the same address with other cMission subclasses!
		/// Use virtual_detour with this function to get an appropriate 'this' parameter.
		/// You might also want to check from which class this function is called as well.
		/// The address is shared with cMissionEradicate.
		/* 124h */	virtual void func120h(int) override;

		/* 144h */	virtual void AddMessageListeners() override;
		/* 148h */	virtual void RemoveMessageListeners() override;

		/// This function checks for mExploreMissionState's value.
		/// If the value is different than 1, cMission::func6h() is called, then the check
		/// is done again and the field is assigned a value of 1.
		/* 15Ch */	virtual bool func15Ch() override;

		/// Functionality-wise this function behaves the same as cMission::func178h(), but it
		/// also includes a null check for mVisitCities.
		/* 178h */  virtual uint32_t func178h() override;

		/* 17Ch */	virtual uint32_t GetCreatureGoalCardLayoutId() override;

		/// Checks if mVisitCities isn't null.
		/* 180h */	virtual bool func180h() override;

	public:
		/* 1F0h */	int mExploreMissionState;
		/* 1F4h */	uint8_t mVisitCities;				// A class pointer maybe?
		/* 1F8h */	int mVisitRadius;
		/* 1FCh */	int mEffectHeight;
		/* 200h */	int field_200;
		/* 204h */	int mNumCitiesToVisit;
		/* 208h */	int mNumVisitedCities;
		/* 20Ch */	int mExploreType;					// Referenced in Write() function, not found in the constructor
		/* 210h */	bool mCityVisitInfosInitialized;
		/* 214h */	int mCityVisitInfos;				// Array of ints? Attribute has a custom Read and Write function
		/* 218h */	int field_218;
		/* 21Ch */	int field_21C;
	};
	ASSERT_SIZE(cMissionExplore, 0x228);
}