/************************************************************************
 *  File:           Color.hpp
 *  Description:    Hold color data, including RGB and CIELAB; maybe methods like computeLAB()
 *
 *  Author:         Julia Dobbs
 *  Created:        6/21/2025
 *  Last Edited:    6/21/2025
 *  Target:         Cross-platform desktop; standard C++17
 *
 *  Dependencies:   
 *      - 
 * 
 *  Notes:
 *      - part of the SwatchSync project
 *      - used for matching input target colors to physical inventory
************************************************************************/

#pragma once
#include <string>
#include <cstdint> 
#include <tuple>    //  for getRGB() and getLAB() return types

class Color
{
private:
    std::string name;
    std::string hexCode;
    std::string id;

    uint8_t red;        // RGB components
    uint8_t green;
    uint8_t blue;

    double labL;    // CIELAB components
    double labA;
    double labB;

public:
    // Constructor
    Color(const std::string& name, const std::string& hexCode, const std::string& id);

    // Accessors / Getters
    std::string getName() const;
    std::string getHexCode() const;
    std::string getId() const;
    std::tuple<uint8_t, uint8_t, uint8_t> getRGB() const;
    std::tuple<double, double, double> getLab() const;

    // Setters
    void setRGB(uint8_t red, uint8_t green, uint8_t blue);
    void setLab(double labL, double labA, double labB);
};
