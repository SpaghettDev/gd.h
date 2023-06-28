#ifndef __LEVELSETTINGSOBJECT_H__
#define __LEVELSETTINGSOBJECT_H__

#include <gd.h>

namespace gd {
    class GJEffectManager;
    class GJGameLevel;

    enum Gamemode {
        kGamemodeCube = 0,
        kGamemodeShip = 1,
        kGamemodeBall = 2,
        kGamemodeUfo = 3,
        kGamemodeWave = 4,
        kGamemodeRobot = 5,
        kGamemodeSpider = 6,
    };

    enum Speed {
        kSpeedNormal = 0,
        kSpeedSlow = 1,
        kSpeedFast = 2,
        kSpeedFaster = 3,
        kSpeedFastest = 4,
    };

    class GDH_DLL LevelSettingsObject : public cocos2d::CCNode {
        public:
           GJEffectManager* m_effectManager;
            Gamemode m_startGamemode; // 0xF0
            Speed m_startSpeed; // 0xF4
            bool m_startMini; // 0xF8
            bool m_startDual; // 0xF9
            bool m_twoPlayerMode; // 0xFA
            float m_songStartOffset; // 0xFC
            bool m_fadeIn; // 0x100
            bool m_fadeOut; // 0x101
            int m_selectedBackground; // 0x104 i need a bette rname for these
            int m_selectedGround;
            int m_selectedFont;
            PAD(4);
            GJGameLevel* m_level; // 0x114
            std::string unk118;

            std::string getSaveString() {
                std::string res;

                reinterpret_cast<void(__thiscall*)(LevelSettingsObject*, std::string*)>(
                    base + 0x16ebf0
                )(this, &res);

                return res;
            }
    };
}

#endif
