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
Panel_1:setTag(324)
Panel_1:setCascadeColorEnabled(true)
Panel_1:setCascadeOpacityEnabled(true)
Panel_1:setAnchorPoint(0.5000, 0.0000)
if callBackProvider~=nil then
      Panel_1:addClickEventListener(callBackProvider("single_map.lua", Panel_1, "btnCloseBg"))
end
layout = ccui.LayoutComponent:bindLayoutComponent(Panel_1)
layout:setPositionPercentXEnabled(true)
layout:setPositionPercentYEnabled(true)
layout:setSize({width = 1080.0000, height = 1707.0000})
layout:setLeftMargin(-540.0000)
layout:setRightMargin(-540.0000)
layout:setTopMargin(-1707.0000)
Node:addChild(Panel_1)

--Create layer
local layer = ccui.Layout:create()
layer:ignoreContentAdaptWithSize(false)
layer:setClippingEnabled(false)
layer:setBackGroundColorType(1)
layer:setBackGroundColor({r = 150, g = 200, b = 255})
layer:setBackGroundColorOpacity(0)
layer:setLayoutComponentEnabled(true)
layer:setName("layer")
layer:setTag(350)
layer:setCascadeColorEnabled(true)
layer:setCascadeOpacityEnabled(true)
layer:setAnchorPoint(0.5000, 0.5000)
layer:setPosition(540.0000, 853.5000)
layout = ccui.LayoutComponent:bindLayoutComponent(layer)
layout:setPositionPercentXEnabled(true)
layout:setPositionPercentYEnabled(true)
layout:setPositionPercentX(0.5000)
layout:setPositionPercentY(0.5000)
layout:setPercentWidth(1.0000)
layout:setPercentHeight(1.0000)
layout:setSize({width = 1080.0000, height = 1707.0000})
Panel_1:addChild(layer)

--Create Panel_9
local Panel_9 = ccui.Layout:create()
Panel_9:ignoreContentAdaptWithSize(false)
Panel_9:setClippingEnabled(false)
Panel_9:setBackGroundColorType(1)
Panel_9:setBackGroundColor({r = 150, g = 200, b = 255})
Panel_9:setBackGroundColorOpacity(0)
Panel_9:setLayoutComponentEnabled(true)
Panel_9:setName("Panel_9")
Panel_9:setTag(351)
Panel_9:setCascadeColorEnabled(true)
Panel_9:setCascadeOpacityEnabled(true)
Panel_9:setAnchorPoint(0.5000, 0.0000)
Panel_9:setPosition(540.0000, 0.0000)
layout = ccui.LayoutComponent:bindLayoutComponent(Panel_9)
layout:setPositionPercentXEnabled(true)
layout:setPositionPercentYEnabled(true)
layout:setPositionPercentX(0.5000)
layout:setPercentWidth(0.8889)
layout:setPercentHeight(0.8436)
layout:setSize({width = 960.0000, height = 1440.0000})
layout:setLeftMargin(60.0000)
layout:setRightMargin(60.0000)
layout:setTopMargin(267.0000)
Panel_1:addChild(Panel_9)

--Create Image_5
local Image_5 = ccui.ImageView:create()
Image_5:ignoreContentAdaptWithSize(false)
cc.SpriteFrameCache:getInstance():addSpriteFrames("Resource/atlas/B-common.plist")
Image_5:loadTexture("dialog-4.png",1)
Image_5:setScale9Enabled(true)
Image_5:setCapInsets({x = 80, y = 80, width = 13, height = 24})
Image_5:setTouchEnabled(true);
Image_5:setLayoutComponentEnabled(true)
Image_5:setName("Image_5")
Image_5:setTag(352)
Image_5:setCascadeColorEnabled(true)
Image_5:setCascadeOpacityEnabled(true)
Image_5:setPosition(480.0000, 1113.6210)
layout = ccui.LayoutComponent:bindLayoutComponent(Image_5)
layout:setPositionPercentXEnabled(true)
layout:setPositionPercentX(0.5000)
layout:setPositionPercentY(0.7733)
layout:setPercentWidth(0.8854)
layout:setPercentHeight(0.3125)
layout:setSize({width = 850.0000, height = 450.0000})
layout:setLeftMargin(55.0000)
layout:setRightMargin(55.0000)
layout:setTopMargin(101.3794)
layout:setBottomMargin(888.6206)
Panel_9:addChild(Image_5)

--Create Sprite_11
cc.SpriteFrameCache:getInstance():addSpriteFrames("Resource/atlas/B-common.plist")
local Sprite_11 = cc.Sprite:createWithSpriteFrameName("title-pink.png")
Sprite_11:setName("Sprite_11")
Sprite_11:setTag(354)
Sprite_11:setCascadeColorEnabled(true)
Sprite_11:setCascadeOpacityEnabled(true)
Sprite_11:setPosition(480.0000, 1331.5120)
layout = ccui.LayoutComponent:bindLayoutComponent(Sprite_11)
layout:setPositionPercentXEnabled(true)
layout:setPositionPercentX(0.5000)
layout:setPositionPercentY(0.9247)
layout:setPercentWidth(0.3938)
layout:setPercentHeight(0.0958)
layout:setSize({width = 378.0000, height = 138.0000})
layout:setLeftMargin(291.0000)
layout:setRightMargin(291.0000)
layout:setTopMargin(39.4880)
layout:setBottomMargin(1262.5120)
Sprite_11:setBlendFunc({src = 1, dst = 771})
Panel_9:addChild(Sprite_11)

--Create Text_4
local Text_4 = ccui.Text:create()
Text_4:ignoreContentAdaptWithSize(true)
Text_4:setTextAreaSize({width = 0, height = 0})
Text_4:setFontName("Resource/font/FZY4K.ttf")
Text_4:setFontSize(48)
Text_4:setString([[随机模式]])
Text_4:setTextHorizontalAlignment(1)
Text_4:enableOutline({r = 103, g = 65, b = 78, a = 255}, 5)
Text_4:setLayoutComponentEnabled(true)
Text_4:setName("Text_4")
Text_4:setTag(355)
Text_4:setCascadeColorEnabled(true)
Text_4:setCascadeOpacityEnabled(true)
Text_4:setPosition(186.8454, 75.4446)
layout = ccui.LayoutComponent:bindLayoutComponent(Text_4)
layout:setPositionPercentXEnabled(true)
layout:setPositionPercentYEnabled(true)
layout:setPositionPercentX(0.4943)
layout:setPositionPercentY(0.5467)
layout:setPercentWidth(0.5265)
layout:setPercentHeight(0.4928)
layout:setSize({width = 199.0000, height = 68.0000})
layout:setLeftMargin(87.3454)
layout:setRightMargin(91.6546)
layout:setTopMargin(28.5554)
layout:setBottomMargin(41.4446)
Sprite_11:addChild(Text_4)

--Create btnTurnLeft
local btnTurnLeft = ccui.Button:create()
btnTurnLeft:ignoreContentAdaptWithSize(false)
cc.SpriteFrameCache:getInstance():addSpriteFrames("Resource/atlas/B-common.plist")
btnTurnLeft:loadTextureNormal("btn-turn.png",1)
cc.SpriteFrameCache:getInstance():addSpriteFrames("Resource/atlas/B-common.plist")
btnTurnLeft:loadTexturePressed("btn-turn.png",1)
btnTurnLeft:loadTextureDisabled("Default/Button_Disable.png",0)
btnTurnLeft:setTitleFontSize(14)
btnTurnLeft:setTitleColor({r = 65, g = 65, b = 70})
btnTurnLeft:setScale9Enabled(true)
btnTurnLeft:setCapInsets({x = 15, y = 11, width = 28, height = 59})
btnTurnLeft:setLayoutComponentEnabled(true)
btnTurnLeft:setName("btnTurnLeft")
btnTurnLeft:setTag(356)
btnTurnLeft:setCascadeColorEnabled(true)
btnTurnLeft:setCascadeOpacityEnabled(true)
btnTurnLeft:setPosition(230.6661, 1180.0000)
btnTurnLeft.UserData = {}
btnTurnLeft.UserData[1] = [==========[sb]==========]
if callBackProvider~=nil then
      btnTurnLeft:addClickEventListener(callBackProvider("single_map.lua", btnTurnLeft, "btnTurnLeft"))
end
layout = ccui.LayoutComponent:bindLayoutComponent(btnTurnLeft)
layout:setPositionPercentX(0.2403)
layout:setPositionPercentY(0.8194)
layout:setPercentWidth(0.0604)
layout:setPercentHeight(0.0563)
layout:setSize({width = 58.0000, height = 81.0000})
layout:setLeftMargin(201.6661)
layout:setRightMargin(700.3339)
layout:setTopMargin(219.5000)
layout:setBottomMargin(1139.5000)
Panel_9:addChild(btnTurnLeft)

--Create btnTurnRight
local btnTurnRight = ccui.Button:create()
btnTurnRight:ignoreContentAdaptWithSize(false)
cc.SpriteFrameCache:getInstance():addSpriteFrames("Resource/atlas/B-common.plist")
btnTurnRight:loadTextureNormal("btn-turn.png",1)
cc.SpriteFrameCache:getInstance():addSpriteFrames("Resource/atlas/B-common.plist")
btnTurnRight:loadTexturePressed("btn-turn.png",1)
btnTurnRight:loadTextureDisabled("Default/Button_Disable.png",0)
btnTurnRight:setTitleFontSize(14)
btnTurnRight:setTitleColor({r = 65, g = 65, b = 70})
btnTurnRight:setScale9Enabled(true)
btnTurnRight:setCapInsets({x = 15, y = 11, width = 28, height = 59})
btnTurnRight:setLayoutComponentEnabled(true)
btnTurnRight:setName("btnTurnRight")
btnTurnRight:setTag(361)
btnTurnRight:setCascadeColorEnabled(true)
btnTurnRight:setCascadeOpacityEnabled(true)
btnTurnRight:setPosition(727.6201, 1180.0000)
btnTurnRight:setRotationSkewX(180.0000)
btnTurnRight:setRotationSkewY(180.0000)
btnTurnRight.UserData = {}
btnTurnRight.UserData[1] = [==========[sb]==========]
if callBackProvider~=nil then
      btnTurnRight:addClickEventListener(callBackProvider("single_map.lua", btnTurnRight, "btnTurnRight"))
end
layout = ccui.LayoutComponent:bindLayoutComponent(btnTurnRight)
layout:setPositionPercentX(0.7579)
layout:setPositionPercentY(0.8194)
layout:setPercentWidth(0.0604)
layout:setPercentHeight(0.0563)
layout:setSize({width = 58.0000, height = 81.0000})
layout:setLeftMargin(698.6201)
layout:setRightMargin(203.3799)
layout:setTopMargin(219.5000)
layout:setBottomMargin(1139.5000)
Panel_9:addChild(btnTurnRight)

--Create btnBeginRand
local btnBeginRand = ccui.Button:create()
btnBeginRand:ignoreContentAdaptWithSize(false)
cc.SpriteFrameCache:getInstance():addSpriteFrames("Resource/atlas/B-common.plist")
btnBeginRand:loadTextureNormal("btn-09.png",1)
cc.SpriteFrameCache:getInstance():addSpriteFrames("Resource/atlas/B-common.plist")
btnBeginRand:loadTexturePressed("btn-09.png",1)
btnBeginRand:loadTextureDisabled("Default/Button_Disable.png",0)
btnBeginRand:setTitleFontSize(14)
btnBeginRand:setTitleColor({r = 65, g = 65, b = 70})
btnBeginRand:setScale9Enabled(true)
btnBeginRand:setCapInsets({x = 15, y = 11, width = 229, height = 101})
btnBeginRand:setLayoutComponentEnabled(true)
btnBeginRand:setName("btnBeginRand")
btnBeginRand:setTag(359)
btnBeginRand:setCascadeColorEnabled(true)
btnBeginRand:setCascadeOpacityEnabled(true)
btnBeginRand:setPosition(480.0000, 1175.7000)
btnBeginRand.UserData = {}
btnBeginRand.UserData[1] = [==========[sb]==========]
if callBackProvider~=nil then
      btnBeginRand:addClickEventListener(callBackProvider("single_map.lua", btnBeginRand, "btnBeginRand"))
end
layout = ccui.LayoutComponent:bindLayoutComponent(btnBeginRand)
layout:setPositionPercentXEnabled(true)
layout:setPositionPercentX(0.5000)
layout:setPositionPercentY(0.8165)
layout:setPercentWidth(0.2698)
layout:setPercentHeight(0.0854)
layout:setSize({width = 259.0000, height = 123.0000})
layout:setLeftMargin(350.5000)
layout:setRightMargin(350.5000)
layout:setTopMargin(202.8003)
layout:setBottomMargin(1114.2000)
Panel_9:addChild(btnBeginRand)

--Create randTile
local randTile = ccui.Text:create()
randTile:ignoreContentAdaptWithSize(true)
randTile:setTextAreaSize({width = 0, height = 0})
randTile:setFontName("Resource/font/FZY4K.ttf")
randTile:setFontSize(48)
randTile:setString([[随机]])
randTile:setLayoutComponentEnabled(true)
randTile:setName("randTile")
randTile:setTag(360)
randTile:setCascadeColorEnabled(true)
randTile:setCascadeOpacityEnabled(true)
randTile:setPosition(129.5000, 71.4261)
randTile:setTextColor({r = 103, g = 65, b = 78})
layout = ccui.LayoutComponent:bindLayoutComponent(randTile)
layout:setPositionPercentXEnabled(true)
layout:setPositionPercentYEnabled(true)
layout:setPositionPercentX(0.5000)
layout:setPositionPercentY(0.5807)
layout:setPercentWidth(0.3784)
layout:setPercentHeight(0.4715)
layout:setSize({width = 98.0000, height = 58.0000})
layout:setLeftMargin(80.5000)
layout:setRightMargin(80.5000)
layout:setTopMargin(22.5739)
layout:setBottomMargin(42.4261)
btnBeginRand:addChild(randTile)

--Create levelExplain
local levelExplain = ccui.Text:create()
levelExplain:ignoreContentAdaptWithSize(true)
levelExplain:setTextAreaSize({width = 0, height = 0})
levelExplain:setFontName("Resource/font/FZY4K.ttf")
levelExplain:setFontSize(30)
levelExplain:setString([[宝箱进度＋1]])
levelExplain:setLayoutComponentEnabled(true)
levelExplain:setName("levelExplain")
levelExplain:setTag(362)
levelExplain:setCascadeColorEnabled(true)
levelExplain:setCascadeOpacityEnabled(true)
levelExplain:setPosition(480.0000, 1090.8500)
levelExplain:setTextColor({r = 255, g = 110, b = 165})
layout = ccui.LayoutComponent:bindLayoutComponent(levelExplain)
layout:setPositionPercentXEnabled(true)
layout:setPositionPercentX(0.5000)
layout:setPositionPercentY(0.7575)
layout:setPercentWidth(0.1698)
layout:setPercentHeight(0.0250)
layout:setSize({width = 163.0000, height = 36.0000})
layout:setLeftMargin(398.5000)
layout:setRightMargin(398.5000)
layout:setTopMargin(331.1495)
layout:setBottomMargin(1072.8500)
Panel_9:addChild(levelExplain)

--Create slider
cc.SpriteFrameCache:getInstance():addSpriteFrames("Resource/atlas/B-common.plist")
local slider = cc.Sprite:createWithSpriteFrameName("progress-1-out.png")
slider:setName("slider")
slider:setTag(363)
slider:setCascadeColorEnabled(true)
slider:setCascadeOpacityEnabled(true)
slider:setPosition(397.3382, 1012.2060)
layout = ccui.LayoutComponent:bindLayoutComponent(slider)
layout:setPositionPercentX(0.4139)
layout:setPositionPercentY(0.7029)
layout:setPercentWidth(0.4896)
layout:setPercentHeight(0.0438)
layout:setSize({width = 470.0000, height = 63.0000})
layout:setLeftMargin(162.3382)
layout:setRightMargin(327.6618)
layout:setTopMargin(396.2944)
layout:setBottomMargin(980.7056)
slider:setBlendFunc({src = 1, dst = 771})
Panel_9:addChild(slider)

--Create Panel_10
local Panel_10 = ccui.Layout:create()
Panel_10:ignoreContentAdaptWithSize(false)
Panel_10:setClippingEnabled(false)
Panel_10:setBackGroundColorType(1)
Panel_10:setBackGroundColor({r = 150, g = 200, b = 255})
Panel_10:setBackGroundColorOpacity(0)
Panel_10:setTouchEnabled(true);
Panel_10:setLayoutComponentEnabled(true)
Panel_10:setName("Panel_10")
Panel_10:setTag(367)
Panel_10:setCascadeColorEnabled(true)
Panel_10:setCascadeOpacityEnabled(true)
Panel_10:setAnchorPoint(0.5000, 0.5000)
Panel_10:setPosition(730.9487, 1020.7650)
layout = ccui.LayoutComponent:bindLayoutComponent(Panel_10)
layout:setPositionPercentX(0.7614)
layout:setPositionPercentY(0.7089)
layout:setPercentWidth(0.2083)
layout:setPercentHeight(0.1389)
layout:setSize({width = 200.0000, height = 200.0000})
layout:setLeftMargin(630.9487)
layout:setRightMargin(129.0513)
layout:setTopMargin(319.2350)
layout:setBottomMargin(920.7650)
Panel_9:addChild(Panel_10)

--Create boxLight
cc.SpriteFrameCache:getInstance():addSpriteFrames("Resource/atlas/B-common.plist")
local boxLight = cc.Sprite:createWithSpriteFrameName("all-light.png")
boxLight:setName("boxLight")
boxLight:setTag(365)
boxLight:setCascadeColorEnabled(true)
boxLight:setCascadeOpacityEnabled(true)
boxLight:setPosition(100.0000, 100.0000)
boxLight:setScaleX(0.6000)
boxLight:setScaleY(0.6000)
boxLight:setColor({r = 255, g = 110, b = 165})
layout = ccui.LayoutComponent:bindLayoutComponent(boxLight)
layout:setPositionPercentXEnabled(true)
layout:setPositionPercentYEnabled(true)
layout:setPositionPercentX(0.5000)
layout:setPositionPercentY(0.5000)
layout:setPercentWidth(1.6850)
layout:setPercentHeight(1.6850)
layout:setSize({width = 337.0000, height = 337.0000})
layout:setLeftMargin(-68.5000)
layout:setRightMargin(-68.5000)
layout:setTopMargin(-68.5000)
layout:setBottomMargin(-68.5000)
boxLight:setBlendFunc({src = 1, dst = 771})
Panel_10:addChild(boxLight)

--Create Sprite_17
cc.SpriteFrameCache:getInstance():addSpriteFrames("Resource/atlas/B-common.plist")
local Sprite_17 = cc.Sprite:createWithSpriteFrameName("box-pink-1.png")
Sprite_17:setName("Sprite_17")
Sprite_17:setTag(366)
Sprite_17:setCascadeColorEnabled(true)
Sprite_17:setCascadeOpacityEnabled(true)
Sprite_17:setPosition(100.0000, 100.0000)
layout = ccui.LayoutComponent:bindLayoutComponent(Sprite_17)
layout:setPositionPercentXEnabled(true)
layout:setPositionPercentYEnabled(true)
layout:setPositionPercentX(0.5000)
layout:setPositionPercentY(0.5000)
layout:setPercentWidth(0.6500)
layout:setPercentHeight(0.6050)
layout:setSize({width = 130.0000, height = 121.0000})
layout:setLeftMargin(35.0000)
layout:setRightMargin(35.0000)
layout:setTopMargin(39.5000)
layout:setBottomMargin(39.5000)
Sprite_17:setBlendFunc({src = 1, dst = 771})
Panel_10:addChild(Sprite_17)

--Create Panel_11
local Panel_11 = ccui.Layout:create()
Panel_11:ignoreContentAdaptWithSize(false)
Panel_11:setClippingEnabled(false)
Panel_11:setBackGroundColorType(1)
Panel_11:setBackGroundColor({r = 150, g = 200, b = 255})
Panel_11:setBackGroundColorOpacity(0)
Panel_11:setLayoutComponentEnabled(true)
Panel_11:setName("Panel_11")
Panel_11:setTag(368)
Panel_11:setCascadeColorEnabled(true)
Panel_11:setCascadeOpacityEnabled(true)
Panel_11:setAnchorPoint(0.5000, 0.0000)
Panel_11:setPosition(540.0000, 0.0000)
layout = ccui.LayoutComponent:bindLayoutComponent(Panel_11)
layout:setPositionPercentXEnabled(true)
layout:setPositionPercentYEnabled(true)
layout:setPositionPercentX(0.5000)
layout:setPercentWidth(0.8889)
layout:setPercentHeight(0.8436)
layout:setSize({width = 960.0000, height = 1440.0000})
layout:setLeftMargin(60.0000)
layout:setRightMargin(60.0000)
layout:setTopMargin(267.0000)
Panel_1:addChild(Panel_11)

--Create ScrollView_2
local ScrollView_2 = ccui.ScrollView:create()
ScrollView_2:setBounceEnabled(true)
ScrollView_2:setInnerContainerSize({width = 794, height = 8000})
ScrollView_2:ignoreContentAdaptWithSize(false)
ScrollView_2:setClippingEnabled(true)
ScrollView_2:setBackGroundColorType(1)
ScrollView_2:setBackGroundColor({r = 255, g = 150, b = 100})
ScrollView_2:setBackGroundColorOpacity(102)
ScrollView_2:setLayoutComponentEnabled(true)
ScrollView_2:setName("ScrollView_2")
ScrollView_2:setTag(372)
ScrollView_2:setCascadeColorEnabled(true)
ScrollView_2:setCascadeOpacityEnabled(true)
ScrollView_2:setAnchorPoint(0.5000, 0.5000)
ScrollView_2:setPosition(480.3251, 555.8850)
ScrollView_2:setRotationSkewX(180.0000)
ScrollView_2:setRotationSkewY(180.0000)
layout = ccui.LayoutComponent:bindLayoutComponent(ScrollView_2)
layout:setPositionPercentX(0.5003)
layout:setPositionPercentY(0.3860)
layout:setPercentWidth(0.8271)
layout:setPercentHeight(0.4514)
layout:setSize({width = 794.0000, height = 650.0000})
layout:setLeftMargin(83.3251)
layout:setRightMargin(82.6749)
layout:setTopMargin(559.1150)
layout:setBottomMargin(230.8850)
Panel_11:addChild(ScrollView_2)

--Create singlemap
local singlemap = ccui.Layout:create()
singlemap:ignoreContentAdaptWithSize(false)
singlemap:setClippingEnabled(false)
singlemap:setBackGroundColorType(1)
singlemap:setBackGroundColor({r = 150, g = 200, b = 255})
singlemap:setBackGroundColorOpacity(102)
singlemap:setTouchEnabled(true);
singlemap:setLayoutComponentEnabled(true)
singlemap:setName("singlemap")
singlemap:setTag(373)
singlemap:setCascadeColorEnabled(true)
singlemap:setCascadeOpacityEnabled(true)
singlemap:setAnchorPoint(0.5000, 0.5000)
singlemap:setPosition(397.0000, 8000.0000)
layout = ccui.LayoutComponent:bindLayoutComponent(singlemap)
layout:setPositionPercentXEnabled(true)
layout:setPositionPercentYEnabled(true)
layout:setPositionPercentX(0.5000)
layout:setPositionPercentY(1.0000)
layout:setLeftMargin(397.0000)
layout:setRightMargin(397.0000)
layout:setBottomMargin(4000.0000)
ScrollView_2:addChild(singlemap)

--Create Image_1
local Image_1 = ccui.ImageView:create()
Image_1:ignoreContentAdaptWithSize(false)
cc.SpriteFrameCache:getInstance():addSpriteFrames("Resource/atlas/B-common.plist")
Image_1:loadTexture("main-dialog-sprite.png",1)
Image_1:setScale9Enabled(true)
Image_1:setCapInsets({x = 80, y = 80, width = 28, height = 33})
Image_1:setLayoutComponentEnabled(true)
Image_1:setName("Image_1")
Image_1:setTag(325)
Image_1:setCascadeColorEnabled(true)
Image_1:setCascadeOpacityEnabled(true)
Image_1:setPosition(480.0000, 550.0000)
layout = ccui.LayoutComponent:bindLayoutComponent(Image_1)
layout:setPositionPercentXEnabled(true)
layout:setPositionPercentX(0.5000)
layout:setPositionPercentY(0.3819)
layout:setPercentWidth(0.8854)
layout:setPercentHeight(0.4938)
layout:setSize({width = 850.0000, height = 711.0000})
layout:setLeftMargin(55.0000)
layout:setRightMargin(55.0000)
layout:setTopMargin(534.5000)
layout:setBottomMargin(194.5000)
Panel_11:addChild(Image_1)

--Create Sprite_19
cc.SpriteFrameCache:getInstance():addSpriteFrames("Resource/atlas/B-common.plist")
local Sprite_19 = cc.Sprite:createWithSpriteFrameName("main-dialog-line.png")
Sprite_19:setName("Sprite_19")
Sprite_19:setTag(371)
Sprite_19:setCascadeColorEnabled(true)
Sprite_19:setCascadeOpacityEnabled(true)
Sprite_19:setAnchorPoint(0.5000, 1.0000)
Sprite_19:setPosition(159.9999, 215.0000)
Sprite_19:setScaleY(1.5000)
layout = ccui.LayoutComponent:bindLayoutComponent(Sprite_19)
layout:setPositionPercentX(0.1667)
layout:setPositionPercentY(0.1493)
layout:setPercentWidth(0.0292)
layout:setPercentHeight(0.0326)
layout:setSize({width = 28.0000, height = 47.0000})
layout:setLeftMargin(145.9999)
layout:setRightMargin(786.0001)
layout:setTopMargin(1225.0000)
layout:setBottomMargin(168.0000)
Sprite_19:setBlendFunc({src = 1, dst = 771})
Panel_11:addChild(Sprite_19)

--Create Sprite_18
cc.SpriteFrameCache:getInstance():addSpriteFrames("Resource/atlas/B-common.plist")
local Sprite_18 = cc.Sprite:createWithSpriteFrameName("title-yelow.png")
Sprite_18:setName("Sprite_18")
Sprite_18:setTag(369)
Sprite_18:setCascadeColorEnabled(true)
Sprite_18:setCascadeOpacityEnabled(true)
Sprite_18:setPosition(480.0000, 873.0026)
layout = ccui.LayoutComponent:bindLayoutComponent(Sprite_18)
layout:setPositionPercentXEnabled(true)
layout:setPositionPercentX(0.5000)
layout:setPositionPercentY(0.6063)
layout:setPercentWidth(0.3938)
layout:setPercentHeight(0.0958)
layout:setSize({width = 378.0000, height = 138.0000})
layout:setLeftMargin(291.0000)
layout:setRightMargin(291.0000)
layout:setTopMargin(497.9974)
layout:setBottomMargin(804.0026)
Sprite_18:setBlendFunc({src = 1, dst = 771})
Panel_11:addChild(Sprite_18)

--Create Text_7
local Text_7 = ccui.Text:create()
Text_7:ignoreContentAdaptWithSize(true)
Text_7:setTextAreaSize({width = 0, height = 0})
Text_7:setFontName("Resource/font/FZY4K.ttf")
Text_7:setFontSize(48)
Text_7:setString([[别墅探险]])
Text_7:enableOutline({r = 103, g = 65, b = 78, a = 255}, 5)
Text_7:setLayoutComponentEnabled(true)
Text_7:setName("Text_7")
Text_7:setTag(370)
Text_7:setCascadeColorEnabled(true)
Text_7:setCascadeOpacityEnabled(true)
Text_7:setPosition(189.0000, 75.6240)
layout = ccui.LayoutComponent:bindLayoutComponent(Text_7)
layout:setPositionPercentXEnabled(true)
layout:setPositionPercentYEnabled(true)
layout:setPositionPercentX(0.5000)
layout:setPositionPercentY(0.5480)
layout:setPercentWidth(0.5238)
layout:setPercentHeight(0.4928)
layout:setSize({width = 198.0000, height = 68.0000})
layout:setLeftMargin(90.0000)
layout:setRightMargin(90.0000)
layout:setTopMargin(28.3760)
layout:setBottomMargin(41.6240)
Sprite_18:addChild(Text_7)

--Create Animation
result['animation'] = ccs.ActionTimeline:create()
  
result['animation']:setDuration(0)
result['animation']:setTimeSpeed(1.0000)
--Create Animation List

result['root'] = Node
return result;
end

return Result

