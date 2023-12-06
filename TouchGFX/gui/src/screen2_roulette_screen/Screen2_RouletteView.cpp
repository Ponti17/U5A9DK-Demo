#include <gui/screen2_roulette_screen/Screen2_RouletteView.hpp>
#include <touchgfx/utils.hpp>
#include <math.h>

Screen2_RouletteView::Screen2_RouletteView()
{

}

void Screen2_RouletteView::setupScreen()
{
    Screen2_RouletteViewBase::setupScreen();
}

void Screen2_RouletteView::tearDownScreen()
{
    Screen2_RouletteViewBase::tearDownScreen();
}

float tickCount = 0;
float rouletteFriction = 0.005;
float rouletteSpeed = 1;
float ballSpeed = 1;
void Screen2_RouletteView::rotateRoulette()
{
    rouletteSpeed = pow(2.718, -rouletteFriction*tickCount);

    if (rouletteSpeed < 0.01) {
        rouletteSpeed = 0;
    }

    if (rouletteSpeed < 0.2 && roulette_ball.getScale() > 1) {
        roulette_ball.setScale(roulette_ball.getScale() - 0.01);
    }

    if (rouletteSpeed < 0.1) {
        rouletteFriction += 0.00001;
    }

    roulette_inner.updateAngles(roulette_inner.getXAngle() + 0.000f, roulette_inner.getYAngle() + 0.000f, roulette_inner.getZAngle() + 0.100f * rouletteSpeed);
    roulette_ball.updateAngles(roulette_ball.getXAngle() + 0.000f, roulette_ball.getYAngle() + 0.000f, roulette_ball.getZAngle() + -0.150f * rouletteSpeed);
    tickCount += 1;
    roulette_inner.invalidate();
}