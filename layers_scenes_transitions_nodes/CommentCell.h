#ifndef __COMMENTCELL_H__
#define __COMMENTCELL_H__

#include <gd.h>

namespace gd {

    class GJComment;

    class CommentCell : public cocos2d::CCLayer {
    public:
        PAD(89+16);
        GJComment* comment;
        bool accountComment;
    };

}

#endif
