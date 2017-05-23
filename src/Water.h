// include file for screensaver template
#ifndef __WATER_H_
#define __WATER_H_

#include <string>
#include "waterfield.h"

void SetAnimation();

struct WaterSettings
{
  WaterField * waterField;
  int effectType;
  int frame;
  int nextEffectTime;
  int nextTextureTime;
  int effectCount;
  float scaleX;
  bool isWireframe;
  bool isTextureMode;
  std::string szTextureSearchPath;
};

#endif
