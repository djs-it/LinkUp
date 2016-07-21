local AnimalCell = class("AnimalCell",cc.load("mvc").ViewBase)
AnimalCell.RESOURCE_FILENAME = "bmanimal/animal_cell"

function AnimalCell:onCreate()
    self:get():move(0,0)
end

function AnimalCell:onClick(path,node,funcName)
    if funcName == "btnAnmCell" then
        local function btnCallback(node,eventType)
            print("btnAnmCell")
            AppViews:getView(LAYERS.animal_main):showPropertyCsd()
        end
        return btnCallback
    else
        local function btnCallback(node,eventType)
            print("btnAnmCell:nnnnnnnn")
        end
        return btnCallback
    end
end

function AnimalCell:initView(anmId,isHave,isSelect)
    self.anmId = anmId
    local anmSp = display.newSprite(string.format("#anm-%s.png",anmId))
    anmSp:addTo(self.animalcsd)
    
    self.isHave =isHave
    if isHave then
        self.nohavecsd:hide()
    else
        self.nohavecsd:show()
    end
    
    if isSelect then
        self.selectcsd:show()
    else
        self.selectcsd:hide()
    end
    
end


return AnimalCell