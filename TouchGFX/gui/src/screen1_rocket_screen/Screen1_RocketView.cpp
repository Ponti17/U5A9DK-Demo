#include <gui/screen1_rocket_screen/Screen1_RocketView.hpp>
#include <touchgfx/utils.hpp>
#include <images/BitmapDatabase.hpp>

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

void Screen1_RocketView::flyRocket()
{   
    rocket.setXY(rocket.getX() - 1, rocket.getY());
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