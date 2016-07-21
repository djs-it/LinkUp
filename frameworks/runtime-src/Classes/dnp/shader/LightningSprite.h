

#ifndef __HelloCpp__ensLightningBoltNode__
#define __HelloCpp__ensLightningBoltNode__

#include <iostream>
using namespace std;
#include "cocos2d.h"
using namespace cocos2d;
#include "ensMesh.h"
#include "ensMath.h"
#include "ensIndexVBO.h"
#include "ensGLProgramWithUnifos.h"

namespace __lb{
    class ClineSeg{
    public:
        CCPoint startPoint;
        CCPoint endPoint;
        CCPoint branchEndPoint;//only seed seg store this
        int branchID;//which branch the seg belongs to. branchID==0 means belongs to mainBranch
        int branchStartGenerationID;//in which generation the branch this seg belongs to start generated.
        int generationID;//this seg created in which generation, the original seg's generationID is 0
        ClineSeg*father;
        vector<ClineSeg*> childList;
        bool needReGenerate;//whether the branch use this seg as root seg need to regenerate
    public:
        ClineSeg(){
            initParameter();
        }
        ClineSeg(CCPoint start,CCPoint end){
            initParameter();//do not forget this
            init(start, end);
        }
        virtual~ClineSeg(){}
        void init(CCPoint start,CCPoint end);
        bool addChildRef(ClineSeg*child);
        bool removeChildRef(ClineSeg*child);
        float getLen()const;
        CCPoint getDir()const;
        CCPoint getVec()const;
        CCPoint getRightNormal()const;
        CCPoint getMidPoint()const;
    protected:
        void initParameter(){
            branchID=-1;
            branchStartGenerationID=-1;
            generationID=-1;
            father=NULL;
            needReGenerate=false;
        }
    };
}

    

    
class LightningSprite:public Sprite
//ref to: http://drilian.com/2009/02/25/lightning-bolts/
{
public:
    LightningSprite(){
        m_mainSegLen=14;
        m_k_offset=0.13;
        updateNGeneration();
        m_headSeg=NULL;
        m_tailSeg=NULL;
        m_program=NULL;
        m_indexVBO=NULL;
        m_isDrawDebug=false;
        m_percentageOfJitterBranch=0.5;
        m_opacityZoom=1.2;//1.2;
        m_mesh=NULL;
    }
    virtual ~LightningSprite(){
        if(m_program)m_program->release();
        if(m_indexVBO)m_indexVBO->release();
        if(m_mesh)m_mesh->release();
    }
    void updateNGeneration();
    void draw(Renderer* renderer, const Mat4 &transform, uint32_t flags);
    void onDraw(const Mat4 &transform, uint32_t flags);
    void onDrawDebug(const Mat4 &transform, uint32_t flags);
    bool setShader();
    void setStartAndEnd(CCPoint start,CCPoint end);
    void genLighting();
    void doJitter();
    bool getIsDrawDebug()const{return m_isDrawDebug;}
    void setIsDrawDebug(bool value){m_isDrawDebug=value;}
    
    static LightningSprite* create(const char* $pszFileName);
    static LightningSprite* create(const char* $pszFileName, const Rect& $rect);
    static LightningSprite* createWithSpriteFrame(SpriteFrame* $pSpriteFrame);
    static LightningSprite* createWithSpriteFrameName(const char* $pszSpriteFrameName);
protected:
    //----init program
    void initProgram();
    //----generate lighting
    void genSeges();
    void genMesh();
    vector<__lb::ClineSeg*> genSegesFromBranchSeg(__lb::ClineSeg*branchSeg,int nGeneration);
    vector<__lb::ClineSeg*> splitSeg(__lb::ClineSeg*seg,int generationID);
    //----jitter
    void releaseNeedReGenBranch(vector<__lb::ClineSeg*>&branchList,vector<__lb::ClineSeg*>&segList);
    void releaseNeedReGenBranch_inn(__lb::ClineSeg*seg,vector<__lb::ClineSeg*>&segList);
    //----debug draw
    void debugDraw_segWireFrame(float lineWidth);
    void debugDraw_segLineAndDot(float lineWidth,float pointSize);
protected:
    //shader program
    CGLProgramWithUnifos*m_program;
    //core data of lightning
    CCPoint m_startPoint_parentSpace;//parent space start point
    CCPoint m_endPoint_parentSpace;//parent space end point
    CCPoint m_startPoint;//local space start point
    CCPoint m_endPoint;//local space end point
    vector<__lb::ClineSeg*> m_segList;//hold seges compose the lighting
    int m_nGeneration;//split how many generations
    __lb::ClineSeg*m_headSeg;//the lighting tree's main branch's head seg
    __lb::ClineSeg*m_tailSeg;//the lighting tree's main branch's tail seg
    //model
    Cmesh* m_mesh;
    CindexVBO*m_indexVBO;
    //settings
    float m_k_offset;
    float m_mainSegLen;
    float m_percentageOfJitterBranch;
    float m_opacityZoom;
    bool m_isDrawDebug;
    
    CustomCommand _customCommand;
    CustomCommand _customCommand_debug;
};

#endif /* defined(__HelloCpp__ensLightingSprite__) */
