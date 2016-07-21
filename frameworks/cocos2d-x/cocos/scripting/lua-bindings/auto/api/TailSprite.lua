
--------------------------------
-- @module TailSprite
-- @extend Sprite
-- @parent_module dnp

--------------------------------
-- 
-- @function [parent=#TailSprite] draw 
-- @param self
-- @param #cc.Renderer renderer
-- @param #mat4_table transform
-- @param #unsigned int flags
-- @return TailSprite#TailSprite self (return value: TailSprite)
        
--------------------------------
-- 
-- @function [parent=#TailSprite] setIsDrawDebug 
-- @param self
-- @param #bool value
-- @return TailSprite#TailSprite self (return value: TailSprite)
        
--------------------------------
-- 
-- @function [parent=#TailSprite] setShader 
-- @param self
-- @return bool#bool ret (return value: bool)
        
--------------------------------
-- 
-- @function [parent=#TailSprite] getMinDis 
-- @param self
-- @return float#float ret (return value: float)
        
--------------------------------
-- 
-- @function [parent=#TailSprite] setMinDis 
-- @param self
-- @param #float value
-- @return TailSprite#TailSprite self (return value: TailSprite)
        
--------------------------------
-- 
-- @function [parent=#TailSprite] clear 
-- @param self
-- @return TailSprite#TailSprite self (return value: TailSprite)
        
--------------------------------
-- 
-- @function [parent=#TailSprite] onDraw 
-- @param self
-- @param #mat4_table transform
-- @param #unsigned int flags
-- @return TailSprite#TailSprite self (return value: TailSprite)
        
--------------------------------
-- 
-- @function [parent=#TailSprite] update 
-- @param self
-- @param #float dt
-- @return TailSprite#TailSprite self (return value: TailSprite)
        
--------------------------------
-- 
-- @function [parent=#TailSprite] getIsEmpty 
-- @param self
-- @return bool#bool ret (return value: bool)
        
--------------------------------
-- 
-- @function [parent=#TailSprite] getIsDrawDebug 
-- @param self
-- @return bool#bool ret (return value: bool)
        
--------------------------------
-- 
-- @function [parent=#TailSprite] onDrawDebug 
-- @param self
-- @param #mat4_table transform
-- @param #unsigned int flags
-- @return TailSprite#TailSprite self (return value: TailSprite)
        
--------------------------------
-- @overload self, char, rect_table         
-- @overload self, char         
-- @function [parent=#TailSprite] create
-- @param self
-- @param #char $pszFileName
-- @param #rect_table $rect
-- @return TailSprite#TailSprite ret (return value: TailSprite)

--------------------------------
-- 
-- @function [parent=#TailSprite] createWithSpriteFrameName 
-- @param self
-- @param #char $pszSpriteFrameName
-- @return TailSprite#TailSprite ret (return value: TailSprite)
        
--------------------------------
-- 
-- @function [parent=#TailSprite] createWithSpriteFrame 
-- @param self
-- @param #cc.SpriteFrame $pSpriteFrame
-- @return TailSprite#TailSprite ret (return value: TailSprite)
        
--------------------------------
-- 
-- @function [parent=#TailSprite] TailSprite 
-- @param self
-- @return TailSprite#TailSprite self (return value: TailSprite)
        
return nil
