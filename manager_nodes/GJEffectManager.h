#ifndef __GJEFFECTMANAGER_H__
#define __GJEFFECTMANAGER_H__

#include <gd.h>
#include "sprite_nodes/ColorActionSprite.h"
#include <array>

namespace gd
{
class ColorAction;
class GDH_DLL GJEffectManager : public cocos2d::CCNode
{
  public:
	PAD(4);
	cocos2d::CCDictionary* m_colorActions;
	cocos2d::CCDictionary* m_colorSprites;
	cocos2d::CCDictionary* m_pulseActionsForGroup;
	cocos2d::CCDictionary* m_colorCache;
	cocos2d::CCDictionary* m_opacityActionsForGroup;
	cocos2d::CCDictionary* m_f0150;
	cocos2d::CCArray* m_opacityActions;
	cocos2d::CCArray* m_touchActions;
	cocos2d::CCDictionary* m_countActions;
	cocos2d::CCArray* m_onDeathActions;
	cocos2d::CCArray* m_collisionActions;
	cocos2d::CCDictionary* m_f0180;
	cocos2d::CCDictionary* m_f0188;
	std::vector<CCObject*> m_inheritanceNodesForColor;
	cocos2d::CCDictionary* m_f01a8;
	cocos2d::CCDictionary* m_collisionActionsForGroup1;
	cocos2d::CCDictionary* m_collisionActionsForGroup2;
	std::vector<gd::ColorAction*> m_colorActionsForColor;
	std::vector<gd::ColorActionSprite*> m_colorSpritesForColor;
	std::array<bool, 1100> m_pulseExistsForGroup;
	bool m_f063c;
	std::array<bool, 1100> m_opactiyExistsForGroup;
	std::array<int, 1100> m_itemValues;
	int m_unusued;
	int* m_unused2;
	cocos2d::CCArray* m_f1bc8;
	cocos2d::CCArray* m_inheritanceChain;
	cocos2d::CCDictionary* m_f1bd8;
	std::vector<bool> m_groupToggled;
	cocos2d::CCDictionary* m_triggeredIDs;
	cocos2d::CCDictionary* m_followActions;
	cocos2d::CCArray* m_spawnActions;
	cocos2d::CCArray* m_moveActions;
	cocos2d::CCArray* m_completedMoveActions;
	cocos2d::CCNode* m_f1c30;
	cocos2d::CCDictionary* activeMoveActions;
	cocos2d::CCDictionary* activeRotateActions;
	cocos2d::CCDictionary* m_f1c48;
	cocos2d::CCDictionary* m_f1c50;
	float m_time;
	float m_velocity;
	float m_acceleration;
	bool m_moveOptimizationEnabled;

	ColorAction* getColorAction(int num)
	{
		return reinterpret_cast<ColorAction*(__thiscall*)(GJEffectManager*, int)>(base + 0x11cde0)(this, num);
	}
};
} // namespace gd

#endif