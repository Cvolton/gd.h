#ifndef __DAILYLEVELPAGE_H__
#define __DAILYLEVELPAGE_H__

#include <gd.h>

namespace gd {

    class GJSearchObject;

    class DailyLevelPage : public cocos2d::CCLayer {
    public:
        PAD(493 - sizeof(cocos2d::CCLayer));
        bool isWeekly;
    };

}

#endif
