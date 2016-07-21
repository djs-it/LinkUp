--------------------------------------------------------------
-- This file was automatically generated by Cocos Studio.
-- Do not make changes to this file.
-- All changes will be lost.
--------------------------------------------------------------

local luaExtend = require "LuaExtend"

-- using for layout to decrease count of local variables
local layout = nil
local localLuaFile = nil
local innerCSD = nil
local innerProject = nil
local localFrame = nil

local Result = {}
------------------------------------------------------------
-- function call description
-- create function caller should provide a function to 
-- get a callback function in creating scene process.
-- the returned callback function will be registered to 
-- the callback event of the control.
-- the function provider is as below :
-- Callback callBackProvider(luaFileName, node, callbackName)
-- parameter description:
-- luaFileName  : a string, lua file name
-- node         : a Node, event source
-- callbackName : a string, callback function name
-- the return value is a callback function
------------------------------------------------------------
function Result.create(callBackProvider)

local result={}
setmetatable(result, luaExtend)

--Create Node
local Node=cc.Node:create()
Node:setName("Node")

--Create Panel_1
local Panel_1 = ccui.Layout:create()
Panel_1:ignoreContentAdaptWithSize(false)
Panel_1:setClippingEnabled(false)
Panel_1:setBackGroundColorType(1)
Panel_1:setBackGroundColor({r = 0, g = 0, b = 0})
Panel_1:setBackGroundColorOpacity(127)
Panel_1:setTouchEnabled(true);
Panel_1:setLayoutComponentEnabled(true)
Panel_1:setName("Panel_1")
Panel_1:setTag(2)
Panel_1:setCascadeColorEnabled(true)
Panel_1:setCascadeOpacityEnabled(true)
Panel_1:setAnchorPoint(0.5000, 0.5000)
layout = ccui.LayoutComponent:bindLayoutComponent(Panel_1)
layout:setPositionPercentXEnabled(true)
layout:setPositionPercentYEnabled(true)
layout:setSize({width = 1080.0000, height = 1707.0000})
layout:setLeftMargin(-540.0000)
layout:setRightMargin(-540.0000)
layout:setTopMargin(-853.5000)
layout:setBottomMargin(-853.5000)
Node:addChild(Panel_1)

--Create Panel_2
local Panel_2 = ccui.Layout:create()
Panel_2:ignoreContentAdaptWithSize(false)
Panel_2:setClippingEnabled(false)
Panel_2:setBackGroundColorType(1)
Panel_2:setBackGroundColor({r = 150, g = 200, b = 255})
Panel_2:setBackGroundColorOpacity(0)
Panel_2:setTouchEnabled(true);
Panel_2:setLayoutComponentEnabled(true)
Panel_2:setName("Panel_2")
Panel_2:setTag(3)
Panel_2:setCascadeColorEnabled(true)
Panel_2:setCascadeOpacityEnabled(true)
Panel_2:setAnchorPoint(0.5000, 0.5000)
Panel_2:setPosition(541.2960, 853.5000)
layout = ccui.LayoutComponent:bindLayoutComponent(Panel_2)
layout:setPositionPercentXEnabled(true)
layout:setPositionPercentYEnabled(true)
layout:setPositionPercentX(0.5012)
layout:setPositionPercentY(0.5000)
layout:setPercentWidth(0.8889)
layout:setPercentHeight(0.8436)
layout:setSize({width = 960.0000, height = 1440.0000})
layout:setLeftMargin(61.2960)
layout:setRightMargin(58.7040)
layout:setTopMargin(133.5000)
layout:setBottomMargin(133.5000)
Panel_1:addChild(Panel_2)

--Create Image_1
local Image_1 = ccui.ImageView:create()
Image_1:ignoreContentAdaptWithSize(false)
cc.SpriteFrameCache:getInstance():addSpriteFrames("Resource/atlas/B-common.plist")
Image_1:loadTexture("dialog-5-2.png",1)
Image_1:setScale9Enabled(true)
Image_1:setCapInsets({x = 100, y = 100, width = 23, height = 31})
Image_1:setLayoutComponentEnabled(true)
Image_1:setName("Image_1")
Image_1:setTag(4)
Image_1:setCascadeColorEnabled(true)
Image_1:setCascadeOpacityEnabled(true)
Image_1:setPosition(480.0000, 792.0000)
layout = ccui.LayoutComponent:bindLayoutComponent(Image_1)
layout:setPositionPercentXEnabled(true)
layout:setPositionPercentYEnabled(true)
layout:setPositionPercentX(0.5000)
layout:setPositionPercentY(0.5500)
layout:setPercentWidth(0.7469)
layout:setPercentHeight(0.6153)
layout:setSize({width = 717.0000, height = 886.0000})
layout:setLeftMargin(121.5000)
layout:setRightMargin(121.5000)
layout:setTopMargin(205.0000)
layout:setBottomMargin(349.0000)
Panel_2:addChild(Image_1)

--Create Sprite_11
cc.SpriteFrameCache:getInstance():addSpriteFrames("Resource/atlas/B-common.plist")
local Sprite_11 = cc.Sprite:createWithSpriteFrameName("title-yelow.png")
Sprite_11:setName("Sprite_11")
Sprite_11:setTag(30)
Sprite_11:setCascadeColorEnabled(true)
Sprite_11:setCascadeOpacityEnabled(true)
Sprite_11:setPosition(480.0000, 1223.1830)
layout = ccui.LayoutComponent:bindLayoutComponent(Sprite_11)
layout:setPositionPercentXEnabled(true)
layout:setPositionPercentX(0.5000)
layout:setPositionPercentY(0.8494)
layout:setPercentWidth(0.3938)
layout:setPercentHeight(0.0958)
layout:setSize({width = 378.0000, height = 138.0000})
layout:setLeftMargin(291.0000)
layout:setRightMargin(291.0000)
layout:setTopMargin(147.8165)
layout:setBottomMargin(1154.1830)
Sprite_11:setBlendFunc({src = 1, dst = 771})
Panel_2:addChild(Sprite_11)

--Create overtile
local overtile = ccui.Text:create()
overtile:ignoreContentAdaptWithSize(true)
overtile:setTextAreaSize({width = 0, height = 0})
overtile:setFontName("Resource/font/FZY4K.ttf")
overtile:setFontSize(48)
overtile:setString([[第5关]])
overtile:enableOutline({r = 103, g = 65, b = 78, a = 255}, 5)
overtile:setLayoutComponentEnabled(true)
overtile:setName("overtile")
overtile:setTag(31)
overtile:setCascadeColorEnabled(true)
overtile:setCascadeOpacityEnabled(true)
overtile:setPosition(189.0000, 75.9000)
layout = ccui.LayoutComponent:bindLayoutComponent(overtile)
layout:setPositionPercentXEnabled(true)
layout:setPositionPercentYEnabled(true)
layout:setPositionPercentX(0.5000)
layout:setPositionPercentY(0.5500)
layout:setPercentWidth(0.3413)
layout:setPercentHeight(0.4928)
layout:setSize({width = 129.0000, height = 68.0000})
layout:setLeftMargin(124.5000)
layout:setRightMargin(124.5000)
layout:setTopMargin(28.1000)
layout:setBottomMargin(41.9000)
Sprite_11:addChild(overtile)

--Create Panel_9
local Panel_9 = ccui.Layout:create()
Panel_9:ignoreContentAdaptWithSize(false)
Panel_9:setClippingEnabled(false)
Panel_9:setBackGroundColorType(1)
Panel_9:setBackGroundColor({r = 150, g = 200, b = 255})
Panel_9:setBackGroundColorOpacity(0)
Panel_9:setTouchEnabled(true);
Panel_9:setLayoutComponentEnabled(true)
Panel_9:setName("Panel_9")
Panel_9:setTag(32)
Panel_9:setCascadeColorEnabled(true)
Panel_9:setCascadeOpacityEnabled(true)
Panel_9:setAnchorPoint(0.5000, 0.5000)
Panel_9:setPosition(480.0000, 1044.0000)
layout = ccui.LayoutComponent:bindLayoutComponent(Panel_9)
layout:setPositionPercentXEnabled(true)
layout:setPositionPercentYEnabled(true)
layout:setPositionPercentX(0.5000)
layout:setPositionPercentY(0.7250)
layout:setPercentWidth(0.4167)
layout:setPercentHeight(0.1389)
layout:setSize({width = 400.0000, height = 200.0000})
layout:setLeftMargin(280.0000)
layout:setRightMargin(280.0000)
layout:setTopMargin(296.0000)
layout:setBottomMargin(944.0000)
Panel_2:addChild(Panel_9)

--Create Sprite_12_0
cc.SpriteFrameCache:getInstance():addSpriteFrames("Resource/atlas/B-common.plist")
local Sprite_12_0 = cc.Sprite:createWithSpriteFrameName("star-pink.png")
Sprite_12_0:setName("Sprite_12_0")
Sprite_12_0:setTag(37)
Sprite_12_0:setCascadeColorEnabled(true)
Sprite_12_0:setCascadeOpacityEnabled(true)
Sprite_12_0:setPosition(400.0000, 70.0000)
Sprite_12_0:setRotationSkewX(20.0000)
Sprite_12_0:setRotationSkewY(20.0000)
layout = ccui.LayoutComponent:bindLayoutComponent(Sprite_12_0)
layout:setPositionPercentXEnabled(true)
layout:setPositionPercentYEnabled(true)
layout:setPositionPercentX(1.0000)
layout:setPositionPercentY(0.3500)
layout:setPercentWidth(0.2975)
layout:setPercentHeight(0.5800)
layout:setSize({width = 119.0000, height = 116.0000})
layout:setLeftMargin(340.5000)
layout:setRightMargin(-59.5000)
layout:setTopMargin(72.0000)
layout:setBottomMargin(12.0000)
Sprite_12_0:setBlendFunc({src = 1, dst = 771})
Panel_9:addChild(Sprite_12_0)

--Create star1
local star1 = ccui.Layout:create()
star1:ignoreContentAdaptWithSize(false)
star1:setClippingEnabled(false)
star1:setBackGroundColorType(1)
star1:setBackGroundColor({r = 150, g = 200, b = 255})
star1:setBackGroundColorOpacity(102)
star1:setTouchEnabled(true);
star1:setLayoutComponentEnabled(true)
star1:setName("star1")
star1:setTag(38)
star1:setCascadeColorEnabled(true)
star1:setCascadeOpacityEnabled(true)
star1:setAnchorPoint(0.5000, 0.5000)
star1:setPosition(59.5000, 58.0000)
layout = ccui.LayoutComponent:bindLayoutComponent(star1)
layout:setPositionPercentXEnabled(true)
layout:setPositionPercentYEnabled(true)
layout:setPositionPercentX(0.5000)
layout:setPositionPercentY(0.5000)
layout:setLeftMargin(59.5000)
layout:setRightMargin(59.5000)
layout:setTopMargin(58.0000)
layout:setBottomMargin(58.0000)
Sprite_12_0:addChild(star1)

--Create light2
cc.SpriteFrameCache:getInstance():addSpriteFrames("Resource/atlas/B-common.plist")
local light2 = cc.Sprite:createWithSpriteFrameName("all-light.png")
light2:setName("light2")
light2:setTag(39)
light2:setCascadeColorEnabled(true)
light2:setCascadeOpacityEnabled(true)
light2:setScaleX(0.6000)
light2:setScaleY(0.6000)
light2:setColor({r = 255, g = 211, b = 68})
layout = ccui.LayoutComponent:bindLayoutComponent(light2)
layout:setPositionPercentXEnabled(true)
layout:setPositionPercentYEnabled(true)
layout:setSize({width = 337.0000, height = 337.0000})
layout:setLeftMargin(-168.5000)
layout:setRightMargin(-168.5000)
layout:setTopMargin(-168.5000)
layout:setBottomMargin(-168.5000)
light2:setBlendFunc({src = 1, dst = 771})
star1:addChild(light2)

--Create Sprite
cc.SpriteFrameCache:getInstance():addSpriteFrames("Resource/atlas/B-common.plist")
local Sprite = cc.Sprite:createWithSpriteFrameName("star-yellow.png")
Sprite:setName("Sprite")
Sprite:setTag(40)
Sprite:setCascadeColorEnabled(true)
Sprite:setCascadeOpacityEnabled(true)
layout = ccui.LayoutComponent:bindLayoutComponent(Sprite)
layout:setPositionPercentXEnabled(true)
layout:setPositionPercentYEnabled(true)
layout:setSize({width = 120.0000, height = 115.0000})
layout:setLeftMargin(-60.0000)
layout:setRightMargin(-60.0000)
layout:setTopMargin(-57.5000)
layout:setBottomMargin(-57.5000)
Sprite:setBlendFunc({src = 1, dst = 771})
star1:addChild(Sprite)

--Create Sprite_12
cc.SpriteFrameCache:getInstance():addSpriteFrames("Resource/atlas/B-common.plist")
local Sprite_12 = cc.Sprite:createWithSpriteFrameName("star-pink.png")
Sprite_12:setName("Sprite_12")
Sprite_12:setTag(33)
Sprite_12:setCascadeColorEnabled(true)
Sprite_12:setCascadeOpacityEnabled(true)
Sprite_12:setPosition(200.0000, 100.0000)
layout = ccui.LayoutComponent:bindLayoutComponent(Sprite_12)
layout:setPositionPercentXEnabled(true)
layout:setPositionPercentYEnabled(true)
layout:setPositionPercentX(0.5000)
layout:setPositionPercentY(0.5000)
layout:setPercentWidth(0.2975)
layout:setPercentHeight(0.5800)
layout:setSize({width = 119.0000, height = 116.0000})
layout:setLeftMargin(140.5000)
layout:setRightMargin(140.5000)
layout:setTopMargin(42.0000)
layout:setBottomMargin(42.0000)
Sprite_12:setBlendFunc({src = 1, dst = 771})
Panel_9:addChild(Sprite_12)

--Create star2
local star2 = ccui.Layout:create()
star2:ignoreContentAdaptWithSize(false)
star2:setClippingEnabled(false)
star2:setBackGroundColorType(1)
star2:setBackGroundColor({r = 150, g = 200, b = 255})
star2:setBackGroundColorOpacity(102)
star2:setTouchEnabled(true);
star2:setLayoutComponentEnabled(true)
star2:setName("star2")
star2:setTag(36)
star2:setCascadeColorEnabled(true)
star2:setCascadeOpacityEnabled(true)
star2:setAnchorPoint(0.5000, 0.5000)
star2:setPosition(59.5000, 58.0000)
layout = ccui.LayoutComponent:bindLayoutComponent(star2)
layout:setPositionPercentXEnabled(true)
layout:setPositionPercentYEnabled(true)
layout:setPositionPercentX(0.5000)
layout:setPositionPercentY(0.5000)
layout:setLeftMargin(59.5000)
layout:setRightMargin(59.5000)
layout:setTopMargin(58.0000)
layout:setBottomMargin(58.0000)
Sprite_12:addChild(star2)

--Create light2
cc.SpriteFrameCache:getInstance():addSpriteFrames("Resource/atlas/B-common.plist")
local light2 = cc.Sprite:createWithSpriteFrameName("all-light.png")
light2:setName("light2")
light2:setTag(35)
light2:setCascadeColorEnabled(true)
light2:setCascadeOpacityEnabled(true)
light2:setScaleX(0.6000)
light2:setScaleY(0.6000)
light2:setColor({r = 255, g = 211, b = 68})
layout = ccui.LayoutComponent:bindLayoutComponent(light2)
layout:setPositionPercentXEnabled(true)
layout:setPositionPercentYEnabled(true)
layout:setSize({width = 337.0000, height = 337.0000})
layout:setLeftMargin(-168.5000)
layout:setRightMargin(-168.5000)
layout:setTopMargin(-168.5000)
layout:setBottomMargin(-168.5000)
light2:setBlendFunc({src = 1, dst = 771})
star2:addChild(light2)

--Create Sprite
cc.SpriteFrameCache:getInstance():addSpriteFrames("Resource/atlas/B-common.plist")
local Sprite = cc.Sprite:createWithSpriteFrameName("star-yellow.png")
Sprite:setName("Sprite")
Sprite:setTag(34)
Sprite:setCascadeColorEnabled(true)
Sprite:setCascadeOpacityEnabled(true)
layout = ccui.LayoutComponent:bindLayoutComponent(Sprite)
layout:setPositionPercentXEnabled(true)
layout:setPositionPercentYEnabled(true)
layout:setSize({width = 120.0000, height = 115.0000})
layout:setLeftMargin(-60.0000)
layout:setRightMargin(-60.0000)
layout:setTopMargin(-57.5000)
layout:setBottomMargin(-57.5000)
Sprite:setBlendFunc({src = 1, dst = 771})
star2:addChild(Sprite)

--Create Sprite_12_1
cc.SpriteFrameCache:getInstance():addSpriteFrames("Resource/atlas/B-common.plist")
local Sprite_12_1 = cc.Sprite:createWithSpriteFrameName("star-pink.png")
Sprite_12_1:setName("Sprite_12_1")
Sprite_12_1:setTag(41)
Sprite_12_1:setCascadeColorEnabled(true)
Sprite_12_1:setCascadeOpacityEnabled(true)
Sprite_12_1:setPosition(0.0000, 70.0000)
Sprite_12_1:setRotationSkewX(-20.0000)
Sprite_12_1:setRotationSkewY(-20.0000)
layout = ccui.LayoutComponent:bindLayoutComponent(Sprite_12_1)
layout:setPositionPercentXEnabled(true)
layout:setPositionPercentYEnabled(true)
layout:setPositionPercentY(0.3500)
layout:setPercentWidth(0.2975)
layout:setPercentHeight(0.5800)
layout:setSize({width = 119.0000, height = 116.0000})
layout:setLeftMargin(-59.5000)
layout:setRightMargin(340.5000)
layout:setTopMargin(72.0000)
layout:setBottomMargin(12.0000)
Sprite_12_1:setBlendFunc({src = 1, dst = 771})
Panel_9:addChild(Sprite_12_1)

--Create star3
local star3 = ccui.Layout:create()
star3:ignoreContentAdaptWithSize(false)
star3:setClippingEnabled(false)
star3:setBackGroundColorType(1)
star3:setBackGroundColor({r = 150, g = 200, b = 255})
star3:setBackGroundColorOpacity(102)
star3:setTouchEnabled(true);
star3:setLayoutComponentEnabled(true)
star3:setName("star3")
star3:setTag(42)
star3:setCascadeColorEnabled(true)
star3:setCascadeOpacityEnabled(true)
star3:setAnchorPoint(0.5000, 0.5000)
star3:setPosition(59.5000, 58.0000)
layout = ccui.LayoutComponent:bindLayoutComponent(star3)
layout:setPositionPercentXEnabled(true)
layout:setPositionPercentYEnabled(true)
layout:setPositionPercentX(0.5000)
layout:setPositionPercentY(0.5000)
layout:setLeftMargin(59.5000)
layout:setRightMargin(59.5000)
layout:setTopMargin(58.0000)
layout:setBottomMargin(58.0000)
Sprite_12_1:addChild(star3)

--Create light2
cc.SpriteFrameCache:getInstance():addSpriteFrames("Resource/atlas/B-common.plist")
local light2 = cc.Sprite:createWithSpriteFrameName("all-light.png")
light2:setName("light2")
light2:setTag(43)
light2:setCascadeColorEnabled(true)
light2:setCascadeOpacityEnabled(true)
light2:setScaleX(0.6000)
light2:setScaleY(0.6000)
light2:setColor({r = 255, g = 211, b = 68})
layout = ccui.LayoutComponent:bindLayoutComponent(light2)
layout:setPositionPercentXEnabled(true)
layout:setPositionPercentYEnabled(true)
layout:setSize({width = 337.0000, height = 337.0000})
layout:setLeftMargin(-168.5000)
layout:setRightMargin(-168.5000)
layout:setTopMargin(-168.5000)
layout:setBottomMargin(-168.5000)
light2:setBlendFunc({src = 1, dst = 771})
star3:addChild(light2)

--Create Sprite
cc.SpriteFrameCache:getInstance():addSpriteFrames("Resource/atlas/B-common.plist")
local Sprite = cc.Sprite:createWithSpriteFrameName("star-yellow.png")
Sprite:setName("Sprite")
Sprite:setTag(44)
Sprite:setCascadeColorEnabled(true)
Sprite:setCascadeOpacityEnabled(true)
layout = ccui.LayoutComponent:bindLayoutComponent(Sprite)
layout:setPositionPercentXEnabled(true)
layout:setPositionPercentYEnabled(true)
layout:setSize({width = 120.0000, height = 115.0000})
layout:setLeftMargin(-60.0000)
layout:setRightMargin(-60.0000)
layout:setTopMargin(-57.5000)
layout:setBottomMargin(-57.5000)
Sprite:setBlendFunc({src = 1, dst = 771})
star3:addChild(Sprite)

--Create usetime
local usetime = ccui.Text:create()
usetime:ignoreContentAdaptWithSize(true)
usetime:setTextAreaSize({width = 0, height = 0})
usetime:setFontName("Resource/font/FZY4K.ttf")
usetime:setFontSize(36)
usetime:setString([[本关用时：01:32]])
usetime:setLayoutComponentEnabled(true)
usetime:setName("usetime")
usetime:setTag(45)
usetime:setCascadeColorEnabled(true)
usetime:setCascadeOpacityEnabled(true)
usetime:setPosition(480.0000, 894.8160)
usetime:setTextColor({r = 103, g = 65, b = 78})
layout = ccui.LayoutComponent:bindLayoutComponent(usetime)
layout:setPositionPercentXEnabled(true)
layout:setPositionPercentYEnabled(true)
layout:setPositionPercentX(0.5000)
layout:setPositionPercentY(0.6214)
layout:setPercentWidth(0.2781)
layout:setPercentHeight(0.0299)
layout:setSize({width = 267.0000, height = 43.0000})
layout:setLeftMargin(346.5000)
layout:setRightMargin(346.5000)
layout:setTopMargin(523.6840)
layout:setBottomMargin(873.3160)
Panel_2:addChild(usetime)

--Create Button_3
local Button_3 = ccui.Button:create()
Button_3:ignoreContentAdaptWithSize(false)
cc.SpriteFrameCache:getInstance():addSpriteFrames("Resource/atlas/B-common.plist")
Button_3:loadTextureNormal("btn-09.png",1)
cc.SpriteFrameCache:getInstance():addSpriteFrames("Resource/atlas/B-common.plist")
Button_3:loadTexturePressed("btn-09.png",1)
Button_3:loadTextureDisabled("Default/Button_Disable.png",0)
Button_3:setTitleFontSize(14)
Button_3:setTitleColor({r = 65, g = 65, b = 70})
Button_3:setScale9Enabled(true)
Button_3:setCapInsets({x = 15, y = 11, width = 229, height = 101})
Button_3:setLayoutComponentEnabled(true)
Button_3:setName("Button_3")
Button_3:setTag(46)
Button_3:setCascadeColorEnabled(true)
Button_3:setCascadeOpacityEnabled(true)
Button_3:setPosition(480.0000, 465.5486)
Button_3.UserData = {}
Button_3.UserData[1] = [==========[sb]==========]
if callBackProvider~=nil then
      Button_3:addClickEventListener(callBackProvider("gaming_level_over.lua", Button_3, "btnBack"))
end
layout = ccui.LayoutComponent:bindLayoutComponent(Button_3)
layout:setPositionPercentXEnabled(true)
layout:setPositionPercentX(0.5000)
layout:setPositionPercentY(0.3233)
layout:setPercentWidth(0.2698)
layout:setPercentHeight(0.0854)
layout:setSize({width = 259.0000, height = 123.0000})
layout:setLeftMargin(350.5000)
layout:setRightMargin(350.5000)
layout:setTopMargin(912.9514)
layout:setBottomMargin(404.0486)
Panel_2:addChild(Button_3)

--Create Text_11
local Text_11 = ccui.Text:create()
Text_11:ignoreContentAdaptWithSize(true)
Text_11:setTextAreaSize({width = 0, height = 0})
Text_11:setFontName("Resource/font/FZY4K.ttf")
Text_11:setFontSize(48)
Text_11:setString([[返回]])
Text_11:setLayoutComponentEnabled(true)
Text_11:setName("Text_11")
Text_11:setTag(187)
Text_11:setCascadeColorEnabled(true)
Text_11:setCascadeOpacityEnabled(true)
Text_11:setPosition(129.5000, 67.6500)
Text_11:setTextColor({r = 103, g = 65, b = 78})
layout = ccui.LayoutComponent:bindLayoutComponent(Text_11)
layout:setPositionPercentXEnabled(true)
layout:setPositionPercentYEnabled(true)
layout:setPositionPercentX(0.5000)
layout:setPositionPercentY(0.5500)
layout:setPercentWidth(0.3745)
layout:setPercentHeight(0.4715)
layout:setSize({width = 97.0000, height = 58.0000})
layout:setLeftMargin(81.0000)
layout:setRightMargin(81.0000)
layout:setTopMargin(26.3500)
layout:setBottomMargin(38.6500)
Button_3:addChild(Text_11)

--Create Panel_19
local Panel_19 = ccui.Layout:create()
Panel_19:ignoreContentAdaptWithSize(false)
Panel_19:setClippingEnabled(false)
Panel_19:setBackGroundColorType(1)
Panel_19:setBackGroundColor({r = 150, g = 200, b = 255})
Panel_19:setBackGroundColorOpacity(0)
Panel_19:setTouchEnabled(true);
Panel_19:setLayoutComponentEnabled(true)
Panel_19:setName("Panel_19")
Panel_19:setTag(188)
Panel_19:setCascadeColorEnabled(true)
Panel_19:setCascadeOpacityEnabled(true)
Panel_19:setAnchorPoint(0.5000, 0.5000)
Panel_19:setPosition(480.0000, 720.0000)
layout = ccui.LayoutComponent:bindLayoutComponent(Panel_19)
layout:setPositionPercentXEnabled(true)
layout:setPositionPercentYEnabled(true)
layout:setPositionPercentX(0.5000)
layout:setPositionPercentY(0.5000)
layout:setPercentWidth(0.6250)
layout:setPercentHeight(0.2083)
layout:setSize({width = 600.0000, height = 300.0000})
layout:setLeftMargin(180.0000)
layout:setRightMargin(180.0000)
layout:setTopMargin(570.0000)
layout:setBottomMargin(570.0000)
Panel_2:addChild(Panel_19)

--Create Image_7
local Image_7 = ccui.ImageView:create()
Image_7:ignoreContentAdaptWithSize(false)
cc.SpriteFrameCache:getInstance():addSpriteFrames("Resource/atlas/B-common.plist")
Image_7:loadTexture("dialog-1-3.png",1)
Image_7:setScale9Enabled(true)
Image_7:setCapInsets({x = 49, y = 49, width = 5, height = 5})
Image_7:setLayoutComponentEnabled(true)
Image_7:setName("Image_7")
Image_7:setTag(189)
Image_7:setCascadeColorEnabled(true)
Image_7:setCascadeOpacityEnabled(true)
Image_7:setPosition(300.0000, 134.7504)
layout = ccui.LayoutComponent:bindLayoutComponent(Image_7)
layout:setPositionPercentXEnabled(true)
layout:setPositionPercentX(0.5000)
layout:setPositionPercentY(0.4492)
layout:setPercentWidth(1.0000)
layout:setPercentHeight(1.0000)
layout:setSize({width = 600.0000, height = 300.0000})
layout:setTopMargin(15.2496)
layout:setBottomMargin(-15.2496)
Panel_19:addChild(Image_7)

--Create Panel_20
local Panel_20 = ccui.Layout:create()
Panel_20:ignoreContentAdaptWithSize(false)
Panel_20:setClippingEnabled(false)
Panel_20:setBackGroundColorType(1)
Panel_20:setBackGroundColor({r = 150, g = 200, b = 255})
Panel_20:setBackGroundColorOpacity(0)
Panel_20:setTouchEnabled(true);
Panel_20:setLayoutComponentEnabled(true)
Panel_20:setName("Panel_20")
Panel_20:setTag(192)
Panel_20:setCascadeColorEnabled(true)
Panel_20:setCascadeOpacityEnabled(true)
Panel_20:setAnchorPoint(0.5000, 0.5000)
Panel_20:setPosition(300.0000, 211.6800)
layout = ccui.LayoutComponent:bindLayoutComponent(Panel_20)
layout:setPositionPercentXEnabled(true)
layout:setPositionPercentYEnabled(true)
layout:setPositionPercentX(0.5000)
layout:setPositionPercentY(0.7056)
layout:setPercentWidth(1.0000)
layout:setPercentHeight(0.3333)
layout:setSize({width = 600.0000, height = 100.0000})
layout:setTopMargin(38.3200)
layout:setBottomMargin(161.6800)
Panel_19:addChild(Panel_20)

--Create Sprite_29
cc.SpriteFrameCache:getInstance():addSpriteFrames("Resource/atlas/B-common.plist")
local Sprite_29 = cc.Sprite:createWithSpriteFrameName("star-yellow.png")
Sprite_29:setName("Sprite_29")
Sprite_29:setTag(193)
Sprite_29:setCascadeColorEnabled(true)
Sprite_29:setCascadeOpacityEnabled(true)
Sprite_29:setPosition(100.0000, 50.0000)
Sprite_29:setScaleX(0.5500)
Sprite_29:setScaleY(0.5500)
layout = ccui.LayoutComponent:bindLayoutComponent(Sprite_29)
layout:setPositionPercentYEnabled(true)
layout:setPositionPercentX(0.1667)
layout:setPositionPercentY(0.5000)
layout:setPercentWidth(0.2000)
layout:setPercentHeight(1.1500)
layout:setSize({width = 120.0000, height = 115.0000})
layout:setLeftMargin(40.0000)
layout:setRightMargin(440.0000)
layout:setTopMargin(-7.5000)
layout:setBottomMargin(-7.5000)
Sprite_29:setBlendFunc({src = 1, dst = 771})
Panel_20:addChild(Sprite_29)

--Create Sprite_29_0
cc.SpriteFrameCache:getInstance():addSpriteFrames("Resource/atlas/B-common.plist")
local Sprite_29_0 = cc.Sprite:createWithSpriteFrameName("star-pink.png")
Sprite_29_0:setName("Sprite_29_0")
Sprite_29_0:setTag(194)
Sprite_29_0:setCascadeColorEnabled(true)
Sprite_29_0:setCascadeOpacityEnabled(true)
Sprite_29_0:setPosition(175.0001, 50.0000)
Sprite_29_0:setScaleX(0.5500)
Sprite_29_0:setScaleY(0.5500)
layout = ccui.LayoutComponent:bindLayoutComponent(Sprite_29_0)
layout:setPositionPercentYEnabled(true)
layout:setPositionPercentX(0.2917)
layout:setPositionPercentY(0.5000)
layout:setPercentWidth(0.1983)
layout:setPercentHeight(1.1600)
layout:setSize({width = 119.0000, height = 116.0000})
layout:setLeftMargin(115.5001)
layout:setRightMargin(365.4999)
layout:setTopMargin(-8.0000)
layout:setBottomMargin(-8.0000)
Sprite_29_0:setBlendFunc({src = 1, dst = 771})
Panel_20:addChild(Sprite_29_0)

--Create Sprite_29_1
cc.SpriteFrameCache:getInstance():addSpriteFrames("Resource/atlas/B-common.plist")
local Sprite_29_1 = cc.Sprite:createWithSpriteFrameName("star-pink.png")
Sprite_29_1:setName("Sprite_29_1")
Sprite_29_1:setTag(195)
Sprite_29_1:setCascadeColorEnabled(true)
Sprite_29_1:setCascadeOpacityEnabled(true)
Sprite_29_1:setPosition(251.6674, 50.0000)
Sprite_29_1:setScaleX(0.5500)
Sprite_29_1:setScaleY(0.5500)
layout = ccui.LayoutComponent:bindLayoutComponent(Sprite_29_1)
layout:setPositionPercentYEnabled(true)
layout:setPositionPercentX(0.4194)
layout:setPositionPercentY(0.5000)
layout:setPercentWidth(0.1983)
layout:setPercentHeight(1.1600)
layout:setSize({width = 119.0000, height = 116.0000})
layout:setLeftMargin(192.1674)
layout:setRightMargin(288.8326)
layout:setTopMargin(-8.0000)
layout:setBottomMargin(-8.0000)
Sprite_29_1:setBlendFunc({src = 1, dst = 771})
Panel_20:addChild(Sprite_29_1)

--Create Text_12
local Text_12 = ccui.Text:create()
Text_12:ignoreContentAdaptWithSize(true)
Text_12:setTextAreaSize({width = 0, height = 0})
Text_12:setFontName("Resource/font/FZY4K.ttf")
Text_12:setFontSize(36)
Text_12:setString([[＋100经验值]])
Text_12:setLayoutComponentEnabled(true)
Text_12:setName("Text_12")
Text_12:setTag(196)
Text_12:setCascadeColorEnabled(true)
Text_12:setCascadeOpacityEnabled(true)
Text_12:setAnchorPoint(0.0000, 0.5000)
Text_12:setPosition(312.5000, 50.0000)
Text_12:setTextColor({r = 255, g = 110, b = 165})
layout = ccui.LayoutComponent:bindLayoutComponent(Text_12)
layout:setPositionPercentYEnabled(true)
layout:setPositionPercentX(0.5208)
layout:setPositionPercentY(0.5000)
layout:setPercentWidth(0.3350)
layout:setPercentHeight(0.4300)
layout:setSize({width = 201.0000, height = 43.0000})
layout:setLeftMargin(312.5000)
layout:setRightMargin(86.5000)
layout:setTopMargin(28.5000)
layout:setBottomMargin(28.5000)
Panel_20:addChild(Text_12)

--Create Panel_20_0
local Panel_20_0 = ccui.Layout:create()
Panel_20_0:ignoreContentAdaptWithSize(false)
Panel_20_0:setClippingEnabled(false)
Panel_20_0:setBackGroundColorType(1)
Panel_20_0:setBackGroundColor({r = 150, g = 200, b = 255})
Panel_20_0:setBackGroundColorOpacity(0)
Panel_20_0:setTouchEnabled(true);
Panel_20_0:setLayoutComponentEnabled(true)
Panel_20_0:setName("Panel_20_0")
Panel_20_0:setTag(242)
Panel_20_0:setCascadeColorEnabled(true)
Panel_20_0:setCascadeOpacityEnabled(true)
Panel_20_0:setAnchorPoint(0.5000, 0.5000)
Panel_20_0:setPosition(300.0000, 134.1600)
layout = ccui.LayoutComponent:bindLayoutComponent(Panel_20_0)
layout:setPositionPercentXEnabled(true)
layout:setPositionPercentYEnabled(true)
layout:setPositionPercentX(0.5000)
layout:setPositionPercentY(0.4472)
layout:setPercentWidth(1.0000)
layout:setPercentHeight(0.3333)
layout:setSize({width = 600.0000, height = 100.0000})
layout:setTopMargin(115.8400)
layout:setBottomMargin(84.1600)
Panel_19:addChild(Panel_20_0)

--Create Sprite_29
cc.SpriteFrameCache:getInstance():addSpriteFrames("Resource/atlas/B-common.plist")
local Sprite_29 = cc.Sprite:createWithSpriteFrameName("star-yellow.png")
Sprite_29:setName("Sprite_29")
Sprite_29:setTag(243)
Sprite_29:setCascadeColorEnabled(true)
Sprite_29:setCascadeOpacityEnabled(true)
Sprite_29:setPosition(100.0000, 50.0000)
Sprite_29:setScaleX(0.5500)
Sprite_29:setScaleY(0.5500)
layout = ccui.LayoutComponent:bindLayoutComponent(Sprite_29)
layout:setPositionPercentYEnabled(true)
layout:setPositionPercentX(0.1667)
layout:setPositionPercentY(0.5000)
layout:setPercentWidth(0.2000)
layout:setPercentHeight(1.1500)
layout:setSize({width = 120.0000, height = 115.0000})
layout:setLeftMargin(40.0000)
layout:setRightMargin(440.0000)
layout:setTopMargin(-7.5000)
layout:setBottomMargin(-7.5000)
Sprite_29:setBlendFunc({src = 1, dst = 771})
Panel_20_0:addChild(Sprite_29)

--Create Sprite_29_0
cc.SpriteFrameCache:getInstance():addSpriteFrames("Resource/atlas/B-common.plist")
local Sprite_29_0 = cc.Sprite:createWithSpriteFrameName("star-yellow.png")
Sprite_29_0:setName("Sprite_29_0")
Sprite_29_0:setTag(244)
Sprite_29_0:setCascadeColorEnabled(true)
Sprite_29_0:setCascadeOpacityEnabled(true)
Sprite_29_0:setPosition(175.0001, 50.0000)
Sprite_29_0:setScaleX(0.5500)
Sprite_29_0:setScaleY(0.5500)
layout = ccui.LayoutComponent:bindLayoutComponent(Sprite_29_0)
layout:setPositionPercentYEnabled(true)
layout:setPositionPercentX(0.2917)
layout:setPositionPercentY(0.5000)
layout:setPercentWidth(0.1983)
layout:setPercentHeight(1.1600)
layout:setSize({width = 120.0000, height = 115.0000})
layout:setLeftMargin(115.5001)
layout:setRightMargin(365.4999)
layout:setTopMargin(-8.0000)
layout:setBottomMargin(-8.0000)
Sprite_29_0:setBlendFunc({src = 1, dst = 771})
Panel_20_0:addChild(Sprite_29_0)

--Create Sprite_29_1
cc.SpriteFrameCache:getInstance():addSpriteFrames("Resource/atlas/B-common.plist")
local Sprite_29_1 = cc.Sprite:createWithSpriteFrameName("star-pink.png")
Sprite_29_1:setName("Sprite_29_1")
Sprite_29_1:setTag(245)
Sprite_29_1:setCascadeColorEnabled(true)
Sprite_29_1:setCascadeOpacityEnabled(true)
Sprite_29_1:setPosition(251.6674, 50.0000)
Sprite_29_1:setScaleX(0.5500)
Sprite_29_1:setScaleY(0.5500)
layout = ccui.LayoutComponent:bindLayoutComponent(Sprite_29_1)
layout:setPositionPercentYEnabled(true)
layout:setPositionPercentX(0.4194)
layout:setPositionPercentY(0.5000)
layout:setPercentWidth(0.1983)
layout:setPercentHeight(1.1600)
layout:setSize({width = 119.0000, height = 116.0000})
layout:setLeftMargin(192.1674)
layout:setRightMargin(288.8326)
layout:setTopMargin(-8.0000)
layout:setBottomMargin(-8.0000)
Sprite_29_1:setBlendFunc({src = 1, dst = 771})
Panel_20_0:addChild(Sprite_29_1)

--Create Text_12
local Text_12 = ccui.Text:create()
Text_12:ignoreContentAdaptWithSize(true)
Text_12:setTextAreaSize({width = 0, height = 0})
Text_12:setFontName("Resource/font/FZY4K.ttf")
Text_12:setFontSize(36)
Text_12:setString([[＋100]])
Text_12:setLayoutComponentEnabled(true)
Text_12:setName("Text_12")
Text_12:setTag(246)
Text_12:setCascadeColorEnabled(true)
Text_12:setCascadeOpacityEnabled(true)
Text_12:setAnchorPoint(0.0000, 0.5000)
Text_12:setPosition(312.5000, 50.0000)
Text_12:setTextColor({r = 255, g = 110, b = 165})
layout = ccui.LayoutComponent:bindLayoutComponent(Text_12)
layout:setPositionPercentYEnabled(true)
layout:setPositionPercentX(0.5208)
layout:setPositionPercentY(0.5000)
layout:setPercentWidth(0.1550)
layout:setPercentHeight(0.4300)
layout:setSize({width = 93.0000, height = 43.0000})
layout:setLeftMargin(312.5000)
layout:setRightMargin(194.5000)
layout:setTopMargin(28.5000)
layout:setBottomMargin(28.5000)
Panel_20_0:addChild(Text_12)

--Create Panel_20_0_0
local Panel_20_0_0 = ccui.Layout:create()
Panel_20_0_0:ignoreContentAdaptWithSize(false)
Panel_20_0_0:setClippingEnabled(false)
Panel_20_0_0:setBackGroundColorType(1)
Panel_20_0_0:setBackGroundColor({r = 150, g = 200, b = 255})
Panel_20_0_0:setBackGroundColorOpacity(0)
Panel_20_0_0:setTouchEnabled(true);
Panel_20_0_0:setLayoutComponentEnabled(true)
Panel_20_0_0:setName("Panel_20_0_0")
Panel_20_0_0:setTag(247)
Panel_20_0_0:setCascadeColorEnabled(true)
Panel_20_0_0:setCascadeOpacityEnabled(true)
Panel_20_0_0:setAnchorPoint(0.5000, 0.5000)
Panel_20_0_0:setPosition(300.0000, 55.4100)
layout = ccui.LayoutComponent:bindLayoutComponent(Panel_20_0_0)
layout:setPositionPercentXEnabled(true)
layout:setPositionPercentYEnabled(true)
layout:setPositionPercentX(0.5000)
layout:setPositionPercentY(0.1847)
layout:setPercentWidth(1.0000)
layout:setPercentHeight(0.3333)
layout:setSize({width = 600.0000, height = 100.0000})
layout:setTopMargin(194.5900)
layout:setBottomMargin(5.4100)
Panel_19:addChild(Panel_20_0_0)

--Create Sprite_29
cc.SpriteFrameCache:getInstance():addSpriteFrames("Resource/atlas/B-common.plist")
local Sprite_29 = cc.Sprite:createWithSpriteFrameName("star-yellow.png")
Sprite_29:setName("Sprite_29")
Sprite_29:setTag(248)
Sprite_29:setCascadeColorEnabled(true)
Sprite_29:setCascadeOpacityEnabled(true)
Sprite_29:setPosition(100.0000, 50.0000)
Sprite_29:setScaleX(0.5500)
Sprite_29:setScaleY(0.5500)
layout = ccui.LayoutComponent:bindLayoutComponent(Sprite_29)
layout:setPositionPercentYEnabled(true)
layout:setPositionPercentX(0.1667)
layout:setPositionPercentY(0.5000)
layout:setPercentWidth(0.2000)
layout:setPercentHeight(1.1500)
layout:setSize({width = 120.0000, height = 115.0000})
layout:setLeftMargin(40.0000)
layout:setRightMargin(440.0000)
layout:setTopMargin(-7.5000)
layout:setBottomMargin(-7.5000)
Sprite_29:setBlendFunc({src = 1, dst = 771})
Panel_20_0_0:addChild(Sprite_29)

--Create Sprite_29_0
cc.SpriteFrameCache:getInstance():addSpriteFrames("Resource/atlas/B-common.plist")
local Sprite_29_0 = cc.Sprite:createWithSpriteFrameName("star-yellow.png")
Sprite_29_0:setName("Sprite_29_0")
Sprite_29_0:setTag(249)
Sprite_29_0:setCascadeColorEnabled(true)
Sprite_29_0:setCascadeOpacityEnabled(true)
Sprite_29_0:setPosition(175.0001, 50.0000)
Sprite_29_0:setScaleX(0.5500)
Sprite_29_0:setScaleY(0.5500)
layout = ccui.LayoutComponent:bindLayoutComponent(Sprite_29_0)
layout:setPositionPercentYEnabled(true)
layout:setPositionPercentX(0.2917)
layout:setPositionPercentY(0.5000)
layout:setPercentWidth(0.1983)
layout:setPercentHeight(1.1600)
layout:setSize({width = 120.0000, height = 115.0000})
layout:setLeftMargin(115.5001)
layout:setRightMargin(365.4999)
layout:setTopMargin(-8.0000)
layout:setBottomMargin(-8.0000)
Sprite_29_0:setBlendFunc({src = 1, dst = 771})
Panel_20_0_0:addChild(Sprite_29_0)

--Create Sprite_29_1
cc.SpriteFrameCache:getInstance():addSpriteFrames("Resource/atlas/B-common.plist")
local Sprite_29_1 = cc.Sprite:createWithSpriteFrameName("star-yellow.png")
Sprite_29_1:setName("Sprite_29_1")
Sprite_29_1:setTag(250)
Sprite_29_1:setCascadeColorEnabled(true)
Sprite_29_1:setCascadeOpacityEnabled(true)
Sprite_29_1:setPosition(251.6674, 50.0000)
Sprite_29_1:setScaleX(0.5500)
Sprite_29_1:setScaleY(0.5500)
layout = ccui.LayoutComponent:bindLayoutComponent(Sprite_29_1)
layout:setPositionPercentYEnabled(true)
layout:setPositionPercentX(0.4194)
layout:setPositionPercentY(0.5000)
layout:setPercentWidth(0.1983)
layout:setPercentHeight(1.1600)
layout:setSize({width = 120.0000, height = 115.0000})
layout:setLeftMargin(192.1674)
layout:setRightMargin(288.8326)
layout:setTopMargin(-8.0000)
layout:setBottomMargin(-8.0000)
Sprite_29_1:setBlendFunc({src = 1, dst = 771})
Panel_20_0_0:addChild(Sprite_29_1)

--Create Text_12
local Text_12 = ccui.Text:create()
Text_12:ignoreContentAdaptWithSize(true)
Text_12:setTextAreaSize({width = 0, height = 0})
Text_12:setFontName("Resource/font/FZY4K.ttf")
Text_12:setFontSize(36)
Text_12:setString([[＋100]])
Text_12:setLayoutComponentEnabled(true)
Text_12:setName("Text_12")
Text_12:setTag(251)
Text_12:setCascadeColorEnabled(true)
Text_12:setCascadeOpacityEnabled(true)
Text_12:setAnchorPoint(0.0000, 0.5000)
Text_12:setPosition(312.5000, 50.0000)
Text_12:setTextColor({r = 255, g = 110, b = 165})
layout = ccui.LayoutComponent:bindLayoutComponent(Text_12)
layout:setPositionPercentYEnabled(true)
layout:setPositionPercentX(0.5208)
layout:setPositionPercentY(0.5000)
layout:setPercentWidth(0.1550)
layout:setPercentHeight(0.4300)
layout:setSize({width = 93.0000, height = 43.0000})
layout:setLeftMargin(312.5000)
layout:setRightMargin(194.5000)
layout:setTopMargin(28.5000)
layout:setBottomMargin(28.5000)
Panel_20_0_0:addChild(Text_12)

--Create Animation
result['animation'] = ccs.ActionTimeline:create()
  
result['animation']:setDuration(0)
result['animation']:setTimeSpeed(1.0000)
--Create Animation List

result['root'] = Node
return result;
end

return Result

