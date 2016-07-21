////
////  DNPParticleSystemFrameQuad.cpp
////  cocos2d_tests
////
////  Created by lovejia on 14-8-29.
////
////
//
//#include "DNPParticleSystemFrameQuad.h"
//#include "base/CCDirector.h"
//#include "platform/CCFileUtils.h"
//#include "base/CCNS.h"
//#include "2d/CCParticleBatchNode.h"
//#include "renderer/CCTextureAtlas.h"
//#include <map>
//
//DNPParticleSystemFrameQuad * DNPParticleSystemFrameQuad::create()
//{
//    DNPParticleSystemFrameQuad *particleSystemQuad = new DNPParticleSystemFrameQuad();
//    if (particleSystemQuad && particleSystemQuad->init())
//    {
//        particleSystemQuad->autorelease();
//        return particleSystemQuad;
//    }
//    CC_SAFE_DELETE(particleSystemQuad);
//    return nullptr;
//}
//
//DNPParticleSystemFrameQuad * DNPParticleSystemFrameQuad::create(const std::string& filename)
//{
//    DNPParticleSystemFrameQuad *ret = new DNPParticleSystemFrameQuad();
//    if (ret && ret->initWithFile(filename))
//    {
//        ret->autorelease();
//        return ret;
//    }
//    CC_SAFE_DELETE(ret);
//    return ret;
//}
//
//
//void DNPParticleSystemFrameQuad::spriteFrameWithFile(const std::string& plist, const std::string& textureFileName, float duration) {
//    auto frames = FileUtils::getInstance()->getValueMapFromFile(plist).at("frames").asValueMap();
//    std::map<std::string, ValueMap, std::less<std::string>> stdmap;
//    for(const auto& kvp : frames) {
//        stdmap[kvp.first] = kvp.second.asValueMap();
//    }
//    
//    for(const auto& kvp : stdmap) {
//        rects_.push_back(RectFromString(kvp.second.at("frame").asString()));
//    }
//    Rect pointRect = rects_.at(0);
//    Rect rect = Rect(
//                     pointRect.origin.x * CC_CONTENT_SCALE_FACTOR(),
//                     pointRect.origin.y * CC_CONTENT_SCALE_FACTOR(),
//                     pointRect.size.width * CC_CONTENT_SCALE_FACTOR(),
//                     pointRect.size.height * CC_CONTENT_SCALE_FACTOR()
//                     );
//    ParticleSystemQuad::initTexCoordsWithRect(rect);
//    this->dt = duration/rects_.size();
//}
//
//void DNPParticleSystemFrameQuad::initTexCoordsWithRect(int index, V3F_C4B_T2F_Quad *quad) {
//
//    Rect pointRect = rects_.at(index);
//
//    Rect rect = Rect(
//            pointRect.origin.x * CC_CONTENT_SCALE_FACTOR(),
//            pointRect.origin.y * CC_CONTENT_SCALE_FACTOR(),
//            pointRect.size.width * CC_CONTENT_SCALE_FACTOR(),
//            pointRect.size.height * CC_CONTENT_SCALE_FACTOR()
//                     );
//
//    GLfloat wide = (GLfloat) pointRect.size.width;
//    GLfloat high = (GLfloat) pointRect.size.height;
//
//    if (_texture)
//    {
//        wide = (GLfloat)_texture->getPixelsWide();
//        high = (GLfloat)_texture->getPixelsHigh();
//    }
//
//#if CC_FIX_ARTIFACTS_BY_STRECHING_TEXEL
//    GLfloat left = (rect.origin.x*2+1) / (wide*2);
//    GLfloat bottom = (rect.origin.y*2+1) / (high*2);
//    GLfloat right = left + (rect.size.width*2-2) / (wide*2);
//    GLfloat top = bottom + (rect.size.height*2-2) / (high*2);
//#else
//    GLfloat left = rect.origin.x / wide;
//    GLfloat bottom = rect.origin.y / high;
//    GLfloat right = left + rect.size.width / wide;
//    GLfloat top = bottom + rect.size.height / high;
//#endif // ! CC_FIX_ARTIFACTS_BY_STRECHING_TEXEL
//
//    // Important. Texture in cocos2d are inverted, so the Y component should be inverted
//    CC_SWAP( top, bottom, float);
//
//    // bottom-left vertex:
//    quad->bl.texCoords.u = left;
//    quad->bl.texCoords.v = bottom;
//    // bottom-right vertex:
//    quad->br.texCoords.u = right;
//    quad->br.texCoords.v = bottom;
//    // top-left vertex:
//    quad->tl.texCoords.u = left;
//    quad->tl.texCoords.v = top;
//    // top-right vertex:
//    quad->tr.texCoords.u = right;
//    quad->tr.texCoords.v = top;
//}
//
//
//void DNPParticleSystemFrameQuad::resetBlend() {
//    if (dnpBlendFunc.src != 0 || dnpBlendFunc.dst != 0) {
//        _blendFunc.src = dnpBlendFunc.src;
//        _blendFunc.dst = dnpBlendFunc.dst;
//    }
//}
//
//void DNPParticleSystemFrameQuad::updateQuadWithParticle(tParticle *particle, Vec2 const &newPosition) {
//    
//    if (rects_.size() <= 0) {
//        ParticleSystemQuad::updateQuadWithParticle(particle, newPosition);
//        return;
//    }
//    
//    auto counter = particleCounter.find(particle);
//    if(counter==particleCounter.end() || abs(particleCounter[particle].first-particle->timeToLive)>dt){
//        particleCounter[particle] = std::make_pair(particle->timeToLive - dt, 0);
//    }
//    
//    V3F_C4B_T2F_Quad *quad;
//    
//    if (_batchNode)
//    {
//        V3F_C4B_T2F_Quad *batchQuads = _batchNode->getTextureAtlas()->getQuads();
//        quad = &(batchQuads[_atlasIndex+particle->atlasIndex]);
//    }
//    else
//    {
//        quad = &(_quads[_particleIdx]);
//    }
//
//    if(particleCounter[particle].first>particle->timeToLive){
//        particleCounter[particle] = std::make_pair(particle->timeToLive - dt, particleCounter[particle].second+1);
//        initTexCoordsWithRect(particleCounter[particle].second++%rects_.size(), quad);
//    }
//
//    Color4B color = (_opacityModifyRGB)
//    ? Color4B( particle->color.r*particle->color.a*255, particle->color.g*particle->color.a*255, particle->color.b*particle->color.a*255, particle->color.a*255)
//    : Color4B( particle->color.r*255, particle->color.g*255, particle->color.b*255, particle->color.a*255);
//    
//    quad->bl.colors = color;
//    quad->br.colors = color;
//    quad->tl.colors = color;
//    quad->tr.colors = color;
//    
//    // vertices
//    GLfloat size_2 = particle->size/2;
//    if (particle->rotation)
//    {
//        GLfloat x1 = -size_2;
//        GLfloat y1 = -size_2;
//        
//        GLfloat x2 = size_2;
//        GLfloat y2 = size_2;
//        GLfloat x = newPosition.x;
//        GLfloat y = newPosition.y;
//        
//        GLfloat r = (GLfloat)-CC_DEGREES_TO_RADIANS(particle->rotation);
//        GLfloat cr = cosf(r);
//        GLfloat sr = sinf(r);
//        GLfloat ax = x1 * cr - y1 * sr + x;
//        GLfloat ay = x1 * sr + y1 * cr + y;
//        GLfloat bx = x2 * cr - y1 * sr + x;
//        GLfloat by = x2 * sr + y1 * cr + y;
//        GLfloat cx = x2 * cr - y2 * sr + x;
//        GLfloat cy = x2 * sr + y2 * cr + y;
//        GLfloat dx = x1 * cr - y2 * sr + x;
//        GLfloat dy = x1 * sr + y2 * cr + y;
//        
//        // bottom-left
//        quad->bl.vertices.x = ax;
//        quad->bl.vertices.y = ay;
//        
//        // bottom-right vertex:
//        quad->br.vertices.x = bx;
//        quad->br.vertices.y = by;
//        
//        // top-left vertex:
//        quad->tl.vertices.x = dx;
//        quad->tl.vertices.y = dy;
//        
//        // top-right vertex:
//        quad->tr.vertices.x = cx;
//        quad->tr.vertices.y = cy;
//    }
//    else
//    {
//        // bottom-left vertex:
//        quad->bl.vertices.x = newPosition.x - size_2;
//        quad->bl.vertices.y = newPosition.y - size_2;
//        
//        // bottom-right vertex:
//        quad->br.vertices.x = newPosition.x + size_2;
//        quad->br.vertices.y = newPosition.y - size_2;
//        
//        // top-left vertex:
//        quad->tl.vertices.x = newPosition.x - size_2;
//        quad->tl.vertices.y = newPosition.y + size_2;
//        
//        // top-right vertex:
//        quad->tr.vertices.x = newPosition.x + size_2;
//        quad->tr.vertices.y = newPosition.y + size_2;                
//    }
//}
