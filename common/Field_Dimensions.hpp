#pragma once

#include <iostream>

struct Field_Dimensions {

  inline float Length() { return _Length; }
  inline float Width() { return _Width; }
  inline float Border() { return _Border; }

  inline float LineWidth() { return _LineWidth; }

  inline float GoalWidth() { return _GoalWidth; }
  inline float GoalDepth() { return _GoalDepth; }
  inline float GoalHeight() { return _GoalHeight; }

/** Distance of the penalty marker from the goal line */
  inline float PenaltyDist() { return _PenaltyDist; }
  inline float PenaltyDiam() { return _PenaltyDiam; }

/** Radius of the goal arcs */
  inline float ArcRadius() { return _ArcRadius; }

/** diameter of the center circle */
  inline float CenterRadius() { return _CenterRadius; }
  inline float CenterDiameter() { return _CenterDiameter; }

/** flat area for defence markings */
  inline float GoalFlat() { return _GoalFlat; }

  inline float FloorLength() { return _FloorLength; }
  inline float FloorWidth() { return _FloorWidth; }

  static const Field_Dimensions Single_Field_Dimensions;

  static const Field_Dimensions Double_Field_Dimensions;

  static Field_Dimensions Current_Dimensions;

  Field_Dimensions() : Field_Dimensions(0,0,0,0,0,0,0,0,0,0,0,0,0,0,0)
  {
  }

  Field_Dimensions(float fl, float fw, float fb, float flw, float gw, float gd, float gh, float pd, float pdiam, float ar, float cr, float cd, float gf, float ffl, float ffw)
      : _Length(fl),
        _Width(fw),
        _Border(fb),
        _LineWidth(flw),
        _GoalWidth(gw),
        _GoalDepth(gd),
        _GoalHeight(gh),
        _PenaltyDist(pd),
        _PenaltyDiam(pdiam),
        _ArcRadius(ar),
        _CenterRadius(cr),
        _CenterDiameter(cd),
        _GoalFlat(gf),
        _FloorLength(ffl),
        _FloorWidth(ffw)
  {
  }

  Field_Dimensions(const Field_Dimensions & other)
      : Field_Dimensions( other._Length,
                          other._Width,
                          other._Border,
                          other._LineWidth,
                          other._GoalWidth,
                          other._GoalDepth,
                          other._GoalHeight,
                          other._PenaltyDist,
                          other._PenaltyDiam,
                          other._ArcRadius,
                          other._CenterRadius,
                          other._CenterDiameter,
                          other._GoalFlat,
                          other._FloorLength,
                          other._FloorWidth)
  {
  }

  Field_Dimensions & operator=(const Field_Dimensions & other) {
    _Length = other._Length;
    _Width = other._Width;
    _Border = other._Border;
    _LineWidth = other._LineWidth;
    _GoalWidth = other._GoalWidth;
    _GoalDepth = other._GoalDepth;
    _GoalHeight = other._GoalHeight;
    _PenaltyDist = other._PenaltyDist;
    _PenaltyDiam = other._PenaltyDiam;
    _ArcRadius = other._ArcRadius;
    _CenterRadius = other._CenterRadius;
    _CenterDiameter = other._CenterDiameter;
    _GoalFlat = other._GoalFlat;
    _FloorLength = other._FloorLength;
    _FloorWidth = other._FloorWidth;
    return *this;
  }

  Field_Dimensions operator*(float scalar) const {
    return Field_Dimensions(
        _Length*scalar,
        _Width*scalar,
        _Border*scalar,
        _LineWidth*scalar,
        _GoalWidth*scalar,
        _GoalDepth*scalar,
        _GoalHeight*scalar,
        _PenaltyDist*scalar,
        _PenaltyDiam*scalar,
        _ArcRadius*scalar,
        _CenterRadius*scalar,
        _CenterDiameter*scalar,
        _GoalFlat*scalar,
        _FloorLength*scalar,
        _FloorWidth*scalar
    );
  }

private:
  float _Length;
  float _Width;
  float _Border;
  float _LineWidth;
  float _GoalWidth;
  float _GoalDepth;
  float _GoalHeight;
  float _PenaltyDist;
  float _PenaltyDiam;
  float _ArcRadius;
  float _CenterRadius;
  float _CenterDiameter;
  float _GoalFlat;
  float _FloorLength;
  float _FloorWidth;
};