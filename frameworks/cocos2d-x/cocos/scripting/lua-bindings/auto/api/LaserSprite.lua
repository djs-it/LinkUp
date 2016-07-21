
--------------------------------
-- @module LaserSprite
-- @extend Sprite
-- @parent_module dnp

--------------------------------
-- 
-- @function [parent=#LaserSprite] draw 
-- @param self
-- @param #cc.Renderer renderer
-- @param #mat4_table transform
-- @param #unsigned int flags
-- @return LaserSprite#LaserSprite self (return value: LaserSprite)
        
--------------------------------
-- 
-- @function [parent=#LaserSprite] setEnd 
-- @param self
-- @param #vec2_table end
-- @return LaserSprite#LaserSprite self (return value: LaserSprite)
        
--------------------------------
-- 
-- @function [parent=#LaserSprite] updateStartAndEnd 
-- @param self
-- @return LaserSprite#LaserSprite self (return value: LaserSprite)
        
--------------------------------
-- 
-- @function [parent=#LaserSprite] onPassUnifoAndBindTex 
-- @param self
-- @param #mat4_table transform
-- @param #unsigned int flags
-- @return LaserSprite#LaserSprite self (return value: LaserSprite)
        
--------------------------------
-- 
-- @function [parent=#LaserSprite] setLight 
-- @param self
-- @param #char maskName1
-- @param #char maskName2
-- @param #char noiseName1
-- @param #char noiseName2
-- @return LaserSprite#LaserSprite self (return value: LaserSprite)
        
--------------------------------
-- 
-- @function [parent=#LaserSprite] setLightColor 
-- @param self
-- @param #float value
-- @return LaserSprite#LaserSprite self (return value: LaserSprite)
        
--------------------------------
-- 
-- @function [parent=#LaserSprite] setBlendFunc 
-- @param self
-- @param #unsigned int src
-- @param #unsigned int dst
-- @return LaserSprite#LaserSprite self (return value: LaserSprite)
        
--------------------------------
-- 
-- @function [parent=#LaserSprite] setShader 
-- @param self
-- @return bool#bool ret (return value: bool)
        
--------------------------------
-- 
-- @function [parent=#LaserSprite] update 
-- @param self
-- @param #float dt
-- @return LaserSprite#LaserSprite self (return value: LaserSprite)
        
--------------------------------
-- 
-- @function [parent=#LaserSprite] setGlowColor 
-- @param self
-- @param #float value
-- @return LaserSprite#LaserSprite self (return value: LaserSprite)
        
--------------------------------
-- 
-- @function [parent=#LaserSprite] setPorN 
-- @param self
-- @param #float value
-- @return LaserSprite#LaserSprite self (return value: LaserSprite)
        
--------------------------------
-- 
-- @function [parent=#LaserSprite] setStart 
-- @param self
-- @param #vec2_table start
-- @return LaserSprite#LaserSprite self (return value: LaserSprite)
        
--------------------------------
-- 
-- @function [parent=#LaserSprite] setNoiseScale 
-- @param self
-- @param #float value
-- @return LaserSprite#LaserSprite self (return value: LaserSprite)
        
--------------------------------
-- @overload self, char, rect_table         
-- @overload self, char         
-- @function [parent=#LaserSprite] create
-- @param self
-- @param #char $pszFileName
-- @param #rect_table $rect
-- @return LaserSprite#LaserSprite ret (return value: LaserSprite)

--------------------------------
-- 
-- @function [parent=#LaserSprite] createWithSpriteFrameName 
-- @param self
-- @param #char $pszSpriteFrameName
-- @return LaserSprite#LaserSprite ret (return value: LaserSprite)
        
--------------------------------
-- 
-- @function [parent=#LaserSprite] createWithSpriteFrame 
-- @param self
-- @param #cc.SpriteFrame $pSpriteFrame
-- @return LaserSprite#LaserSprite ret (return value: LaserSprite)
        
--------------------------------
-- 
-- @function [parent=#LaserSprite] LaserSprite 
-- @param self
-- @return LaserSprite#LaserSprite self (return value: LaserSprite)
        
return nil
