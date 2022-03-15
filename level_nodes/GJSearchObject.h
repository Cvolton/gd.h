#ifndef __GJSEARCHOBJECT_H__
#define __GJSEARCHOBJECT_H__

#include <gd.h>

namespace gd {

    enum SearchType {
        kSearchTypeSearch         = 0,
        kSearchTypeMostDownloaded = 1,
        kSearchTypeMostLiked      = 2,
        kSearchTypeTrending       = 3,
        kSearchTypeRecent         = 4,
        kSearchTypeUsersLevels    = 5,
        kSearchTypeFeatured       = 6,
        kSearchTypeMagic          = 7,
        kSearchTypeMapPacks       = 9,
        kSearchTypeAwarded        = 11,
        kSearchTypeFollowed       = 12,
        kSearchTypeFriends        = 13,
        kSearchTypeFindUsers      = 14,
        kSearchTypeHallOfFame     = 16,
        kSearchTypeSimilar        = 18,
        kSearchType19             = 19,
        kSearchTypeMyLevels       = 98,
        kSearchTypeSavedLevels    = 99,
    };

    class GJSearchObject : public cocos2d::CCNode {
    public:
        SearchType m_nScreenID;
        PAD(96);
        int currentFolder; // might be unsigned, but then again its robtop

        static GJSearchObject* create(SearchType nID) {
            return reinterpret_cast<GJSearchObject*(__fastcall*)(SearchType)>(
                gd::base + 0xc2b90
            )(nID);
        }

        static GJSearchObject* create(SearchType nID, std::string str) {
            auto pRet = reinterpret_cast<GJSearchObject*(__fastcall*)(SearchType, std::string)>(
                gd::base + 0xC2C80
            )(nID, str);
            __asm add esp, 0x18
            return pRet;
        }

        SearchType getType() {
            return this->m_nScreenID;
        }
    };

}

#endif
