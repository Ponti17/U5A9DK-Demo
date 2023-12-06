#ifndef SCREEN2_ROULETTEVIEW_HPP
#define SCREEN2_ROULETTEVIEW_HPP

#include <gui_generated/screen2_roulette_screen/Screen2_RouletteViewBase.hpp>
#include <gui/screen2_roulette_screen/Screen2_RoulettePresenter.hpp>

class Screen2_RouletteView : public Screen2_RouletteViewBase
{
public:
    Screen2_RouletteView();
    virtual ~Screen2_RouletteView() {}
    virtual void setupScreen();
    virtual void tearDownScreen();
    virtual void rotateRoulette();
protected:
};

#endif // SCREEN2_ROULETTEVIEW_HPP
