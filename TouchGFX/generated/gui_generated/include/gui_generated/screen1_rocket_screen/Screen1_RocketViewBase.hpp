/*********************************************************************************/
/********** THIS FILE IS GENERATED BY TOUCHGFX DESIGNER, DO NOT MODIFY ***********/
/*********************************************************************************/
#ifndef SCREEN1_ROCKETVIEWBASE_HPP
#define SCREEN1_ROCKETVIEWBASE_HPP

#include <gui/common/FrontendApplication.hpp>
#include <mvp/View.hpp>
#include <gui/screen1_rocket_screen/Screen1_RocketPresenter.hpp>
#include <touchgfx/widgets/Box.hpp>
#include <touchgfx/widgets/Image.hpp>
#include <touchgfx/widgets/SVGImage.hpp>

class Screen1_RocketViewBase : public touchgfx::View<Screen1_RocketPresenter>
{
public:
    Screen1_RocketViewBase();
    virtual ~Screen1_RocketViewBase();
    virtual void setupScreen();
    virtual void handleTickEvent();

    /*
     * Virtual Action Handlers
     */
    virtual void moveBackground()
    {
        // Override and implement this function in Screen1_Rocket
    }
    virtual void flyRocket()
    {
        // Override and implement this function in Screen1_Rocket
    }

protected:
    FrontendApplication& application() {
        return *static_cast<FrontendApplication*>(touchgfx::Application::getInstance());
    }

    /*
     * Member Declarations
     */
    touchgfx::Box __background;
    touchgfx::Box box1;
    touchgfx::Image pillars_of_creation;
    touchgfx::SVGImage rocket;

private:

    /*
     * Canvas Buffer Size
     */
    static const uint32_t CANVAS_BUFFER_SIZE = 7200;
    uint8_t canvasBuffer[CANVAS_BUFFER_SIZE];

    /*
     * Tick Counter Declarations
     */
    static const uint32_t TICK_MOVEBACKGROUND_INTERVAL = 3;
    uint32_t frameCountMoveBackgroundInterval;

};

#endif // SCREEN1_ROCKETVIEWBASE_HPP
