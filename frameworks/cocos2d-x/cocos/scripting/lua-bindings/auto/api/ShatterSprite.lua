
--------------------------------
-- @module ShatterSprite
-- @extend Sprite
-- @parent_module dnp

--------------------------------
-- 
-- @function [parent=#ShatterSprite] setShader 
-- @param self
-- @return bool#bool ret (return value: bool)
        
--------------------------------
-- 
-- @function [parent=#ShatterSprite] startShatter 
-- @param self
-- @param #float time
-- @return ShatterSprite#ShatterSprite self (return value: ShatterSprite)
        
--------------------------------
-- @overload self, char, rect_table         
-- @overload self, char         
-- @function [parent=#ShatterSprite] create
-- @param self
-- @param #char $pszFileName
-- @param #rect_table $rect
-- @return ShatterSprite#ShatterSprite ret (return value: ShatterSprite)

--------------------------------
-- 
-- @function [parent=#ShatterSprite] createWithSpriteFrameName 
-- @param self
-- @param #char $pszSpriteFrameName
-- @return ShatterSprite#ShatterSprite ret (return value: ShatterSprite)
        
--------------------------------
-- 
-- @function [parent=#ShatterSprite] createWithSpriteFrame 
-- @param self
-- @param #cc.SpriteFrame $pSpriteFrame
-- @return ShatterSprite#ShatterSprite ret (return value: ShatterSprite)
        
--------------------------------
-- 
-- @function [parent=#ShatterSprite] ShatterSprite 
-- @param self
-- @return ShatterSprite#ShatterSprite self (return value: ShatterSprite)
        
return nil
