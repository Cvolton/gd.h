#ifndef DELEGATES_H
#define DELEGATES_H

#include <gd.h>

namespace gd {
    class GJGameLevel;
    class GJUserScore;
    class NumberInputLayer;
    class SetIDPopup;
    class CCTextInputNode;
    class GJDropDownLayer;
    class SongInfoObject;
    class GJSpecialColorSelect;
    class CCCircleWave;
    class CurrencyRewardLayer;
    class DialogLayer;

    enum GJSongError {
        kGJSongErrorUnknown = 0,
        // dunno, didnt bother to RE
    };

    class TextInputDelegate {
        virtual void textChanged(CCTextInputNode*) {}
        virtual void textInputOpened(CCTextInputNode*) {}
        virtual void textInputClosed(CCTextInputNode*) {}
        virtual void textInputShouldOffset(CCTextInputNode*, float) {}
        virtual void textInputReturn(CCTextInputNode*) {}
        virtual bool allowTextInput(CCTextInputNode*) { return true; }
    };

    class ColorSelectDelegate {
        virtual void colorSelectClosed(cocos2d::CCNode*);
    };

    class ColorPickerDelegate {
        virtual void colorValueChanged(cocos2d::ccColor3B color);
    };

    class GJSpecialColorSelectDelegate {
        virtual void colorSelectClosed(GJSpecialColorSelect*, int);
    };

    class GJRotationControlDelegate {
        virtual void angleChangeBegin(void);
        virtual void angleChangeEnded(void);
        virtual void angleChanged(float);
    };

    class GJScaleControlDelegate {
        virtual void scaleChangeBegin(void);
        virtual void scaleChangeEnded(void);
        virtual void scaleChanged(float);
    };

    class MusicDownloadDelegate {
        virtual void downloadSongFailed(int, GJSongError);
        virtual void downloadSongFinished(SongInfoObject*);
        virtual void loadSongInfoFailed(int, GJSongError);
        virtual void loadSongInfoFinished(SongInfoObject*);
        virtual void songStateChanged(void);
    };

    enum UpdateResponse {
        kUpdateResponseUnknown,
        kUpdateResponseUpToDate,
        kUpdateResponseGameVerOutOfDate,
        kUpdateResponseUpdateSuccess,
    };

    enum LikeItemType {
        kLikeItemTypeUnknown,
        kLikeItemTypeLevel,
        kLikeItemTypeComment,
        kLikeItemTypeAccountComment,
    };

    class LevelDownloadDelegate {
        virtual void levelDownloadFinished(GJGameLevel*);
        virtual void levelDownloadFailed(int);
    };

    class LevelDeleteDelegate {
        virtual void levelDeleteFinished(int);
        virtual void levelDeleteFailed(int);
    };

    class LevelManagerDelegate {
        virtual void loadLevelsFinished(cocos2d::CCArray*, const char*) {};
        virtual void loadLevelsFailed(const char*) {};
        virtual void setupPageInfo(std::string, const char*) {};
    };

    class LevelUpdateDelegate {
        virtual void levelUpdateFinished(GJGameLevel*, UpdateResponse);
        virtual void levelUpdateFailed(int);
    };

    class OnlineListDelegate {
        virtual void loadListFinished(cocos2d::CCArray*, const char*) {};
        virtual void loadListFailed(const char*) {};
        virtual void setupPageInfo(std::string, const char*) {};
    };

    class UploadActionDelegate {
        virtual void uploadActionFinished(int, int) {};
        virtual void uploadActionFailed(int, int) {};
    };

    class UploadPopupDelegate {
        virtual void onClosePopup(void) {};
    };
    
    class LikeItemDelegate {
        virtual void likedItem(LikeItemType, int, bool);
    };

    class RateLevelDelegate {
        virtual void rateLevelClosed(void);
    };

    class NumberInputDelegate {
        virtual void numberInputClosed(NumberInputLayer*);
    };

    class SetIDPopupDelegate {
        virtual void setIDPopupClosed(SetIDPopup*, int);
    };

    class SetTextPopupDelegate {
        virtual void setIDPopupClosed(void*, std::string); //settextpopup
    };

    class GJDropDownLayerDelegate {
        virtual void dropDownLayerWillClose(GJDropDownLayer*);
    };

    class GooglePlayDelegate {
        virtual void googlePlaySignedIn() {}
    };

    class CCCircleWaveDelegate {
        virtual void circleWaveWillBeRemoved(CCCircleWave*) {}
    };

    class CurrencyRewardDelegate {
        virtual void currencyWillExit(CurrencyRewardLayer*);
    };

    class DialogDelegate {
        virtual void dialogClosed(DialogLayer*);
    };

    class LevelCommentDelegate {
        virtual void loadCommentsFinished(cocos2d::CCArray *, const char*)  {}
        virtual void loadCommentsFailed(const char*)  {}
        virtual void updateUserScoreFinished()  {}
        virtual void setupPageInfo(std::string, const char*)  {}
    };

    class CommentUploadDelegate {
        virtual void commentUploadFinished(int) {}
        virtual void commentUploadFailed(int, int) {}
        virtual void commentDeleteFailed(int, int) {}
    };

    class UserInfoDelegate {
        virtual void getUserInfoFinished(GJUserScore *) {}
        virtual void getUserInfoFailed(int) {}
        virtual void getUserInfoChanged(GJUserScore *) {}
    };

    class LeaderboardManagerDelegate {
        virtual void updateUserScoreFinished() {}
        virtual void updateUserScoreFailed() {}
        virtual void loadLeaderboardFinished(cocos2d::CCArray*, const char*) {}
        virtual void loadLeaderboardFailed(const char*) {}
    };
}

#endif
