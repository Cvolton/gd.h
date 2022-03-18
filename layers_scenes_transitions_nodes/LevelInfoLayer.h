#ifndef __LEVELINFOLAYER_H__
#define __LEVELINFOLAYER_H__

#include <gd.h>

namespace gd {

    class GJGameLevel;

    class LevelInfoLayer : public cocos2d::CCLayer {
        public:
            PAD(324 - sizeof(cocos2d::CCLayer));
            gd::GJGameLevel* level;
    };

}

#endif
