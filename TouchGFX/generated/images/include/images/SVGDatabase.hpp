// Generated by imageconverter. Please, do not edit!

#ifndef TOUCHGFX_SVGDATABASE_HPP
#define TOUCHGFX_SVGDATABASE_HPP

#include <touchgfx/hal/Types.hpp>
#include <touchgfx/hal/VGData.hpp>

enum SVGImages
{
    SVG_ROCKET_ID = 0,
    SVG_ROCKET2_ID = 1,
    NUMBER_OF_SVG_IMAGES = 2
};

namespace SVGDatabase
{
const touchgfx::VGObject* getInstance();
uint16_t getInstanceSize();
} // namespace SVGDatabase

#endif // TOUCHGFX_SVGDATABASE_HPP
