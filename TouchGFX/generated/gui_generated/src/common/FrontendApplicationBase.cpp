/*********************************************************************************/
/********** THIS FILE IS GENERATED BY TOUCHGFX DESIGNER, DO NOT MODIFY ***********/
/*********************************************************************************/
#include <new>
#include <gui_generated/common/FrontendApplicationBase.hpp>
#include <gui/common/FrontendHeap.hpp>
#include <touchgfx/transitions/NoTransition.hpp>
#include <texts/TextKeysAndLanguages.hpp>
#include <touchgfx/Texts.hpp>
#include <touchgfx/hal/HAL.hpp>
#ifdef SIMULATOR
#include <platform/driver/lcd/LCD24bpp.hpp>
#endif
#include <gui/screen1_rocket_screen/Screen1_RocketView.hpp>
#include <gui/screen1_rocket_screen/Screen1_RocketPresenter.hpp>
#include <gui/screen2_roulette_screen/Screen2_RouletteView.hpp>
#include <gui/screen2_roulette_screen/Screen2_RoulettePresenter.hpp>

using namespace touchgfx;

FrontendApplicationBase::FrontendApplicationBase(Model& m, FrontendHeap& heap)
    : touchgfx::MVPApplication(),
      transitionCallback(),
      frontendHeap(heap),
      model(m)
{
    touchgfx::HAL::getInstance()->setDisplayOrientation(touchgfx::ORIENTATION_LANDSCAPE);
#ifdef SIMULATOR
    reinterpret_cast<touchgfx::LCD24bpp&>(touchgfx::HAL::lcd()).enableTextureMapperAll();
    reinterpret_cast<touchgfx::LCD24bpp&>(touchgfx::HAL::lcd()).enableDecompressorL8_All();
#endif
}

/*
 * Screen Transition Declarations
 */

// Screen1_Rocket

void FrontendApplicationBase::gotoScreen1_RocketScreenNoTransition()
{
    transitionCallback = touchgfx::Callback<FrontendApplicationBase>(this, &FrontendApplicationBase::gotoScreen1_RocketScreenNoTransitionImpl);
    pendingScreenTransitionCallback = &transitionCallback;
}

void FrontendApplicationBase::gotoScreen1_RocketScreenNoTransitionImpl()
{
    touchgfx::makeTransition<Screen1_RocketView, Screen1_RocketPresenter, touchgfx::NoTransition, Model >(&currentScreen, &currentPresenter, frontendHeap, &currentTransition, &model);
}

// Screen2_Roulette

void FrontendApplicationBase::gotoScreen2_RouletteScreenSlideTransitionEast()
{
    transitionCallback = touchgfx::Callback<FrontendApplicationBase>(this, &FrontendApplicationBase::gotoScreen2_RouletteScreenSlideTransitionEastImpl);
    pendingScreenTransitionCallback = &transitionCallback;
}

void FrontendApplicationBase::gotoScreen2_RouletteScreenSlideTransitionEastImpl()
{
    touchgfx::makeTransition<Screen2_RouletteView, Screen2_RoulettePresenter, touchgfx::SlideTransition<EAST>, Model >(&currentScreen, &currentPresenter, frontendHeap, &currentTransition, &model);
}
