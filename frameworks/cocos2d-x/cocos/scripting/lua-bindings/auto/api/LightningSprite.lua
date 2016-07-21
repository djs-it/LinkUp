
--------------------------------
-- @module LightningSprite
-- @extend Sprite
-- @parent_module dnp

--------------------------------
-- 
-- @function [parent=#LightningSprite] setIsDrawDebug 
-- @param self
-- @param #bool value
-- @return LightningSprite#LightningSprite self (return value: LightningSprite)
        
--------------------------------
-- 
-- @function [parent=#LightningSprite] draw 
-- @param self
-- @param #cc.Renderer renderer
-- @param #mat4_table transform
-- @param #unsigned int flags
-- @return LightningSprite#LightningSprite self (return value: LightningSprite)
        
--------------------------------
-- 
-- @function [parent=#LightningSprite] updateNGeneration 
-- @param self
-- @return LightningSprite#LightningSprite self (return value: LightningSprite)
        
--------------------------------
-- 
-- @function [parent=#LightningSprite] setStartAndEnd 
-- @param self
-- @param #vec2_table start
-- @param #vec2_table end
-- @return LightningSprite#LightningSprite self (return value: LightningSprite)
        
--------------------------------
-- 
-- @function [parent=#LightningSprite] onDraw 
-- @param self
-- @param #mat4_table transform
-- @param #unsigned int flags
-- @return LightningSprite#LightningSprite self (return value: LightningSprite)
        
--------------------------------
-- 
-- @function [parent=#LightningSprite] setShader 
-- @param self
-- @return bool#bool ret (return value: bool)
        
--------------------------------
-- 
-- @function [parent=#LightningSprite] doJitter 
-- @param self
-- @return LightningSprite#LightningSprite self (return value: LightningSprite)
        
--------------------------------
-- 
-- @function [parent=#LightningSprite] getIsDrawDebug 
-- @param self
-- @return bool#bool ret (return value: bool)
        
--------------------------------
-- 
-- @function [parent=#LightningSprite] onDrawDebug 
-- @param self
-- @param #mat4_table transform
-- @param #unsigned int flags
-- @return LightningSprite#LightningSprite self (return value: LightningSprite)
        
--------------------------------
-- 
-- @function [parent=#LightningSprite] genLighting 
-- @param self
-- @return LightningSprite#LightningSprite self (return value: LightningSprite)
        
--------------------------------
-- @overload self, char, rect_table         
-- @overload self, char         
-- @function [parent=#LightningSprite] create
-- @param self
-- @param #char $pszFileName
-- @param #rect_table $rect
-- @return LightningSprite#LightningSprite ret (return value: LightningSprite)

--------------------------------
-- 
-- @function [parent=#LightningSprite] createWithSpriteFrameName 
-- @param self
-- @param #char $pszSpriteFrameName
-- @return LightningSprite#LightningSprite ret (return value: LightningSprite)
        
--------------------------------
-- 
-- @function [parent=#LightningSprite] createWithSpriteFrame 
-- @param self
-- @param #cc.SpriteFrame $pSpriteFrame
-- @return LightningSprite#LightningSprite ret (return value: LightningSprite)
        
--------------------------------
-- 
-- @function [parent=#LightningSprite] LightningSprite 
-- @param self
-- @return LightningSprite#LightningSprite self (return value: LightningSprite)
        
return nil
