
#include "ColorAdjustSprite.h"

bool ColorAdjustSprite::setShader()
{

    //init this CCSprite
//    this->CCSprite::initWithFile(texFileName.c_str());
    //blendfunc
    ccBlendFunc blendFunc={GL_SRC_ALPHA,GL_ONE_MINUS_SRC_ALPHA};
    this->setBlendFunc(blendFunc);
  
    //create and set shader program
	{
		GLchar * fragSource = (GLchar*) CCString::createWithContentsOfFile(CCFileUtils::sharedFileUtils()->fullPathForFilename("shaders/colorAdjustHSL.fsh").c_str())->getCString();
		CGLProgramWithUnifos* program = new CGLProgramWithUnifos();
        program->autorelease();
		program->initWithVertexShaderByteArray(ccPositionTextureColor_noMVP_vert, fragSource);//use ccPositionTextureColor_noMVP_vert instead of ccPositionTextureColor_vert, see: http://www.cnblogs.com/wantnon/p/4190341.html
        //            --below code is no longer needed, because bindPredefinedVertexAttribs() is called in link() in 3.x
        //            --bind attribute
        //            --program->addAttribute(kCCAttributeNamePosition, kCCVertexAttrib_Position);
        //            --program->addAttribute(kCCAttributeNameColor, kCCVertexAttrib_Color);
        //            --program->addAttribute(kCCAttributeNameTexCoord, kCCVertexAttrib_TexCoords);
        //link  (must after bindAttribute)
		program->link();
        //get cocos2d-x build-in uniforms
		program->updateUniforms();
        //get my own uniforms
        program->attachUniform("u_dH");
        program->attachUniform("u_dS");
        program->attachUniform("u_dL");
        //set program
        m_program_adjustColorHSL=program;
        m_program_adjustColorHSL->retain();
        //check gl error
		CHECK_GL_ERROR_DEBUG();
	}
	//check gl error
	CHECK_GL_ERROR_DEBUG();
   
    
    
	return true ;
}

//ColorAdjustSprite* ColorAdjustSprite::create()
//{
//    ColorAdjustSprite *pSprite = new ColorAdjustSprite();
//    if (pSprite && pSprite->init())
//    {
//        pSprite->autorelease();
//        return pSprite;
//    }
//    CC_SAFE_DELETE(pSprite);
//    return NULL;
//}

ColorAdjustSprite* ColorAdjustSprite::create(const char* $pszFileName)
{
    ColorAdjustSprite *pobSprite = new ColorAdjustSprite();
    if (pobSprite && pobSprite->initWithFile($pszFileName))
    {
        pobSprite->autorelease();
        
        return pobSprite;
    }
    CC_SAFE_DELETE(pobSprite);
    return NULL;
}

ColorAdjustSprite* ColorAdjustSprite::create(const char* $pszFileName, const Rect& $rect)
{
    ColorAdjustSprite *pobSprite = new ColorAdjustSprite();
    if (pobSprite && pobSprite->initWithFile($pszFileName, $rect))
    {
        pobSprite->autorelease();
        
        return pobSprite;
    }
    CC_SAFE_DELETE(pobSprite);
    return NULL;
}


ColorAdjustSprite* ColorAdjustSprite::createWithSpriteFrame(SpriteFrame* $pSpriteFrame)
{
    ColorAdjustSprite *pobSprite = new ColorAdjustSprite();
    if ($pSpriteFrame && pobSprite)
    {
        pobSprite->initWithSpriteFrame($pSpriteFrame);
        pobSprite->autorelease();
        
        return pobSprite;
    }
    CC_SAFE_DELETE(pobSprite);
    return NULL;
}

ColorAdjustSprite* ColorAdjustSprite::createWithSpriteFrameName(const char* $pszSpriteFrameName)
{
    SpriteFrame *pFrame = SpriteFrameCache::getInstance()->getSpriteFrameByName($pszSpriteFrameName);
    
#if COCOS2D_DEBUG > 0
    char msg[256] = { 0 };
    sprintf(msg, "Invalid spriteFrameName: %s", $pszSpriteFrameName);
    CCASSERT(pFrame != NULL, msg);
#endif
    
    return createWithSpriteFrame(pFrame);
}


void ColorAdjustSprite::draw(Renderer *renderer, const Mat4 &transform, uint32_t flags)
{
    //----change shader
    //pass values for cocos2d-x build-in uniforms
    this->setShaderProgram(m_program_adjustColorHSL);
    CGLProgramWithUnifos*program=(CGLProgramWithUnifos*)this->getShaderProgram();
    program->use();
    program->setUniformsForBuiltins();
    //pass values for my own uniforms
    program->passUnifoValue1f("u_dH", m_dH);
    program->passUnifoValue1f("u_dS", m_dS);
    program->passUnifoValue1f("u_dL", m_dL);
    
    //draw quad
    {
//        _quadCommand.init(_globalZOrder, _texture->getName(), getGLProgramState(), _blendFunc, &_quad, 1, transform);
//        renderer->addCommand(&_quadCommand);
        _trianglesCommand.init(_globalZOrder, _texture->getName(), getGLProgramState(), _blendFunc, _polyInfo.triangles, transform, flags);
        renderer->addCommand(&_trianglesCommand);
    }
    
}