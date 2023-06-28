#ifndef __GJBASEGAMELAYER_H__
#define __GJBASEGAMELAYER_H__

#include <gd.h>
#include <vector>

namespace gd
{
	class OBB2D;
	class GJEffectManager;
	class CCNodeContainer;
	class LevelSettingsObject;
	class PlayerObject;
	class GameObject;

	class GDH_DLL GJBaseGameLayer : public cocos2d::CCLayer
	{
	public:
		PAD(4);
		OBB2D *m_boundingBox;
		GJEffectManager *m_effectManager;
		cocos2d::CCLayer *m_pObjectLayer;
		cocos2d::CCSpriteBatchNode *m_batchNodeAddTop4;
		cocos2d::CCSpriteBatchNode *m_effectBatchNodeAddTop4;
		cocos2d::CCSpriteBatchNode *m_batchNodeTop3;
		cocos2d::CCSpriteBatchNode *m_batchNodeAddTop3;
		cocos2d::CCSpriteBatchNode *m_batchNodeAddGlowTop3;
		CCNodeContainer *m_batchNodeTop3Container;
		cocos2d::CCSpriteBatchNode *m_batchNodeTextTop3;
		cocos2d::CCSpriteBatchNode *m_batchNodeAddTextTop3;
		cocos2d::CCSpriteBatchNode *m_effectBatchNodeTop3;
		cocos2d::CCSpriteBatchNode *m_effectBatchNodeAddTop3;
		cocos2d::CCSpriteBatchNode *m_batchNodeTop2;
		cocos2d::CCSpriteBatchNode *m_batchNodeAddTop2;
		cocos2d::CCSpriteBatchNode *m_batchNodeAddGlowTop2;
		CCNodeContainer *m_batchNodeTop2Container;
		cocos2d::CCSpriteBatchNode *m_batchNodeTextTop2;
		cocos2d::CCSpriteBatchNode *m_batchNodeAddTextTop2;
		cocos2d::CCSpriteBatchNode *m_effectBatchNodeTop2;
		cocos2d::CCSpriteBatchNode *m_effectBatchNodeAddTop2;
		cocos2d::CCSpriteBatchNode *m_batchNode;
		cocos2d::CCSpriteBatchNode *m_batchNodeAdd;
		cocos2d::CCSpriteBatchNode *m_batchNodeAddGlow;
		CCNodeContainer *m_batchNodeTop1Container;
		cocos2d::CCSpriteBatchNode *m_batchNodeTextTop1;
		cocos2d::CCSpriteBatchNode *m_batchNodeAddTextTop1;
		cocos2d::CCSpriteBatchNode *m_effectBatchNodeTop1;
		cocos2d::CCSpriteBatchNode *m_effectBatchNodeAddTop1;
		cocos2d::CCSpriteBatchNode *m_batchNodePlayer;
		cocos2d::CCSpriteBatchNode *m_batchNodeAddPlayer;
		cocos2d::CCSpriteBatchNode *m_batchNodePlayerGlow;
		cocos2d::CCSpriteBatchNode *m_batchNodeAddMid;
		cocos2d::CCSpriteBatchNode *m_batchNodeBottom;
		cocos2d::CCSpriteBatchNode *m_batchNodeAddBottom;
		cocos2d::CCSpriteBatchNode *m_batchNodeAddBottomGlow;
		CCNodeContainer *m_batchNodeBot1Container;
		cocos2d::CCSpriteBatchNode *m_batchNodeText;
		cocos2d::CCSpriteBatchNode *m_batchNodeAddText;
		cocos2d::CCSpriteBatchNode *m_effectBatchNode;
		cocos2d::CCSpriteBatchNode *m_effectBatchNodeAdd;
		cocos2d::CCSpriteBatchNode *m_batchNodeBottom2;
		cocos2d::CCSpriteBatchNode *m_batchNodeAddBottom2;
		cocos2d::CCSpriteBatchNode *m_batchNodeAddBottom2Glow;
		CCNodeContainer *m_batchNodeBot2Container;
		cocos2d::CCSpriteBatchNode *m_batchNodeTextBot2;
		cocos2d::CCSpriteBatchNode *m_batchNodeAddTextBot2;
		cocos2d::CCSpriteBatchNode *m_effectBatchNodeBot2;
		cocos2d::CCSpriteBatchNode *m_effectBatchNodeAddBot2;
		cocos2d::CCSpriteBatchNode *m_batchNodeBottom3;
		cocos2d::CCSpriteBatchNode *m_batchNodeAddBottom3;
		cocos2d::CCSpriteBatchNode *m_batchNodeAddBottom3Glow;
		CCNodeContainer *m_batchNodeBot3Container;
		cocos2d::CCSpriteBatchNode *m_batchNodeTextBot3;
		cocos2d::CCSpriteBatchNode *m_batchNodeAddTextBot3;
		cocos2d::CCSpriteBatchNode *m_effectBatchNodeBot3;
		cocos2d::CCSpriteBatchNode *m_effectBatchNodeAddBot3;
		cocos2d::CCSpriteBatchNode *m_batchNodeBottom4;
		cocos2d::CCSpriteBatchNode *m_batchNodeAddBottom4;
		cocos2d::CCSpriteBatchNode *m_batchNodeAddBottom4Glow;
		CCNodeContainer *m_batchNodeBot4Container;
		cocos2d::CCSpriteBatchNode *m_batchNodeTextBot4;
		cocos2d::CCSpriteBatchNode *m_batchNodeAddTextBot4;
		cocos2d::CCSpriteBatchNode *m_effectBatchNodeBot4;
		cocos2d::CCSpriteBatchNode *m_effectBatchNodeAddBot4;
		PlayerObject *m_pPlayer1;
		PlayerObject *m_pPlayer2;
		LevelSettingsObject *m_pLevelSettings;
		cocos2d::CCDictionary *m_disabledGroupsDict;
		cocos2d::CCArray *m_pObjects;
		cocos2d::CCArray *m_sectionObjects;
		cocos2d::CCArray *m_sections;
		cocos2d::CCArray *m_collisionBlocks;
		cocos2d::CCArray *m_spawnObjects;
		cocos2d::CCArray *m_spawnObjects2;
		cocos2d::CCNode *m_groupNodes;
		std::vector<GameObject *> m_objectsVec;
		std::vector<GameObject *> m_disabledObjects;
		cocos2d::CCDictionary *m_groupDict;
		cocos2d::CCDictionary *m_staticGroupDict;
		cocos2d::CCDictionary *m_optimizedGroupDict;
		std::vector<cocos2d::CCArray *> m_groups;
		std::vector<cocos2d::CCArray *> m_staticGroups;
		std::vector<cocos2d::CCArray *> m_optimizedGroups;
		cocos2d::CCArray *m_batchNodes;
		cocos2d::CCArray *m_processedGroups;
		cocos2d::CCDictionary *m_counterDict;
		cocos2d::CCDictionary *m_spawnedGroups;
		bool m_didUpdateNormalCapacity;
		bool m_bIsDualMode;
		int m_unk2AC;
		bool m_activeDualTouch;
		int m_attemptClickCount;
		int m_lastVisibleSection;
		int m_firstVisibleSection;
		bool m_objectsAreDisabled;
		bool m_blending;
		PAD(0x8); // this should be 10 but im too lazy to fix playlayer rn

		cocos2d::CCLayer *getObjectLayer() { return m_pObjectLayer; }

		cocos2d::CCArray *getAllObjects() { return this->m_pObjects; }
 
		void pushButton(int uk, bool btn2)
		{
			reinterpret_cast<void(__thiscall *)(GJBaseGameLayer *, int, bool)>(
				base + 0x111500)(this, uk, btn2);
		}
		void releaseButton(int uk, bool btn2)
		{
			reinterpret_cast<void(__thiscall *)(GJBaseGameLayer *, int, bool)>(
				base + 0x111660)(this, uk, btn2);
		}

		int sectionForPos(float x)
		{
			int section = x / 100;
			if (section < 0)
				section = 0;
			return section;
		}
	};
}

#endif
