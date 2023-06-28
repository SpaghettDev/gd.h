#ifndef __TEXTALERTPOPUP_H__
#define __TEXTALERTPOPUP_H__

#include <gd.h>

#define __cdecl
namespace gd {
    class GDH_DLL TextAlertPopup : public cocos2d::CCNode {
        public:
            static TextAlertPopup* create(std::string str, float time, float scale) {
                auto ret = reinterpret_cast<TextAlertPopup*(__vectorcall*)(float, float, std::string)>(base + 0x1450b0)(time, scale, str);
                __asm add esp, 24;
                return ret;
            }
    };
}

#endif
