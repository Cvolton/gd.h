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
        PAD(360 - 320);
        int total;
        int from;
        int to;

        static cocos2d::CCScene* scene(gd::GJSearchObject* searchObject) {
            return reinterpret_cast<cocos2d::CCScene*(__fastcall*)(gd::GJSearchObject*)>(
                gd::base + 0x159F60
            )(searchObject);
        }
    };

}

#endif
