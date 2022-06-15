#pragma once
#ifndef GJREWARDITEM_H
#define GJREWARDITEM_H

#include <gd.h>

namespace gd {

    enum GJRewardType
    {
        kGJRewardTypeUnknown = 0x0,
        kGJRewardTypeSmall = 0x1,
        kGJRewardTypeLarge = 0x2,
    };

    //i stole gjrewarditem from wylies gd decompiled
    class GJRewardItem : public cocos2d::CCObject {
        public:
            int m_nChestID;
            int m_nTimeRemaining;
            GJRewardType m_eRewardType;
            cocos2d::CCArray *m_pRewardObjects;
            bool m_bUnk;
    };

}

#endif
