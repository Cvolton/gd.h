#ifndef __LEVELCELL_H__
#define __LEVELCELL_H__

#include <gd.h>

namespace gd {

    class GJGameLevel;

    class LevelCell : public cocos2d::CCLayer {
    public:
        PAD(89+4);
        gd::GJGameLevel* level;
    };

}

#endif
