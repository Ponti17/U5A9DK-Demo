/*********************************************************************************/
/********** THIS FILE IS GENERATED BY TOUCHGFX DESIGNER, DO NOT MODIFY ***********/
/*********************************************************************************/
#ifndef FRONTENDAPPLICATIONBASE_HPP
#define FRONTENDAPPLICATIONBASE_HPP

#include <mvp/MVPApplication.hpp>
#include <gui/model/Model.hpp>

class FrontendHeap;

class FrontendApplicationBase : public touchgfx::MVPApplication
{
public:
    FrontendApplicationBase(Model& m, FrontendHeap& heap);
    virtual ~FrontendApplicationBase() { }

    virtual void changeToStartScreen()
    {
        gotoScreen1_RocketScreenNoTransition();
    }

    // Screen1_Rocket
    void gotoScreen1_RocketScreenNoTransition();

    // Screen2_Roulette
    void gotoScreen2_RouletteScreenSlideTransitionEast();

protected:
    touchgfx::Callback<FrontendApplicationBase> transitionCallback;
    FrontendHeap& frontendHeap;
    Model& model;

    // Screen1_Rocket
    void gotoScreen1_RocketScreenNoTransitionImpl();

    // Screen2_Roulette
    void gotoScreen2_RouletteScreenSlideTransitionEastImpl();
};

#endif // FRONTENDAPPLICATIONBASE_HPP
