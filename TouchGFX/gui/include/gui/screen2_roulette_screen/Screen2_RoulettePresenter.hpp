#ifndef SCREEN2_ROULETTEPRESENTER_HPP
#define SCREEN2_ROULETTEPRESENTER_HPP

#include <gui/model/ModelListener.hpp>
#include <mvp/Presenter.hpp>

using namespace touchgfx;

class Screen2_RouletteView;

class Screen2_RoulettePresenter : public touchgfx::Presenter, public ModelListener
{
public:
    Screen2_RoulettePresenter(Screen2_RouletteView& v);

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

    virtual ~Screen2_RoulettePresenter() {}

private:
    Screen2_RoulettePresenter();

    Screen2_RouletteView& view;
};

#endif // SCREEN2_ROULETTEPRESENTER_HPP
