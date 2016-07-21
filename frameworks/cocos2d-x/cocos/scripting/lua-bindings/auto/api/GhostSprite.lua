
--------------------------------
-- @module GhostSprite
-- @extend Node
-- @parent_module dnp

--------------------------------
-- 
-- @function [parent=#GhostSprite] setShader 
-- @param self
-- @return GhostSprite#GhostSprite self (return value: GhostSprite)
        
--------------------------------
-- 
-- @function [parent=#GhostSprite] getDownSample 
-- @param self
-- @return float#float ret (return value: float)
        
--------------------------------
-- 
-- @function [parent=#GhostSprite] visit 
-- @param self
-- @param #cc.Renderer renderer
-- @param #mat4_table parentTransform
-- @param #unsigned int parentFlags
-- @return GhostSprite#GhostSprite self (return value: GhostSprite)
        
--------------------------------
-- 
-- @function [parent=#GhostSprite] setDownSample 
-- @param self
-- @param #float value
-- @return GhostSprite#GhostSprite self (return value: GhostSprite)
        
--------------------------------
-- @overload self, cc.SpriteFrame, float, float         
-- @overload self, string, float, float         
-- @overload self, cc.Sprite, float, float         
-- @function [parent=#GhostSprite] init
-- @param self
-- @param #cc.Sprite sprite
-- @param #float filterR
-- @param #float fliterSrcScale
-- @return bool#bool ret (return value: bool)

--------------------------------
-- 
-- @function [parent=#GhostSprite] getRefSprite 
-- @param self
-- @return Sprite#Sprite ret (return value: cc.Sprite)
        
--------------------------------
-- 
-- @function [parent=#GhostSprite] onBiggerRTPassUnifoAndBindTex 
-- @param self
-- @param #mat4_table transform
-- @param #unsigned int flags
-- @return GhostSprite#GhostSprite self (return value: GhostSprite)
        
--------------------------------
-- 
-- @function [parent=#GhostSprite] onFilterXRTPassUnifoAndBindTex 
-- @param self
-- @param #mat4_table transform
-- @param #unsigned int flags
-- @return GhostSprite#GhostSprite self (return value: GhostSprite)
        
--------------------------------
-- 
-- @function [parent=#GhostSprite] create 
-- @param self
-- @param #char $pszFileName
-- @return GhostSprite#GhostSprite ret (return value: GhostSprite)
        
--------------------------------
-- 
-- @function [parent=#GhostSprite] GhostSprite 
-- @param self
-- @return GhostSprite#GhostSprite self (return value: GhostSprite)
        
return nil
