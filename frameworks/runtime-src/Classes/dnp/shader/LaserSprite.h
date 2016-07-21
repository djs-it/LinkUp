#ifndef __ensLaserLayer_H__
#define __ensLaserLayer_H__

#include "cocos2d.h"
using namespace cocos2d;
//#include "cocos-ext.h"
//using namespace cocos2d::extension;
#include "ensGLProgramWithUnifos.h"

class LaserSprite:public Sprite{
public:
    LaserSprite(){
        m_program=NULL;
        m_maskTex=NULL;
        m_maskTex2=NULL;
        m_noiseTex=NULL;
        m_noiseTex2=NULL;
        m_highlight=1.0;
        m_time=0;
        m_PorN=1;
        m_kLightColor=1.0;
        m_kGlowColor=1.0;
        m_noiseScale=1.0;
    }
    virtual~LaserSprite(){
        if(m_program)m_program->release();
        if(m_maskTex)m_maskTex->release();
        if(m_maskTex2)m_maskTex2->release();
        if(m_noiseTex)m_noiseTex->release();
        if(m_noiseTex2)m_noiseTex2->release();

    }
    void setBlendFunc(GLenum src,GLenum dst);
    void updateStartAndEnd(){
        
        CCPoint mid=ccpMult(m_start+m_end, 0.5) ;
        CCPoint dir=ccpNormalize(m_end-m_start);
        float A;
        if(dir.y<=0){
            A=acosf(dir.x)*180/M_PI;
        }else{
            A=(2*M_PI-acosf(dir.x))*180/M_PI;
        }
        this->setPosition(mid);
        this->setRotation(A);
        
        float targetLen=ccpDistance(m_start, m_end);
        float contentLen=this->getContentSize().width;
        float scaleX=targetLen/contentLen;
        this->setScaleX(scaleX);
   
        
        
    }
    void setStart(const CCPoint&start){
        m_start=start;
        updateStartAndEnd();
    }
    void setEnd(const CCPoint&end){
        m_end=end;
        updateStartAndEnd();
    }
    bool setShader();
    void setLight(const char*maskName1,const char*maskName2,const char*noiseName1,const char*noiseName2);
    void draw(Renderer* renderer, const Mat4 &transform, uint32_t flags);
    void update(float dt);
    void setPorN(float value){m_PorN=value;}
    void onPassUnifoAndBindTex(const Mat4 &transform, uint32_t flags);
    
    void setLightColor(float value){m_kLightColor=value;}
    void setGlowColor(float value){m_kGlowColor=value;}
    void setNoiseScale(float value){m_noiseScale=value;}
    
    
    static LaserSprite* create(const char* $pszFileName);
    static LaserSprite* create(const char* $pszFileName, const Rect& $rect);
    static LaserSprite* createWithSpriteFrame(SpriteFrame* $pSpriteFrame);
    static LaserSprite* createWithSpriteFrameName(const char* $pszSpriteFrameName);
    
    CGLProgramWithUnifos*m_program;
    CCTexture2D*m_maskTex;
    CCTexture2D*m_maskTex2;
    CCTexture2D*m_noiseTex;
    CCTexture2D*m_noiseTex2;
    float m_highlight;
    float m_time;
    float m_PorN;
    CCPoint m_start;
    CCPoint m_end;
    float m_kLightColor;
    float m_kGlowColor;
    float m_noiseScale;

    
    
    CustomCommand _customCommand;
    CustomCommand _passUnifoAndBindTexCommand;
    
};

#endif // __ensLaserLayer_H__
