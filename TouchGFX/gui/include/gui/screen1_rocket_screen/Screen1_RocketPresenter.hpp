#ifndef SCREEN1_ROCKETPRESENTER_HPP
#define SCREEN1_ROCKETPRESENTER_HPP

#include <gui/model/ModelListener.hpp>
#include <mvp/Presenter.hpp>

using namespace touchgfx;

class Screen1_RocketView;

class Screen1_RocketPresenter : public touchgfx::Presenter, public ModelListener
{
public:
    Screen1_RocketPresenter(Screen1_RocketView& v);

    /**
     * The activate function is called automatically when this screen is "switched in"
     * (ie. made active). Initialization logic can be placed here.
     */
    virtual void activate();

    /**
     * The deactivate function is called automatically when this screen is "switched out"
     * (ie. made inactive). Teardown functionality can be placed here.
     */
    virtual void deactivate();

    virtual ~Screen1_RocketPresenter() {}

private:
    Screen1_RocketPresenter();

    Screen1_RocketView& view;
};

#endif // SCREEN1_ROCKETPRESENTER_HPP
