
#ifndef HelloWorld_ensRippleNode_h
#define HelloWorld_ensRippleNode_h
#include <iostream>
#include <string>
using namespace std;
#include "cocos2d.h"
using namespace cocos2d;
#include "ensMesh.h"
#include "ensMath.h"
#include "ensIndexVBO.h"
#include "ensGLProgramWithUnifos.h"

namespace ripple {
    class CrippleBuffer :public CCObject
    {
    public:
        vector<vector<float> > mat;
    };
}

class RippleSprite : public Sprite{
public:
	RippleSprite(){
        m_indexVBO=NULL;
        m_mesh=NULL;
        m_srcBuffer=NULL;
        m_dstBuffer=NULL;
        m_nRow=0;
        m_nCol=0;
        m_rippleStrength=8;
        m_isDrawDebug=false;
        m_time=0;
        m_gridSideLen = 8;
        
    }
	virtual ~RippleSprite(){
        if(m_indexVBO)m_indexVBO->release();
        if(m_mesh)m_mesh->release();
        if(m_srcBuffer)m_srcBuffer->release();
        if(m_dstBuffer)m_dstBuffer->release();
    }
	bool setShader();
    bool setGridSideLen(float gridSideLen){m_gridSideLen=gridSideLen;}
    void draw(Renderer* renderer, const Mat4 &transform, uint32_t flags);
    void onDrawDebug(const Mat4 &transform, uint32_t flags);
    void onDraw(const Mat4 &transform, uint32_t flags);
//    void drawWire();
	void update(float t);
    void doTouch(const CCPoint&touchPoint,float depth,float r);
    float getGridSideLen()const{return m_gridSideLen;}
    void setIsDrawDebug(bool value){m_isDrawDebug=value;}
    bool getIsDrawDebug()const{return m_isDrawDebug;}
    
    static RippleSprite* create(const char* $pszFileName);
    static RippleSprite* create(const char* $pszFileName, const Rect& $rect);
    static RippleSprite* createWithSpriteFrame(SpriteFrame* $pSpriteFrame);
    static RippleSprite* createWithSpriteFrameName(const char* $pszSpriteFrameName);
protected:
    void updateOnce();
protected:
	CindexVBO*m_indexVBO;
    Cmesh*m_mesh;
    ripple::CrippleBuffer*m_srcBuffer;
    ripple::CrippleBuffer*m_dstBuffer;
    float m_gridSideLen;
    int m_nRow;//grid row count
    int m_nCol;//grid col count
    vector<Cv2> m_texCoordList_store;
    float m_rippleStrength;
    bool m_isDrawDebug;
    float m_time;
    
    CustomCommand _customCommand;
    CustomCommand _customCommand_debug;

};

#endif
