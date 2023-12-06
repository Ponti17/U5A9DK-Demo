#ifndef SCREEN1_ROCKETVIEW_HPP
#define SCREEN1_ROCKETVIEW_HPP

#include <gui_generated/screen1_rocket_screen/Screen1_RocketViewBase.hpp>
#include <gui/screen1_rocket_screen/Screen1_RocketPresenter.hpp>

class Screen1_RocketView : public Screen1_RocketViewBase
{
public:
    Screen1_RocketView();
    virtual ~Screen1_RocketView() {}
    virtual void setupScreen();
    virtual void tearDownScreen();
    virtual void moveBackground();
    virtual void flyRocket();
protected:
};

#endif // SCREEN1_ROCKETVIEW_HPP
