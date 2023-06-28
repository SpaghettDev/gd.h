#ifndef __GAMELEVELMANAGER_H__
#define __GAMELEVELMANAGER_H__

#include <gd.h>

namespace gd {

class GJGameLevel;

    class GDH_DLL GameLevelManager : public cocos2d::CCNode {
    public:
        // thanks to wylie for most of these!

        cocos2d::CCDictionary* m_mainLevels; // the values are GJGameLevel
        cocos2d::CCDictionary* m_searchFilters; // the level search filters
        cocos2d::CCDictionary* m_onlineLevels;
        PAD(4);
        cocos2d::CCDictionary* m_followedCreators; // key is the account id
        cocos2d::CCDictionary* m_downloadedLevels;
        // dear robtop, have you heard of a set
        // all of these just have the value of CCString("1")
        cocos2d::CCDictionary* m_likedLevels; // https://github.com/Wyliemaster/gddocs/blob/client/docs/resources/client/gamesave/GLM.md#glm_12
        cocos2d::CCDictionary* m_ratedLevels; // 32
        cocos2d::CCDictionary* m_pRatedDemons;
        cocos2d::CCDictionary* m_reportedLevels;
        // the names of the folders
        cocos2d::CCDictionary* m_onlineFolders;
        cocos2d::CCDictionary* m_localLevelsFolders;
        cocos2d::CCDictionary* m_dailyLevels;
        int m_dailyTimeLeft; // i cant figure out the unit
        int m_dailyID;
        int m_dailyID_; // 64
        PAD(4);
        int m_weeklyTimeLeft;
        int m_weeklyID;
        int m_weeklyID_; // ? (this was 2 lower than the other weekly id)
        cocos2d::CCDictionary* m_gauntletLevels;
        cocos2d::CCDictionary* unkDict13;
        PAD(4);
        cocos2d::CCDictionary* m_pTimerDict; // 108 / 344
        cocos2d::CCDictionary* m_knownUsers; // 348
        cocos2d::CCDictionary* m_accountIDtoUserIDDict; // 352
        cocos2d::CCDictionary* m_userIDtoAccountIDDict; // 356
        cocos2d::CCDictionary* storedLevels; // cached lvls?? (values are arrays) / 360
        cocos2d::CCDictionary* unkDict19; // more cache stuff (values are strings) / 364
        cocos2d::CCDictionary* unkDict20; // 368
        cocos2d::CCDictionary* unkDict21; // 372
        cocos2d::CCDictionary* unkDict22; // 376
        cocos2d::CCDictionary* unkDict23; // 380
        cocos2d::CCDictionary* unkDict24; // 384
        cocos2d::CCDictionary* storedUserInfo; // 388
        cocos2d::CCDictionary* unkDict26;
        cocos2d::CCDictionary* unkDict27;
        cocos2d::CCDictionary* unkDict28;
        std::string unkStr1;
        std::string unkStr2; // im not sure if this is actually is a std::string, although it looks like one
        int leaderboardState;
        bool m_bUnkEditLevelLayerOnBack;
        
        inline static GameLevelManager* sharedState() {
            return reinterpret_cast<GameLevelManager*(__stdcall*)()>( gd::base + 0x9f860 )();
        }

        inline static gd::GJGameLevel* createNewLevel() {
            return reinterpret_cast<gd::GJGameLevel*(__stdcall*)()>( gd::base + 0xa0db0 )();
        }

        GJGameLevel* getMainLevel(int id, bool unk) {
            return reinterpret_cast<GJGameLevel*(__thiscall*)(
                GameLevelManager*, int, bool
            )>( base + 0xa0940 )(this, id, unk);
        }
    };

}

#endif
