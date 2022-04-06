#ifndef __LEVELBROWSERLAYER_H__
#define __LEVELBROWSERLAYER_H__

#include <gd.h>

namespace gd {

    class GJSearchObject;

    class LevelBrowserLayer : public cocos2d::CCLayer {
    public:
        PAD(312 - sizeof(cocos2d::CCLayer));
        CCMenuItemSpriteExtra* nextBtn;
        CCMenuItemSpriteExtra* prevBtn;
        PAD(336 - 320);
        GJSearchObject* searchObject;
        PAD(360 - 340);
        int total;
        int from;
        int to;

        static cocos2d::CCScene* scene(gd::GJSearchObject* searchObject) {
            return reinterpret_cast<cocos2d::CCScene*(__fastcall*)(gd::GJSearchObject*)>(
                gd::base + 0x159F60
            )(searchObject);
        }

        void loadPage(gd::GJSearchObject* searchObj) {
            reinterpret_cast<void(__thiscall*)(LevelBrowserLayer*, gd::GJSearchObject*)>(base + 0x15B160)(this, searchObj);
        }
    };

}

#endif
