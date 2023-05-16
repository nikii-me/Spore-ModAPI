#ifndef MODAPI_DLL_EXPORT
#include <Spore\Simulator\Cell\cCellResource.h>
#include <Spore\Simulator\Cell\cCellGFX.h>
#include <Spore\Simulator\Cell\cCellGame.h>
#include <Spore\Simulator\Cell\cCellUI.h>

namespace Simulator
{
	auto_STATIC_METHOD_(Cell, Cell::cCellGlobalsResource*, GetGlobalsData);

	namespace Cell
	{
		void cCellDataReference_::AddRef() {
			mCounter++;
		}
		void cCellDataReference_::Release() {
			mCounter--;
		}

		//// cCellGame ////

		cCellGame* cCellGame::Get()
		{
			return *(cCellGame**)GetAddress(cCellGame, _ptr);
		}

		auto_STATIC_METHOD_VOID_(cCellGame, Initialize);

		auto_STATIC_METHOD(cCellGame, cObjectPoolIndex, CreateCellObject,
			Args(int a1, const Math::Vector3& a2, int a3, cCellDataReference<cCellCellResource>* a4, int a5, float a6, float a7, int a8, int a9, int a10),
			Args(a1, a2, a3, a4, a5, a6, a7, a8, a9, a10));


		//// cCellGFX ////

		cCellGFX* cCellGFX::Get()
		{
			return *(cCellGFX**)GetAddress(cCellGFX, _ptr);
		}

		auto_STATIC_METHOD_VOID_(cCellGFX, PreloadResources);

		auto_STATIC_METHOD_VOID(cCellGFX, PreloadCellResource, 
			Args(cCellGFX::IsPreloadedMap_t a1, cCellDataReference<cCellCellResource>* a2),
			Args(a1, a2));

		auto_STATIC_METHOD_VOID(cCellGFX, PreloadPopulateResource,
			Args(cCellGFX::IsPreloadedMap_t a1, cCellDataReference<cCellPopulateResource>* a2),
			Args(a1, a2));

		auto_STATIC_METHOD_VOID(cCellGFX, PreloadLootTableResource,
			Args(cCellGFX::IsPreloadedMap_t a1, cCellDataReference<cCellLootTableResource>* a2),
			Args(a1, a2));

		auto_STATIC_METHOD_VOID(cCellGFX, PreloadCreature, Args(uint32_t a1), Args(a1));

		auto_STATIC_METHOD_VOID(cCellGFX, AddPreloadedEffect, Args(uint32_t a1, uint32_t a2), Args(a1, a2));

		auto_STATIC_METHOD_VOID(cCellGFX, AddPreloadedModel, Args(uint32_t a1, bool a2), Args(a1, a2));

		auto_METHOD_VOID(cCellGFX, AddPreloadedTexture, Args(Graphics::Texture* a1), Args(a1));

		auto_METHOD_VOID(cCellGFX, AddPreloadedModel2, Args(Graphics::Model* a1), Args(a1));

		auto_STATIC_METHOD_VOID_(cCellGFX, Initialize);
		auto_STATIC_METHOD_VOID_(cCellGFX, StartDisplay);

		auto_STATIC_METHOD_VOID(cCellGFX, CreateEffect,
			Args(Swarm::IEffectsWorld* a1, uint32_t a2, uint32_t a3, IVisualEffectPtr& a4),
			Args(a1, a2, a3, a4));

		auto_STATIC_METHOD_VOID_(cCellGFX, LoadEffectMap);

		//// cCellUI ////

		cCellUI* cCellUI::Get()
		{
			return *(cCellUI**)GetAddress(cCellUI, _ptr);
		}

		auto_STATIC_METHOD_VOID_(cCellUI, Load);
	}
}

#endif
