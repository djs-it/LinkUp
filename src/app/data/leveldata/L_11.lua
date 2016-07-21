return {
  version = "1.1",
  luaversion = "5.1",
  tiledversion = "v0.16.1-19-gc0c5dee",
  orientation = "orthogonal",
  renderorder = "right-down",
  width = 11,
  height = 12,
  tilewidth = 70,
  tileheight = 82,
  nextobjectid = 1,
  properties = {},
  tilesets = {
    {
      name = "asdf",
      firstgid = 1,
      tilewidth = 70,
      tileheight = 82,
      spacing = 3,
      margin = 3,
      image = "../MYlevel/tiledsets.png",
      imagewidth = 529,
      imageheight = 531,
      transparentcolor = "#ff00ff",
      tileoffset = {
        x = 0,
        y = 0
      },
      properties = {},
      terrains = {},
      tilecount = 42,
      tiles = {}
    }
  },
  layers = {
    {
      type = "tilelayer",
      name = "base",
      x = 0,
      y = 0,
      width = 11,
      height = 12,
      visible = true,
      opacity = 1,
      offsetx = 0,
      offsety = 0,
      properties = {},
      encoding = "lua",
      data = {
        0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
        0, 4, 4, 4, 4, 4, 4, 4, 4, 7, 0,
        0, 0, 0, 0, 0, 0, 0, 0, 0, 7, 0,
        0, 4, 4, 4, 4, 4, 4, 7, 0, 7, 0,
        0, 6, 0, 0, 0, 0, 0, 7, 0, 7, 0,
        0, 6, 0, 4, 4, 7, 0, 7, 0, 7, 0,
        0, 6, 0, 6, 0, 7, 0, 7, 0, 7, 0,
        0, 6, 0, 6, 0, 0, 0, 7, 0, 7, 0,
        0, 6, 0, 6, 5, 5, 5, 5, 0, 7, 0,
        0, 6, 0, 0, 0, 0, 0, 0, 0, 7, 0,
        0, 6, 5, 5, 5, 5, 5, 5, 5, 5, 0,
        0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0
      }
    }
  }
}
