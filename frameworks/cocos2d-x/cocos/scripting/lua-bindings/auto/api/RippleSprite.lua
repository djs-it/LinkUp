
--------------------------------
-- @module RippleSprite
-- @extend Sprite
-- @parent_module dnp

--------------------------------
-- 
-- @function [parent=#RippleSprite] setGridSideLen 
-- @param self
-- @param #float gridSideLen
-- @return bool#bool ret (return value: bool)
        
--------------------------------
-- 
-- @function [parent=#RippleSprite] setIsDrawDebug 
-- @param self
-- @param #bool value
-- @return RippleSprite#RippleSprite self (return value: RippleSprite)
        
--------------------------------
-- 
-- @function [parent=#RippleSprite] setShader 
-- @param self
-- @return bool#bool ret (return value: bool)
        
--------------------------------
-- 
-- @function [parent=#RippleSprite] onDraw 
-- @param self
-- @param #mat4_table transform
-- @param #unsigned int flags
-- @return RippleSprite#RippleSprite self (return value: RippleSprite)
        
--------------------------------
-- 
-- @function [parent=#RippleSprite] draw 
-- @param self
-- @param #cc.Renderer renderer
-- @param #mat4_table transform
-- @param #unsigned int flags
-- @return RippleSprite#RippleSprite self (return value: RippleSprite)
        
--------------------------------
-- 
-- @function [parent=#RippleSprite] update 
-- @param self
-- @param #float t
-- @return RippleSprite#RippleSprite self (return value: RippleSprite)
        
--------------------------------
-- 
-- @function [parent=#RippleSprite] doTouch 
-- @param self
-- @param #vec2_table touchPoint
-- @param #float depth
-- @param #float r
-- @return RippleSprite#RippleSprite self (return value: RippleSprite)
        
--------------------------------
-- 
-- @function [parent=#RippleSprite] getIsDrawDebug 
-- @param self
-- @return bool#bool ret (return value: bool)
        
--------------------------------
-- 
-- @function [parent=#RippleSprite] onDrawDebug 
-- @param self
-- @param #mat4_table transform
-- @param #unsigned int flags
-- @return RippleSprite#RippleSprite self (return value: RippleSprite)
        
--------------------------------
-- 
-- @function [parent=#RippleSprite] getGridSideLen 
-- @param self
-- @return float#float ret (return value: float)
        
--------------------------------
-- @overload self, char, rect_table         
-- @overload self, char         
-- @function [parent=#RippleSprite] create
-- @param self
-- @param #char $pszFileName
-- @param #rect_table $rect
-- @return RippleSprite#RippleSprite ret (return value: RippleSprite)

--------------------------------
-- 
-- @function [parent=#RippleSprite] createWithSpriteFrameName 
-- @param self
-- @param #char $pszSpriteFrameName
-- @return RippleSprite#RippleSprite ret (return value: RippleSprite)
        
--------------------------------
-- 
-- @function [parent=#RippleSprite] createWithSpriteFrame 
-- @param self
-- @param #cc.SpriteFrame $pSpriteFrame
-- @return RippleSprite#RippleSprite ret (return value: RippleSprite)
        
--------------------------------
-- 
-- @function [parent=#RippleSprite] RippleSprite 
-- @param self
-- @return RippleSprite#RippleSprite self (return value: RippleSprite)
        
return nil
