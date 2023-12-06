#include <gui/screen1_rocket_screen/Screen1_RocketView.hpp>
#include <touchgfx/utils.hpp>
#include <images/BitmapDatabase.hpp>
#include <math.h>

Screen1_RocketView::Screen1_RocketView()
{

}

void Screen1_RocketView::setupScreen()
{
    Screen1_RocketViewBase::setupScreen();
}

void Screen1_RocketView::tearDownScreen()
{
    Screen1_RocketViewBase::tearDownScreen();
}

float Screen1_tickCount = 0;
bool rocketFlyIn = true;
bool rocketFlyOut = false;
void Screen1_RocketView::flyRocket()
{   
    if (rocketFlyIn) {
        rocket.setScale(rocket.getScaleX() - 0.02, rocket.getScaleY() - 0.02);
        rocket.setXY(rocket.getX() - 2, -140);
        if (rocket.getScaleX() < 3) {
            rocketFlyIn = false;
        }
    }
    else if (rocketFlyOut) {
        rocket.setScale(rocket.getScaleX() + 0.02, rocket.getScaleY() + 0.02);
        rocket.setXY(rocket.getX() - 2, -140);
    }

    else {
        if (int(Screen1_tickCount)%2 == 0) {
        rocket.setXY(rocket.getX() - 1, -140 + 5*sin(Screen1_tickCount / 50));
        rocket.setRotation(-135 + 2*sin(Screen1_tickCount / 50));
        }

        Screen1_tickCount += 1;

        if (rocket.getX() < -150) {
            rocketFlyOut = true;
        }
    }

    rocket.invalidate();
}

float x = 0;
int n = 20;
void Screen1_RocketView::moveBackground()
{
    // Taylor series implementation of sin(x)
    float t = x;
    float sine = t;
    for (int a=1; a<n; ++a)
    {
        float mult = -x*x/((2*a+1)*(2*a));
        t *= mult;
        sine += t;
    }
    // sin(x) repeats every 2pi
    // Due to limitations of Taylor, reset x to 0 every 2pi
    if (x < 6.28) {
        x += 0.01*6.28;
    }
    else {
        x = 0;
    }

    pillars_of_creation.setXY(pillars_of_creation.getX() + 1, -160+sine*5);
    pillars_of_creation.invalidate();
}