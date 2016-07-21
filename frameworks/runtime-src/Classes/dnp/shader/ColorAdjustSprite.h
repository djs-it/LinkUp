

#ifndef HelloWorld_ensColorAdjustNode_h
#define HelloWorld_ensColorAdjustNode_h


#include<iostream>
using namespace std;
#include "cocos2d.h"
using namespace cocos2d;
#include "ensGLProgramWithUnifos.h"

USING_NS_CC;


class ColorAdjustSprite : public Sprite
{
public:
	ColorAdjustSprite() {
        m_program_adjustColorHSL=NULL;
        m_dH=0;
        m_dS=0;
        m_dL=0;
    }
	virtual ~ColorAdjustSprite(){
        if(m_program_adjustColorHSL)m_program_adjustColorHSL->release();
    };
    
    bool setShader();
    
//    static ColorAdjustSprite* create();
    static ColorAdjustSprite* create(const char* $pszFileName);
    static ColorAdjustSprite* create(const char* $pszFileName, const Rect& $rect);
    static ColorAdjustSprite* createWithSpriteFrame(SpriteFrame* $pSpriteFrame);
    static  ColorAdjustSprite* createWithSpriteFrameName(const char* $pszSpriteFrameName);
    
	virtual void draw(Renderer *renderer, const Mat4 &transform, uint32_t flags) ;
    void setDH(float value){m_dH=value;}
    float getDH()const{return m_dH;}
    void setDS(float value){m_dS=value;}
    float getDS()const{return m_dS;}
    void setDL(float value){m_dL=value;}
    float getDL()const{return m_dL;}

protected:
    CGLProgramWithUnifos*m_program_adjustColorHSL;
    float m_dH;
    float m_dS;
    float m_dL;

    
};

#endif /* defined(__HelloCpp__ensColorAdjustNode__) */
